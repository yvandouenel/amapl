<?php
/**
 * @file
 * feature_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-logo_constellation'] = array(
    'cache' => -1,
    'custom' => 0,
    'machine_name' => 'logo_constellation',
    'module' => 'block',
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
        'weight' => -28,
      ),
      'lppl' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'lppl',
        'weight' => -28,
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

  $export['menu_block-1'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 1,
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
      'bootamapl' => array(
        'region' => 'navigation',
        'status' => 1,
        'theme' => 'bootamapl',
        'weight' => -15,
      ),
      'lppl' => array(
        'region' => 'user_first',
        'status' => 1,
        'theme' => 'lppl',
        'weight' => -15,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  $export['menu_block-2'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 2,
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
      'bootamapl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bootamapl',
        'weight' => -30,
      ),
      'lppl' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'lppl',
        'weight' => -30,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Menu bas',
    'visibility' => 0,
  );

  $export['views-le_saviez_vous_ss-block'] = array(
    'cache' => -1,
    'custom' => 0,
    'delta' => 'le_saviez_vous_ss-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '<front>',
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
        'weight' => -27,
      ),
      'lppl' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'lppl',
        'weight' => -27,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  return $export;
}
