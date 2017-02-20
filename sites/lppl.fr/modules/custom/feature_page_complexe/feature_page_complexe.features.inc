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

/**
 * Implements hook_paragraphs_info().
 */
function feature_page_complexe_paragraphs_info() {
  $items = array(
    '2_colonnes' => array(
      'name' => 'Deux colonnes',
      'bundle' => '2_colonnes',
      'locked' => '1',
    ),
    'encarts_50' => array(
      'name' => 'v2017 encart 50%',
      'bundle' => 'encarts_50',
      'locked' => '1',
    ),
    'image_2_col' => array(
      'name' => 'Image',
      'bundle' => 'image_2_col',
      'locked' => '1',
    ),
    'paragraphe_simple' => array(
      'name' => 'Paragraphe simple',
      'bundle' => 'paragraphe_simple',
      'locked' => '1',
    ),
    'titre_paragraphe_bouton' => array(
      'name' => 'Titre-paragraphe-bouton',
      'bundle' => 'titre_paragraphe_bouton',
      'locked' => '1',
    ),
    'une_colonne' => array(
      'name' => 'Une colonne',
      'bundle' => 'une_colonne',
      'locked' => '1',
    ),
    'v2017_2col_6_6' => array(
      'name' => 'v2017 2 colonnes 1/2 - 1/2',
      'bundle' => 'v2017_2col_6_6',
      'locked' => '1',
    ),
    'v2017_2col_8_4' => array(
      'name' => 'v2017 2 colonnes 2/3 - 1/3',
      'bundle' => 'v2017_2col_8_4',
      'locked' => '1',
    ),
    'v2017_3col_4_4_4' => array(
      'name' => 'v2017 3 colonnes 1/3 1/3 1/3',
      'bundle' => 'v2017_3col_4_4_4',
      'locked' => '1',
    ),
  );
  return $items;
}
