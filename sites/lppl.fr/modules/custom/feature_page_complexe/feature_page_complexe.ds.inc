<?php
/**
 * @file
 * feature_page_complexe.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_page_complexe_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|page|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_cp_body',
      ),
    ),
    'fields' => array(
      'field_cp_body' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|paragraphe_simple|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'paragraphe_simple';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_corps',
      ),
    ),
    'fields' => array(
      'field_corps' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|paragraphe_simple|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|titre_paragraphe_bouton|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'titre_paragraphe_bouton';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_tpb_title',
        1 => 'field_tpb_paragraphe',
        2 => 'field_tpb_button',
      ),
    ),
    'fields' => array(
      'field_tpb_title' => 'ds_content',
      'field_tpb_paragraphe' => 'ds_content',
      'field_tpb_button' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['paragraphs_item|titre_paragraphe_bouton|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|v2017_2col_6_6|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'v2017_2col_6_6';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_colonne_1_moitie',
        1 => 'field_colonne_2_moitie',
      ),
    ),
    'fields' => array(
      'field_colonne_1_moitie' => 'ds_content',
      'field_colonne_2_moitie' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|v2017_2col_6_6|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'paragraphs_item|v2017_2col_8_4|default';
  $ds_layout->entity_type = 'paragraphs_item';
  $ds_layout->bundle = 'v2017_2col_8_4';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_colonne_2_3',
        1 => 'field_colonne_1_3',
      ),
    ),
    'fields' => array(
      'field_colonne_2_3' => 'ds_content',
      'field_colonne_1_3' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['paragraphs_item|v2017_2col_8_4|default'] = $ds_layout;

  return $export;
}
