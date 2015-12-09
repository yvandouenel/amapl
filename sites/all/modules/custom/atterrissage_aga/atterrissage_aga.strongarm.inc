<?php
/**
 * @file
 * atterrissage_aga.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function atterrissage_aga_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_atterrissage_aga';
  $strongarm->value = 0;
  $export['comment_anonymous_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_atterrissage_aga';
  $strongarm->value = '1';
  $export['comment_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_atterrissage_aga';
  $strongarm->value = 1;
  $export['comment_default_mode_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_atterrissage_aga';
  $strongarm->value = '50';
  $export['comment_default_per_page_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_atterrissage_aga';
  $strongarm->value = 1;
  $export['comment_form_location_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_atterrissage_aga';
  $strongarm->value = '1';
  $export['comment_preview_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_atterrissage_aga';
  $strongarm->value = 1;
  $export['comment_subject_field_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_atterrissage_aga';
  $strongarm->value = '0';
  $export['language_content_type_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_atterrissage_aga';
  $strongarm->value = array(
    0 => 'main-menu',
  );
  $export['menu_options_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_atterrissage_aga';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_atterrissage_aga';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_atterrissage_aga';
  $strongarm->value = '1';
  $export['node_preview_atterrissage_aga'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_atterrissage_aga';
  $strongarm->value = 0;
  $export['node_submitted_atterrissage_aga'] = $strongarm;

  return $export;
}
