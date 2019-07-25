<?php
/**
 * @file
 * amapl_trainings.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function amapl_trainings_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['menu-menu-calendar-listing-switcher'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-calendar-listing-switcher',
    'module' => 'menu',
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
      'bootamapl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootamapl',
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['menu-menu-trainings-calendar'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'menu-trainings-calendar',
    'module' => 'menu',
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
      'bootamapl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootamapl',
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
