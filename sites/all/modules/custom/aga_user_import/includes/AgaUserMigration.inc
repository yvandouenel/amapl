<?php
/**
 * @file
 * AgaUserMigration class definition file.
 */

/**
 * Class AgaUserMigration.
 */
class AgaUserMigration extends Migration {

  /** @var string Source file path */
  protected $filepath;

  /** @var int Users role id */
  protected $role_rid;

  /**
   * {@inheritdoc}
   */
  public function __construct($arguments = array()) {
    parent::__construct($arguments);

    $this->filepath = DRUPAL_ROOT . '/' . $arguments['source_file'];
    $this->role_rid = $arguments['role_rid'];

    $this->description = t('Import users from AGA external database.');

    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'login' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
          'description' => 'User login',
        ),
      ),
      MigrateDestinationUser::getKeySchema()
    );

    $options = array(
      'header_rows'   => TRUE,
      'delimiter'     => ';',
      'enclosure'     => '"',
    );
    $this->source = new MigrateSourceCSV($arguments['source_file'], $this->csvcolumns(), $options, $this->fields());

    $this->destination = new MigrateDestinationUser();

    $this->addFieldMapping('mail', 'mail')
      ->description('See prepareRow().');
    $this->addFieldMapping('name', 'login');
    $this->addFieldMapping('pass', 'password');
    $this->addFieldMapping('status')
      ->defaultValue(1);
    $this->addFieldMapping('roles', 'roles')
      ->description('See prepareRow().');

    // Default values.
    $this->addFieldMapping('created')->defaultValue(REQUEST_TIME);
    $this->addFieldMapping('login')->defaultValue(REQUEST_TIME);
  }

  /**
   * CSV file columns.
   *
   * @return array
   */
  protected function csvcolumns() {
    $columns[0] = array('login', 'User login');
    $columns[1] = array('password', 'User password');
    $columns[2] = array('identity', 'User realname');
    return $columns;
  }

  /**
   * Prepare missing data.
   *
   * @param $row
   * @return bool
   */
  public function prepareRow($row) {
    parent::prepareRow($row);

    // Create fake email address.
    $row->mail = $row->login . '@' . $row->login . '.noreply.com';

    // Create roles array.
    $row->roles = array(
      DRUPAL_AUTHENTICATED_RID => DRUPAL_AUTHENTICATED_RID,
      $this->role_rid => $this->role_rid,
    );

    // Ensure that login and password are not empty.
    return !empty($row->login) && !empty($row->password);
  }

  /**
   * List additional fields created in prepareRow().
   *
   * @return array
   */
  protected function fields() {
    return array(
      'mail'  => 'User generated email',
      'roles' => 'User generated roles',
    );
  }

  /**
   * At the beginning of the process, disable all the existing users flagged
   * with this migration role.
   */
  protected function preImport() {
    parent::preImport();

    // Get all users having this role.
    $query = db_select('users_roles', 'ur');
    $query->join('users', 'u', 'ur.uid = u.uid');
    $query->fields('u', array('uid'))
      ->condition('ur.rid', $this->role_rid);
    $uids = $query->execute()->fetchCol();

    // Disable the users.
    if (!empty($uids)) {
      db_update('users')
        ->fields(array(
          'status' => 0,
        ))
        ->condition('uid', $uids)
        ->execute();
    }
  }

  /**
   * At the end of the process, delete the source file for security reasons.
   */
  protected function postImport() {
    parent::postImport();

    // Delete the source file for security reasons.
    unlink($this->filepath);
  }
}
