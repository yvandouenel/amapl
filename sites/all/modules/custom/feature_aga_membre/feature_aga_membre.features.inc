<?php
/**
 * @file
 * feature_aga_membre.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_aga_membre_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_aga_membre_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_aga_membre_node_info() {
  $items = array(
    'aga_membre' => array(
      'name' => t('AGA membre'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
