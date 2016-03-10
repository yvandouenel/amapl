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

  $export['bean-edito'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'edito',
    'module' => 'bean',
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
      'lppl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lppl',
        'weight' => -23,
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
        'weight' => -23,
      ),
    ),
    'title' => '<none>',
    'visibility' => 1,
  );

  $export['bean-je-m-installe'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'je-m-installe',
    'module' => 'bean',
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
      'lppl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lppl',
        'weight' => -17,
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
        'weight' => -17,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

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
      'lppl' => array(
        'region' => 'footer_first',
        'status' => 1,
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
        'weight' => -29,
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
      'lppl' => array(
        'region' => 'user_first',
        'status' => 1,
        'theme' => 'lppl',
        'weight' => -29,
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
        'weight' => -29,
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
      'lppl' => array(
        'region' => 'footer_first',
        'status' => 1,
        'theme' => 'lppl',
        'weight' => -1,
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
        'weight' => -27,
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
      'lppl' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'lppl',
        'weight' => -20,
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
        'weight' => -20,
      ),
    ),
    'title' => 'LE SAVEZ-VOUS ?',
    'visibility' => 1,
  );

  return $export;
}
