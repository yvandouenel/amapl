<?php
/**
 * @file
 * featurecoocontext.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function featurecoocontext_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu_block-5'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 5,
    'module' => 'menu_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'lppl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lppl',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
      'vigipl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'vigipl',
        'weight' => 0,
      ),
    ),
    'title' => 'Sous Menu TVA',
    'visibility' => 0,
  );

  return $export;
}
