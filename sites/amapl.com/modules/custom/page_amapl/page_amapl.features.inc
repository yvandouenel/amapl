<?php
/**
 * @file
 * page_amapl.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function page_amapl_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function page_amapl_node_info() {
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
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function page_amapl_paragraphs_info() {
  $items = array(
    'drop_down_para' => array(
      'name' => 'Titre et paragraphe déroulant bleu',
      'bundle' => 'drop_down_para',
      'locked' => '1',
    ),
    'drop_down_para_orange' => array(
      'name' => 'Titre et paragraphe déroulant orange',
      'bundle' => 'drop_down_para_orange',
      'locked' => '1',
    ),
    'liste_pdf_bleus' => array(
      'name' => 'Liste pdf bleus',
      'bundle' => 'liste_pdf_bleus',
      'locked' => '1',
    ),
    'liste_pdf_orange' => array(
      'name' => 'Liste pdf orange',
      'bundle' => 'liste_pdf_orange',
      'locked' => '1',
    ),
    'titre_et_paragraphe' => array(
      'name' => '2 cols - Titre et paragraphe',
      'bundle' => 'titre_et_paragraphe',
      'locked' => '1',
    ),
  );
  return $items;
}
