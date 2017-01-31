<?php
/**
 * @file
 * feature_event.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function feature_event_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|event|default';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'event';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'en_pratique' => array(
      'weight' => '31',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'addtoany' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'field_scald_file' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Fichiers attachés ',
        ),
      ),
    ),
    'field_event_place' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Lieu ',
        ),
      ),
    ),
    'field_event_speaker' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Intervenant(s) ',
        ),
      ),
    ),
    'field_event_cost_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Coût grand public ',
        ),
      ),
    ),
    'field_cost_members' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Coût adhérents ',
        ),
      ),
    ),
    'field_event_registration' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'subscribe-event',
          'ow-def-cl' => FALSE,
          'ow-at' => 'id="subscription-form" ',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_event_news_linked' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Actualités liées',
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
    'field_event_linked' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Evénements liés',
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
    'field_event_article_linked' => array(
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
    'field_dates' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
        ),
      ),
    ),
  );
  $export['node|event|default'] = $ds_fieldsetting;

  return $export;
}

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
    'regions' => array(
      'left' => array(
        0 => 'field_event_speaker',
        2 => 'body',
        3 => 'field_event_image',
        4 => 'field_scald_video',
        16 => 'field_dates_lieu_formateur_',
      ),
      'right' => array(
        1 => 'addtoany',
        5 => 'group_practical_event',
        6 => 'field_event_linked',
        7 => 'field_event_news_linked',
        8 => 'field_event_article_linked',
        9 => 'en_pratique',
        10 => 'field_dates',
        11 => 'field_event_place',
        12 => 'field_cost_members',
        13 => 'field_event_cost_public',
        14 => 'field_scald_file',
        15 => 'field_event_registration',
        17 => 'group_registration_button',
      ),
    ),
    'fields' => array(
      'field_event_speaker' => 'left',
      'addtoany' => 'right',
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
      'field_dates_lieu_formateur_' => 'left',
      'group_registration_button' => 'right',
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
  $export['node|event|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'registration|event_subscribe|default';
  $ds_layout->entity_type = 'registration';
  $ds_layout->bundle = 'event_subscribe';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'updated',
        1 => 'created',
        2 => 'host_entity_link',
        3 => 'spaces',
        4 => 'author',
        5 => 'state',
        6 => 'user',
        7 => 'field_registrant_tel',
        8 => 'mail',
        9 => 'field_registrant_comment',
        10 => 'field_cabinet_ou_societe',
        11 => 'field_profession_registrant',
        12 => 'field_date_et_lieu',
      ),
    ),
    'fields' => array(
      'updated' => 'ds_content',
      'created' => 'ds_content',
      'host_entity_link' => 'ds_content',
      'spaces' => 'ds_content',
      'author' => 'ds_content',
      'state' => 'ds_content',
      'user' => 'ds_content',
      'field_registrant_tel' => 'ds_content',
      'mail' => 'ds_content',
      'field_registrant_comment' => 'ds_content',
      'field_cabinet_ou_societe' => 'ds_content',
      'field_profession_registrant' => 'ds_content',
      'field_date_et_lieu' => 'ds_content',
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
  $export['registration|event_subscribe|default'] = $ds_layout;

  return $export;
}
