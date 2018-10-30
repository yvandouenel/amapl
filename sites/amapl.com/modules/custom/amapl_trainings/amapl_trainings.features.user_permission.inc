<?php
/**
 * @file
 * amapl_trainings.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function amapl_trainings_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer inscription_amapl registration'.
  $permissions['administer inscription_amapl registration'] = array(
    'name' => 'administer inscription_amapl registration',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own inscription_amapl registration'.
  $permissions['administer own inscription_amapl registration'] = array(
    'name' => 'administer own inscription_amapl registration',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer trainings'.
  $permissions['administer trainings'] = array(
    'name' => 'administer trainings',
    'roles' => array(),
    'module' => 'amapl_trainings',
  );

  // Exported permission: 'create inscription_amapl registration'.
  $permissions['create inscription_amapl registration'] = array(
    'name' => 'create inscription_amapl registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create inscription_amapl registration other anonymous'.
  $permissions['create inscription_amapl registration other anonymous'] = array(
    'name' => 'create inscription_amapl registration other anonymous',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create inscription_amapl registration other users'.
  $permissions['create inscription_amapl registration other users'] = array(
    'name' => 'create inscription_amapl registration other users',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create inscription_amapl registration self'.
  $permissions['create inscription_amapl registration self'] = array(
    'name' => 'create inscription_amapl registration self',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create training content'.
  $permissions['create training content'] = array(
    'name' => 'create training content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create training_session content'.
  $permissions['create training_session content'] = array(
    'name' => 'create training_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete any inscription_amapl registration'.
  $permissions['delete any inscription_amapl registration'] = array(
    'name' => 'delete any inscription_amapl registration',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any training content'.
  $permissions['delete any training content'] = array(
    'name' => 'delete any training content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any training_session content'.
  $permissions['delete any training_session content'] = array(
    'name' => 'delete any training_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own inscription_amapl registration'.
  $permissions['delete own inscription_amapl registration'] = array(
    'name' => 'delete own inscription_amapl registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own training content'.
  $permissions['delete own training content'] = array(
    'name' => 'delete own training content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete own training_session content'.
  $permissions['delete own training_session content'] = array(
    'name' => 'delete own training_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in training_type'.
  $permissions['delete terms in training_type'] = array(
    'name' => 'delete terms in training_type',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any training content'.
  $permissions['edit any training content'] = array(
    'name' => 'edit any training content',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any training_session content'.
  $permissions['edit any training_session content'] = array(
    'name' => 'edit any training_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit inscription_amapl registration state'.
  $permissions['edit inscription_amapl registration state'] = array(
    'name' => 'edit inscription_amapl registration state',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit own training content'.
  $permissions['edit own training content'] = array(
    'name' => 'edit own training content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit own training_session content'.
  $permissions['edit own training_session content'] = array(
    'name' => 'edit own training_session content',
    'roles' => array(),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in training_type'.
  $permissions['edit terms in training_type'] = array(
    'name' => 'edit terms in training_type',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'update any inscription_amapl registration'.
  $permissions['update any inscription_amapl registration'] = array(
    'name' => 'update any inscription_amapl registration',
    'roles' => array(
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own inscription_amapl registration'.
  $permissions['update own inscription_amapl registration'] = array(
    'name' => 'update own inscription_amapl registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view inscription_amapl registration'.
  $permissions['view inscription_amapl registration'] = array(
    'name' => 'view inscription_amapl registration',
    'roles' => array(
      'contributeur' => 'contributeur',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own inscription_amapl registration'.
  $permissions['view own inscription_amapl registration'] = array(
    'name' => 'view own inscription_amapl registration',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
