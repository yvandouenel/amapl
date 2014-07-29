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
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_date',
        2 => 'field_event_image',
        3 => 'field_event_publication_date',
        4 => 'field_scald_file',
        5 => 'field_event_home_dump',
        6 => 'field_scald_video',
        7 => 'field_event_place',
        8 => 'field_event_speaker',
        9 => 'field_event_cost_public',
        10 => 'field_cost_members',
        11 => 'field_event_registration',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_date' => 'ds_content',
      'field_event_image' => 'ds_content',
      'field_event_publication_date' => 'ds_content',
      'field_scald_file' => 'ds_content',
      'field_event_home_dump' => 'ds_content',
      'field_scald_video' => 'ds_content',
      'field_event_place' => 'ds_content',
      'field_event_speaker' => 'ds_content',
      'field_event_cost_public' => 'ds_content',
      'field_cost_members' => 'ds_content',
      'field_event_registration' => 'ds_content',
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
  $export['node|event|default'] = $ds_layout;

  return $export;
}
