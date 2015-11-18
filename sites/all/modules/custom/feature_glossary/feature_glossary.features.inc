<?php
/**
 * @file
 * feature_glossary.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_glossary_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_glossary_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_glossary_node_info() {
  $items = array(
    'terme_du_glossaire' => array(
      'name' => t('Terme du glossaire'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
