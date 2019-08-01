<?php
/**
 * @file
 * feature_downloading_files.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_downloading_files_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_downloading_files_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_downloading_files_node_info() {
  $items = array(
    'downloading_file' => array(
      'name' => t('Fichier en téléchargement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Titre'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function feature_downloading_files_paragraphs_info() {
  $items = array(
    'file_and_img' => array(
      'name' => 'Fichiers et image',
      'bundle' => 'file_and_img',
      'locked' => '1',
    ),
  );
  return $items;
}
