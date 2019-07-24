<?php
/**
 * @file
 * feature_news.ds.inc
 */

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
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'body',
        1 => 'field_news_image',
        2 => 'field_scald_video',
        3 => 'field_scald_file',
      ),
      'right' => array(
        4 => 'field_news_linked',
        5 => 'field_news_event_linked',
        6 => 'field_news_article_linked',
        7 => 'addtoany',
      ),
    ),
    'fields' => array(
      'body' => 'left',
      'field_news_image' => 'left',
      'field_scald_video' => 'left',
      'field_scald_file' => 'left',
      'field_news_linked' => 'right',
      'field_news_event_linked' => 'right',
      'field_news_article_linked' => 'right',
      'addtoany' => 'right',
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
    'layout_disable_css' => 0,
  );
  $export['node|news|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function feature_news_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'zoom';
  $ds_view_mode->label = 'zoom';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['zoom'] = $ds_view_mode;

  return $export;
}
