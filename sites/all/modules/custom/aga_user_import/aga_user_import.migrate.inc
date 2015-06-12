<?php

/**
 * @file
 * AGA User Import migrations.
 */

/**
 * Implements hook_migrate_api().
 */
function aga_user_import_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'aga' => array(
        'title' => t('AGA Imports'),
      ),
    ),
    // Migrations are dynamically declared.
    // @see aga_user_import_enable().
  );
  return $api;
}
