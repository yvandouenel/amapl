<?php
/**
 * @file
 * atterrissage_aga.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function atterrissage_aga_user_default_roles() {
  $roles = array();

  // Exported role: AGCS.
  $roles['AGCS'] = array(
    'name' => 'AGCS',
    'weight' => 7,
  );

  return $roles;
}
