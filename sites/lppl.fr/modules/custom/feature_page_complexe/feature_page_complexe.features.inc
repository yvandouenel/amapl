<?php
/**
 * @file
 * feature_page_complexe.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_page_complexe_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_page_complexe_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Page classique'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
