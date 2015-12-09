<?php
/**
 * @file
 * atterrissage_aga.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function atterrissage_aga_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any bloc_logo bean'.
  $permissions['view any bloc_logo bean'] = array(
    'name' => 'view any bloc_logo bean',
    'roles' => array(
      'Import ADH' => 'Import ADH',
      'Import COR' => 'Import COR',
      'adherent' => 'adherent',
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'contributeur' => 'contributeur',
      'utilisateur générique' => 'utilisateur générique',
      'webmaster' => 'webmaster',
    ),
    'module' => 'bean',
  );

  // Exported permission: 'view any bloc_simple bean'.
  $permissions['view any bloc_simple bean'] = array(
    'name' => 'view any bloc_simple bean',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'webmaster' => 'webmaster',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
