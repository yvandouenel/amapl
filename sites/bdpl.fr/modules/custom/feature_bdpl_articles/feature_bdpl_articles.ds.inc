<?php
/**
 * @file
 * feature_bdpl_articles.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_bdpl_articles_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|article|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'article';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'lien_impression' => array(
      'weight' => '7',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'changed_date' => array(
      'weight' => '6',
      'label' => 'inline',
      'format' => 'ds_post_date_tres_court_francais',
    ),
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
    'field_article_date' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Date de parution',
        ),
      ),
    ),
  );
  $export['node|article|default'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function feature_bdpl_articles_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'lien_impression';
  $ds_field->label = 'Lien impression';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = '';
  $ds_field->properties = array(
    'code' => array(
      'value' => '<p><a href="/print/[node:nid]">Imprimer</a></p>
',
      'format' => 'full_html',
    ),
    'use_token' => 1,
  );
  $export['lien_impression'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_bdpl_articles_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|article|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'article';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_article_linked',
        1 => 'title',
        2 => 'field_article_news_linked',
        3 => 'field_image',
        4 => 'body',
        5 => 'field_article_date',
        6 => 'changed_date',
        7 => 'lien_impression',
      ),
    ),
    'fields' => array(
      'field_article_linked' => 'ds_content',
      'title' => 'ds_content',
      'field_article_news_linked' => 'ds_content',
      'field_image' => 'ds_content',
      'body' => 'ds_content',
      'field_article_date' => 'ds_content',
      'changed_date' => 'ds_content',
      'lien_impression' => 'ds_content',
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
  $export['node|article|default'] = $ds_layout;

  return $export;
}
