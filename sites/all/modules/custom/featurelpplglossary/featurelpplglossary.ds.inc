<?php
/**
 * @file
 * featurelpplglossary.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function featurelpplglossary_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'field_article_linked' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Articles associés',
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
    'field_article_news_linked' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Actualités associées',
          'lb-el' => 'h3',
          'lb-cl' => 'h3-entity-linked',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'div-link-dark-grey',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_article_event_linked' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Evénements associés',
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
    'field_article_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Date de parution',
        ),
      ),
    ),
    'field_date_revision' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Date de révision :',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function featurelpplglossary_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'bootstrap_8_4';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image',
        1 => 'body',
        2 => 'field_article_date',
        7 => 'field_date_revision',
      ),
      'right' => array(
        3 => 'field_article_encart',
        4 => 'field_article_linked',
        5 => 'field_article_news_linked',
        6 => 'field_article_event_linked',
      ),
    ),
    'fields' => array(
      'field_image' => 'left',
      'body' => 'left',
      'field_article_date' => 'left',
      'field_article_encart' => 'right',
      'field_article_linked' => 'right',
      'field_article_news_linked' => 'right',
      'field_article_event_linked' => 'right',
      'field_date_revision' => 'left',
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
  $export['node|article|default'] = $ds_layout;

  return $export;
}
