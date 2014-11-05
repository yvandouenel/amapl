<?php
/**
 * @file
 * feature_event.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_event_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|event|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'event';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
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
    'regions' => array(
      'left' => array(
        0 => 'field_event_speaker',
        1 => 'body',
        2 => 'field_event_image',
        3 => 'field_scald_video',
      ),
      'right' => array(
        0 => 'group_practical_event',
        1 => 'field_event_linked',
        2 => 'field_event_news_linked',
        3 => 'field_event_article_linked',
        4 => 'en_pratique',
        5 => 'field_dates',
        6 => 'field_event_place',
        7 => 'field_cost_members',
        8 => 'field_event_cost_public',
        9 => 'field_scald_file',
        10 => 'field_event_registration',
      ),
    ),
    'fields' => array(
      'field_event_speaker' => 'left',
      'body' => 'left',
      'field_event_image' => 'left',
      'field_scald_video' => 'left',
      'group_practical_event' => 'right',
      'field_event_linked' => 'right',
      'field_event_news_linked' => 'right',
      'field_event_article_linked' => 'right',
      'en_pratique' => 'right',
      'field_dates' => 'right',
      'field_event_place' => 'right',
      'field_cost_members' => 'right',
      'field_event_cost_public' => 'right',
      'field_scald_file' => 'right',
      'field_event_registration' => 'right',
    ),
  );
  $export['node|event|default'] = $ds_layout;

  return $export;
}
