<?php
/**
 * @file
 * amapl_trainings.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function amapl_trainings_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_amapl_fields|node|training|form';
  $field_group->group_name = 'group_amapl_fields';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Champs AMAPL',
    'weight' => '25',
    'children' => array(
      0 => 'field_previous_status',
      1 => 'field_training_search',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Champs AMAPL',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-amapl-fields field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_amapl_fields|node|training|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inscription|node|training_session|colorbox';
  $field_group->group_name = 'group_inscription';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_session';
  $field_group->mode = 'colorbox';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inscription',
    'weight' => '3',
    'children' => array(
      0 => 'field_session_registration',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Inscription',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-inscription field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_inscription|node|training_session|colorbox'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_inscription|node|training_session|full';
  $field_group->group_name = 'group_inscription';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_session';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Inscription',
    'weight' => '4',
    'children' => array(
      0 => 'field_session_registration',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Inscription',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-inscription field-group-div',
        'description' => '',
        'show_label' => '1',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $field_groups['group_inscription|node|training_session|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_session_details|node|training_session|colorbox';
  $field_group->group_name = 'group_session_details';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_session';
  $field_group->mode = 'colorbox';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Détails de la session',
    'weight' => '20',
    'children' => array(),
    'format_type' => 'html-element',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'element' => 'div',
        'show_label' => 0,
        'label_element' => 'div',
        'classes' => '',
        'attributes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_session_details|node|training_session|colorbox'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sub_wrapper_teaser|node|training|list';
  $field_group->group_name = 'group_sub_wrapper_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'list';
  $field_group->parent_name = 'group_wrapper_teaser';
  $field_group->data = array(
    'label' => 'Sub group wrapper teaser',
    'weight' => '34',
    'children' => array(
      0 => 'field_training_aims',
      1 => 'field_training_duration',
      2 => 'field_training_price',
      3 => 'field_training_related_brands',
      4 => 'field_training_teachers',
      5 => 'field_training_theme',
      6 => 'field_training_type',
      7 => 'training_nid',
      8 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sub group wrapper teaser',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sub-wrapper-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sub_wrapper_teaser|node|training|list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_sub_wrapper_teaser|node|training|teaser';
  $field_group->group_name = 'group_sub_wrapper_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'teaser';
  $field_group->parent_name = 'group_wrapper_teaser';
  $field_group->data = array(
    'label' => 'Sub wrapper teaser',
    'weight' => '35',
    'children' => array(
      0 => 'field_training_aims',
      1 => 'field_training_duration',
      2 => 'field_training_price',
      3 => 'field_training_theme',
      4 => 'field_training_type',
      5 => 'training_nid',
      6 => 'title',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Sub wrapper teaser',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-sub-wrapper-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_sub_wrapper_teaser|node|training|teaser'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_data|node|training|full';
  $field_group->group_name = 'group_training_data';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Caractéristiques',
    'weight' => '1',
    'children' => array(
      0 => 'field_scheduled_sessions',
      1 => 'field_training_attendees_number',
      2 => 'field_training_duration',
      3 => 'field_training_price',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Caractéristiques',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-data field-group-div col-md-12',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_data|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_header_center|node|training|full';
  $field_group->group_name = 'group_training_header_center';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_training_header';
  $field_group->data = array(
    'label' => 'En-tête centre',
    'weight' => '31',
    'children' => array(
      0 => 'field_introduction',
      1 => 'field_training_type',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En-tête centre',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-header-center field-group-div col-md-7',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_header_center|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_header_left|node|training|full';
  $field_group->group_name = 'group_training_header_left';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_training_header';
  $field_group->data = array(
    'label' => 'En-tête gauche',
    'weight' => '30',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En-tête gauche',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-header-left field-group-div col-md-3',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_header_left|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_header_right|node|training|full';
  $field_group->group_name = 'group_training_header_right';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = 'group_training_header';
  $field_group->data = array(
    'label' => 'En-tête droit',
    'weight' => '32',
    'children' => array(),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En-tête droit',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-header-right field-group-div col-md-2',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_header_right|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_header|node|training|full';
  $field_group->group_name = 'group_training_header';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'En-tête',
    'weight' => '0',
    'children' => array(
      0 => 'group_training_header_center',
      1 => 'group_training_header_left',
      2 => 'group_training_header_right',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'En-tête',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-header field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_header|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_left_col|node|training|full';
  $field_group->group_name = 'group_training_left_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne gauche',
    'weight' => '2',
    'children' => array(
      0 => 'body',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Colonne gauche',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-left-col field-group-div col-md-8',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_left_col|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_training_right_col|node|training|full';
  $field_group->group_name = 'group_training_right_col';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'full';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne droite',
    'weight' => '3',
    'children' => array(
      0 => 'field_assessment_methods',
      1 => 'field_training_aims',
      2 => 'field_training_method',
      3 => 'field_training_public',
      4 => 'field_training_requirements',
      5 => 'field_training_teachers',
      6 => 'field_training_validation',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Colonne droite',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-training-right-col field-group-div col-md-4',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_training_right_col|node|training|full'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_teaser|node|training|list';
  $field_group->group_name = 'group_wrapper_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'list';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group wrapper teaser',
    'weight' => '0',
    'children' => array(
      0 => 'field_recommended_by',
      1 => 'recommendation_action',
      2 => 'recommendations_number',
      3 => 'group_sub_wrapper_teaser',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group wrapper teaser',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_teaser|node|training|list'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_wrapper_teaser|node|training|teaser';
  $field_group->group_name = 'group_wrapper_teaser';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training';
  $field_group->mode = 'teaser';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group wrapper teaser',
    'weight' => '0',
    'children' => array(
      0 => 'field_recommended_by',
      1 => 'recommendation_action',
      2 => 'recommendations_number',
      3 => 'group_sub_wrapper_teaser',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group wrapper teaser',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-wrapper-teaser field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_wrapper_teaser|node|training|teaser'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Caractéristiques');
  t('Champs AMAPL');
  t('Colonne droite');
  t('Colonne gauche');
  t('Détails de la session');
  t('En-tête');
  t('En-tête centre');
  t('En-tête droit');
  t('En-tête gauche');
  t('Inscription');
  t('Sub group wrapper teaser');
  t('Sub wrapper teaser');
  t('group wrapper teaser');

  return $field_groups;
}
