<?php
/**
 * @file
 * feature_artist_gallery.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function feature_artist_gallery_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|galerie_adherents|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'galerie_adherents';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_image_gallery',
      ),
      'right' => array(
        1 => 'body',
        2 => 'field_ga_name',
        3 => 'field_ga_prenom',
        4 => 'field_ga_activity',
        5 => 'field_geo_address',
        6 => 'field_geo_zip',
        7 => 'field_geo_ville',
        8 => 'field_geo_phone',
        9 => 'field_geo_email',
        10 => 'field_geo_web',
        11 => 'field_geo_coordinates',
      ),
    ),
    'fields' => array(
      'field_image_gallery' => 'left',
      'body' => 'right',
      'field_ga_name' => 'right',
      'field_ga_prenom' => 'right',
      'field_ga_activity' => 'right',
      'field_geo_address' => 'right',
      'field_geo_zip' => 'right',
      'field_geo_ville' => 'right',
      'field_geo_phone' => 'right',
      'field_geo_email' => 'right',
      'field_geo_web' => 'right',
      'field_geo_coordinates' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|galerie_adherents|default'] = $ds_layout;

  return $export;
}
