<?php
/**
 * @file
 * atterrissage_aga.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function atterrissage_aga_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['bean-agcs-landing-page'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'agcs-landing-page',
    'module' => 'bean',
    'node_types' => array(),
    'pages' => 'agcs',
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
        'weight' => -25,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 1,
  );

  $export['bean-atterrissage-amapl'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'atterrissage-amapl',
    'module' => 'bean',
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-block-front'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'block-front',
    'module' => 'bean',
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-logo-agcs'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'logo-agcs',
    'module' => 'bean',
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-logo-amapl'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'logo-amapl',
    'module' => 'bean',
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['bean-logo-generique'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'logo-generique',
    'module' => 'bean',
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
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}
