<?php
/**
 * @file
 * domainedo_media.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function domainedo_media_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_unique_headband';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_unique_headband'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ds_extras_view_modes_unique_headband';
  $strongarm->value = array(
    0 => 'default',
    1 => 'teaser',
  );
  $export['ds_extras_view_modes_unique_headband'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_actions_powers';
  $strongarm->value = array(
    'fetch' => 0,
    'edit' => 1,
    'view' => 2,
    'delete' => 3,
  );
  $export['scald_actions_powers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_atom_defaults';
  $strongarm->value = array(
    'image' => (object) array(
      'thumbnail_source' => 'public://atoms/image.png',
      'description' => '',
      'upload_type' => 'plupload',
      'actions' => 5,
    ),
  );
  $export['scald_atom_defaults'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_author_vocabulary';
  $strongarm->value = 'scald_authors';
  $export['scald_author_vocabulary'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_context_fallbacks';
  $strongarm->value = array(
    '@default' => array(
      0 => 'title',
    ),
  );
  $export['scald_context_fallbacks'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_custom_contexts';
  $strongarm->value = array(
    'list' => array(
      'name' => 'list',
      'title' => 'List',
      'description' => 'To be used in views, page display type.',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
      'provider' => 'scald',
      'type_format' => array(
        'audio' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'file' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'gallery' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'image' => array(
          'file_format' => '*',
          'transcoder' => 'style-medium',
        ),
        'twitter' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
        'video' => array(
          'file_format' => '*',
          'transcoder' => 'passthrough',
        ),
      ),
      'transcoder' => array(
        'audio' => array(
          '*' => 'passthrough',
        ),
        'file' => array(
          '*' => 'passthrough',
        ),
        'gallery' => array(
          '*' => 'passthrough',
        ),
        'image' => array(
          '*' => 'style-medium',
        ),
        'twitter' => array(
          '*' => 'passthrough',
        ),
        'video' => array(
          '*' => 'passthrough',
        ),
      ),
      'player' => array(
        'audio' => array(
          '*' => 'default',
        ),
        'file' => array(
          '*' => 'default',
        ),
        'gallery' => array(
          '*' => 'default',
        ),
        'image' => array(
          '*' => 'default',
          'settings' => array(),
        ),
        'twitter' => array(
          '*' => 'default',
        ),
        'video' => array(
          '*' => 'default',
        ),
      ),
    ),
    'block' => array(
      'name' => 'block',
      'title' => 'Block',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'slideshow_home' => array(
      'name' => 'slideshow_home',
      'title' => 'slideshow_home',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'full_show' => array(
      'name' => 'full_show',
      'title' => 'Full show',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'zoom' => array(
      'name' => 'zoom',
      'title' => 'zoom',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'icons' => array(
      'name' => 'icons',
      'title' => 'icons',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    '240x106_scald' => array(
      'name' => '240x106_scald',
      'title' => '240x106_scald',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'liste_logo_aga' => array(
      'name' => 'liste_logo_aga',
      'title' => 'liste-logo-aga',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'lettre_info' => array(
      'name' => 'lettre_info',
      'title' => 'lettre info',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
    'headband_unique' => array(
      'name' => 'headband_unique',
      'title' => 'headband unique',
      'description' => '',
      'render_language' => 'XHTML',
      'parseable' => TRUE,
      'formats' => array(),
    ),
  );
  $export['scald_custom_contexts'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'scald_tags_vocabulary';
  $strongarm->value = 'scald_tags';
  $export['scald_tags_vocabulary'] = $strongarm;

  return $export;
}
