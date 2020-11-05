<?php
/**
 * @file
 * amapl_trainings.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function amapl_trainings_user_default_roles() {
  $roles = array();

  // Exported role: contrib formation.
  $roles['contrib formation'] = array(
    'name' => 'contrib formation',
    'weight' => 3,
  );

  return $roles;
}
