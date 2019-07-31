<?php
/**
 * @file
 * feature_lettre_info.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_lettre_info_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_lettre_info_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function feature_lettre_info_image_default_styles() {
  $styles = array();

  // Exported image style: lettre_info.
  $styles['lettre_info'] = array(
    'label' => 'lettre info (588x836)',
    'effects' => array(
      4 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 588,
          'height' => 836,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function feature_lettre_info_node_info() {
  $items = array(
    'lettre_d_information' => array(
      'name' => t('Lettre d\'information'),
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
