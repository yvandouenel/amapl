<?php
/**
 * @file
 * feature_amapl_headband.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_amapl_headband_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_amapl_headband_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_amapl_headband_node_info() {
  $items = array(
    'mixt_headband' => array(
      'name' => t('bandeau mixte'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
