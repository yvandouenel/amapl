<?php
/**
 * @file
 * feature_news.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function feature_news_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['aggregator-category-1'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'category-1',
    'module' => 'aggregator',
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

  $export['aggregator-feed-1'] = array(
    'cache' => 1,
    'custom' => 0,
    'delta' => 'feed-1',
    'module' => 'aggregator',
    'node_types' => array(),
    'pages' => 'news/member',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootamapl' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'bootamapl',
        'weight' => -33,
      ),
      'lppl' => array(
        'region' => 'content',
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
    ),
    'title' => 'Actualités base documentaire BNC',
    'visibility' => 1,
  );

  return $export;
}
