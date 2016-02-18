<?php
/**
 * @file
 * atterrissage_aga.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function atterrissage_aga_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "bean_admin_ui" && $api == "bean") {
    return array("version" => "5");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function atterrissage_aga_node_info() {
  $items = array(
    'atterrissage_aga' => array(
      'name' => t('Atterrissage AGA'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  return $items;
}
