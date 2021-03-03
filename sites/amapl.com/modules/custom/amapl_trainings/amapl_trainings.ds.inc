<?php
/**
 * @file
 * amapl_trainings.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function amapl_trainings_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|achievement|landing_page_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'achievement';
  $ds_fieldsetting->view_mode = 'landing_page_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'field_achievement_photos' => array(
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
  );
  $export['node|achievement|landing_page_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|traineur|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'traineur';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'p',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|traineur|teaser'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training_session|colorbox';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training_session';
  $ds_fieldsetting->view_mode = 'colorbox';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_related_training' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Détail de la formation',
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'test',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['node|training_session|colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training_session|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training_session';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'comments' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|training_session|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|certifications_labels_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'certifications_labels_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|training|certifications_labels_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'body' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_assessment_methods' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_scheduled_sessions' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Inscriptions',
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_training_aims' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_attendees_number' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_training_method' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-cl' => 'field-label',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'div',
          'ow-cl' => 'field',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'field_training_price' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_training_public' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_training_requirements' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_training_teachers' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_training_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
    'field_training_validation' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|training|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|landing_page_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'landing_page_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|training|landing_page_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|sector_brand_block';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'sector_brand_block';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h4',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|training|sector_brand_block'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|sessions';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'sessions';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
  );
  $export['node|training|sessions'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|training|teaser';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'training';
  $ds_fieldsetting->view_mode = 'teaser';
  $ds_fieldsetting->settings = array(
    'recommendation_action' => array(
      'weight' => '38',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'recommendations_number' => array(
      'weight' => '37',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'training_nid' => array(
      'weight' => '36',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'show_title' => 0,
        'title_wrapper' => '',
        'ctools' => 'a:3:{s:4:"conf";a:5:{s:8:"sanitize";i:1;s:7:"context";s:25:"argument_entity_id:node_1";s:14:"override_title";i:0;s:19:"override_title_text";s:0:"";s:22:"override_title_heading";s:2:"h2";}s:4:"type";s:5:"token";s:7:"subtype";s:8:"node:nid";}',
        'load_terms' => 0,
        'ft' => array(),
        'field_formatter_class' => '',
      ),
    ),
    'title' => array(
      'weight' => '38',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|training|teaser'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function amapl_trainings_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'interested_switch';
  $ds_field->label = 'Switch intéréssé/plus intéressé';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training_session|colorbox';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'switch intéressé/pluss intéressé',
      'format' => 'ds_code',
    ),
    'use_token' => 0,
  );
  $export['interested_switch'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'recommendation_action';
  $ds_field->label = 'Action de recommandation';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training|full
training|list
training|teaser';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'recommend',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['recommendation_action'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'recommendations_number';
  $ds_field->label = 'Nombre de recommandations';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training|list
training|teaser';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'recommendations number',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['recommendations_number'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'see_all_sessions_link';
  $ds_field->label = 'Voir toutes les sessions';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training_session|colorbox';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'sessions
',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['see_all_sessions_link'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'training_contact';
  $ds_field->label = 'Nous contacter';
  $ds_field->field_type = 5;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training|full';
  $ds_field->properties = array(
    'code' => array(
      'value' => 'Email de contact
',
      'format' => 'plain_text',
    ),
    'use_token' => 0,
  );
  $export['training_contact'] = $ds_field;

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'training_nid';
  $ds_field->label = 'Nid';
  $ds_field->field_type = 7;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'training|list
training|teaser';
  $ds_field->properties = array(
    'default' => array(),
    'settings' => array(
      'show_title' => array(
        'type' => 'checkbox',
      ),
      'title_wrapper' => array(
        'type' => 'textfield',
        'description' => 'Ex. : h1, h2, p',
      ),
      'ctools' => array(
        'type' => 'ctools',
      ),
    ),
  );
  $export['training_nid'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function amapl_trainings_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'field_collection_item|field_interested_users|sessions';
  $ds_layout->entity_type = 'field_collection_item';
  $ds_layout->bundle = 'field_interested_users';
  $ds_layout->view_mode = 'sessions';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_user_name',
        1 => 'field_user_contact',
      ),
    ),
    'fields' => array(
      'field_user_name' => 'left',
      'field_user_contact' => 'left',
    ),
    'classes' => array(),
    'wrappers' => array(),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['field_collection_item|field_interested_users|sessions'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|achievement|landing_page_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'achievement';
  $ds_layout->view_mode = 'landing_page_block';
  $ds_layout->layout = 'bootstrap_6_6';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_achievement_photos',
      ),
      'right' => array(
        1 => 'title',
        2 => 'body',
      ),
    ),
    'fields' => array(
      'field_achievement_photos' => 'left',
      'title' => 'right',
      'body' => 'right',
    ),
    'limit' => array(
      'field_achievement_photos' => '1',
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
  $export['node|achievement|landing_page_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|traineur|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'traineur';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'body',
        1 => 'field_trainer_cv',
      ),
    ),
    'fields' => array(
      'body' => 'ds_content',
      'field_trainer_cv' => 'ds_content',
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
  $export['node|traineur|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|traineur|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'traineur';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
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
  $export['node|traineur|teaser'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training_session|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training_session';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'group_focus',
        2 => 'field_session_focus',
        3 => 'field_session_place',
        4 => 'field_session_mode',
        5 => 'field_session_trainer',
        6 => 'group_first_row',
        7 => 'field_session_dates',
        8 => 'group_second_row',
        9 => 'field_related_training',
        10 => 'field_session_registration',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'group_focus' => 'ds_content',
      'field_session_focus' => 'ds_content',
      'field_session_place' => 'ds_content',
      'field_session_mode' => 'ds_content',
      'field_session_trainer' => 'ds_content',
      'group_first_row' => 'ds_content',
      'field_session_dates' => 'ds_content',
      'group_second_row' => 'ds_content',
      'field_related_training' => 'ds_content',
      'field_session_registration' => 'ds_content',
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
  $export['node|training_session|colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training_session|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training_session';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_session_place',
        1 => 'comments',
        2 => 'field_related_training',
        3 => 'field_session_dates',
        4 => 'field_session_registration',
        5 => 'field_session_target',
      ),
    ),
    'fields' => array(
      'field_session_place' => 'ds_content',
      'comments' => 'ds_content',
      'field_related_training' => 'ds_content',
      'field_session_dates' => 'ds_content',
      'field_session_registration' => 'ds_content',
      'field_session_target' => 'ds_content',
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
  $export['node|training_session|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|certifications_labels_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'certifications_labels_block';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training|certifications_labels_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_training_domain',
        1 => 'field_training_type',
        2 => 'field_introduction',
        3 => 'field_training_aims',
        4 => 'body',
        5 => 'field_training_requirements',
        6 => 'field_training_method',
        7 => 'field_assessment_methods',
        8 => 'field_target_groups',
        9 => 'field_training_certif_or_label',
        10 => 'field_training_signature_doc',
        11 => 'field_training_eval_form',
        12 => 'field_training_procedure',
      ),
      'right' => array(
        13 => 'field_training_funding',
        14 => 'field_training_duration',
        15 => 'field_accessibility',
        16 => 'field_scheduled_sessions',
        17 => 'field_training_price',
        18 => 'field_training_attendees_number',
        19 => 'field_training_public',
        20 => 'field_training_validation',
        21 => 'field_training_registration_cond',
        22 => 'field_training_teachers',
      ),
    ),
    'fields' => array(
      'field_training_domain' => 'left',
      'field_training_type' => 'left',
      'field_introduction' => 'left',
      'field_training_aims' => 'left',
      'body' => 'left',
      'field_training_requirements' => 'left',
      'field_training_method' => 'left',
      'field_assessment_methods' => 'left',
      'field_target_groups' => 'left',
      'field_training_certif_or_label' => 'left',
      'field_training_signature_doc' => 'left',
      'field_training_eval_form' => 'left',
      'field_training_procedure' => 'left',
      'field_training_funding' => 'right',
      'field_training_duration' => 'right',
      'field_accessibility' => 'right',
      'field_scheduled_sessions' => 'right',
      'field_training_price' => 'right',
      'field_training_attendees_number' => 'right',
      'field_training_public' => 'right',
      'field_training_validation' => 'right',
      'field_training_registration_cond' => 'right',
      'field_training_teachers' => 'right',
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
  $export['node|training|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|landing_page_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'landing_page_block';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training|landing_page_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|sector_brand_block';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'sector_brand_block';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
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
  $export['node|training|sector_brand_block'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|sessions';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'sessions';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'title',
        1 => 'field_introduction',
        2 => 'field_training_duration',
      ),
    ),
    'fields' => array(
      'title' => 'central',
      'field_introduction' => 'central',
      'field_training_duration' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training|sessions'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|training|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'training';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'bootstrap_12';
  $ds_layout->settings = array(
    'regions' => array(
      'central' => array(
        0 => 'group_wrapper_teaser',
        1 => 'group_sub_wrapper_teaser',
        2 => 'field_recommended_by',
        3 => 'training_nid',
        4 => 'field_training_type',
        5 => 'recommendations_number',
        6 => 'recommendation_action',
        7 => 'title',
        8 => 'field_training_price',
        9 => 'field_training_theme',
        10 => 'field_training_duration',
        11 => 'field_training_aims',
      ),
    ),
    'fields' => array(
      'group_wrapper_teaser' => 'central',
      'group_sub_wrapper_teaser' => 'central',
      'field_recommended_by' => 'central',
      'training_nid' => 'central',
      'field_training_type' => 'central',
      'recommendations_number' => 'central',
      'recommendation_action' => 'central',
      'title' => 'central',
      'field_training_price' => 'central',
      'field_training_theme' => 'central',
      'field_training_duration' => 'central',
      'field_training_aims' => 'central',
    ),
    'classes' => array(),
    'wrappers' => array(
      'central' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
  );
  $export['node|training|teaser'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function amapl_trainings_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'sessions';
  $ds_view_mode->label = 'Sessions';
  $ds_view_mode->entities = array(
    'field_collection_item' => 'field_collection_item',
    'node' => 'node',
  );
  $export['sessions'] = $ds_view_mode;

  return $export;
}
