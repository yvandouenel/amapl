<?php
/**
 * @file
 * le_savez_vous.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function le_savez_vous_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function le_savez_vous_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function le_savez_vous_node_info() {
  $items = array(
    'le_savez_vous' => array(
      'name' => t('Le savez-vous'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
