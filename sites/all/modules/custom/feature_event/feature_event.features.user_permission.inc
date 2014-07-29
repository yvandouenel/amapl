<?php
/**
 * @file
 * feature_event.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function feature_event_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer event_subscribe registration'.
  $permissions['administer event_subscribe registration'] = array(
    'name' => 'administer event_subscribe registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own event_subscribe registration'.
  $permissions['administer own event_subscribe registration'] = array(
    'name' => 'administer own event_subscribe registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event_subscribe registration'.
  $permissions['create event_subscribe registration'] = array(
    'name' => 'create event_subscribe registration',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event_subscribe registration other anonymous'.
  $permissions['create event_subscribe registration other anonymous'] = array(
    'name' => 'create event_subscribe registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event_subscribe registration other users'.
  $permissions['create event_subscribe registration other users'] = array(
    'name' => 'create event_subscribe registration other users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any event_subscribe registration'.
  $permissions['delete any event_subscribe registration'] = array(
    'name' => 'delete any event_subscribe registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete own event_subscribe registration'.
  $permissions['delete own event_subscribe registration'] = array(
    'name' => 'delete own event_subscribe registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit event_subscribe registration state'.
  $permissions['edit event_subscribe registration state'] = array(
    'name' => 'edit event_subscribe registration state',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any event_subscribe registration'.
  $permissions['update any event_subscribe registration'] = array(
    'name' => 'update any event_subscribe registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update own event_subscribe registration'.
  $permissions['update own event_subscribe registration'] = array(
    'name' => 'update own event_subscribe registration',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view event_subscribe registration'.
  $permissions['view event_subscribe registration'] = array(
    'name' => 'view event_subscribe registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'view own event_subscribe registration'.
  $permissions['view own event_subscribe registration'] = array(
    'name' => 'view own event_subscribe registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
