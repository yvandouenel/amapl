<?php
/**
 * @file
 * feature_news.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_news_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'lien_impression' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_news_linked' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Actualités liées ',
          'lb-el' => 'h3',
          'lb-cl' => 'h3-entity-linked',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'div-link-light-grey',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_news_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Références',
          'lb-el' => 'h2',
          'lb-cl' => 'h3-entity-linked',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'div-link-light-grey',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_news_date_inline' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Date de mise en ligne',
        ),
      ),
    ),
  );
  $export['node|news|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|news|title_and_date';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'news';
  $ds_fieldsetting->view_mode = 'title_and_date';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => 'news-link-news',
        'ft' => array(),
      ),
    ),
  );
  $export['node|news|title_and_date'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_news_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_8_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'lien_impression',
        1 => 'field_news_date_inline',
        2 => 'body',
        3 => 'field_news_image',
        4 => 'field_scald_video',
        5 => 'field_scald_file',
      ),
      'right' => array(
        6 => 'field_news_ref',
        7 => 'field_news_linked',
      ),
    ),
    'fields' => array(
      'lien_impression' => 'left',
      'field_news_date_inline' => 'left',
      'body' => 'left',
      'field_news_image' => 'left',
      'field_scald_video' => 'left',
      'field_scald_file' => 'left',
      'field_news_ref' => 'right',
      'field_news_linked' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|news|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|news|title_and_date';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'news';
  $ds_layout->view_mode = 'title_and_date';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_news_date_inline',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_news_date_inline' => 'ds_content',
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
  $export['node|news|title_and_date'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function feature_news_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'title_and_date';
  $ds_view_mode->label = 'Titre et date';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['title_and_date'] = $ds_view_mode;

  return $export;
}
