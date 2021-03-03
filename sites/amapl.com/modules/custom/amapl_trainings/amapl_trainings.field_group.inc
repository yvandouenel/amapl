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
  $field_group->identifier = 'group_first_row|node|training_session|colorbox';
  $field_group->group_name = 'group_first_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_session';
  $field_group->mode = 'colorbox';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group première ligne',
    'weight' => '4',
    'children' => array(
      0 => 'field_session_dates',
      1 => 'field_session_place',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group première ligne',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-first-row field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_first_row|node|training_session|colorbox'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_focus|node|training_session|colorbox';
  $field_group->group_name = 'group_focus';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_session';
  $field_group->mode = 'colorbox';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Focus',
    'weight' => '1',
    'children' => array(
      0 => 'field_session_focus',
      1 => 'field_session_mode',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Focus',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-focus field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_focus|node|training_session|colorbox'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_second_row|node|training_session|colorbox';
  $field_group->group_name = 'group_second_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_session';
  $field_group->mode = 'colorbox';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group deuxième ligne',
    'weight' => '5',
    'children' => array(
      0 => 'field_related_training',
      1 => 'field_session_trainer',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'group deuxième ligne',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-second-row field-group-div',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_second_row|node|training_session|colorbox'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stat_logos|bean|intro_formation|default';
  $field_group->group_name = 'group_stat_logos';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'intro_formation';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'stat et logos',
    'weight' => '8',
    'children' => array(
      0 => 'group_stat',
      1 => 'group_text_logos',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'stat et logos',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-stat-logos',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_stat_logos|bean|intro_formation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_stat|bean|intro_formation|default';
  $field_group->group_name = 'group_stat';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'intro_formation';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_stat_logos';
  $field_group->data = array(
    'label' => 'stat',
    'weight' => '10',
    'children' => array(
      0 => 'field_label_statistiques',
      1 => 'field_texte_statistiques',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'stat',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-stat',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_stat|bean|intro_formation|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_text_logos|bean|intro_formation|default';
  $field_group->group_name = 'group_text_logos';
  $field_group->entity_type = 'bean';
  $field_group->bundle = 'intro_formation';
  $field_group->mode = 'default';
  $field_group->parent_name = 'group_stat_logos';
  $field_group->data = array(
    'label' => 'Texte et logos',
    'weight' => '11',
    'children' => array(
      0 => 'field_texte_certification_qualit',
      1 => 'field_logos_certifications',
    ),
    'format_type' => 'div',
    'format_settings' => array(
      'label' => 'Texte et logos',
      'instance_settings' => array(
        'id' => '',
        'classes' => 'group-text-logos',
        'description' => '',
        'show_label' => '0',
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'none',
      ),
      'formatter' => 'open',
    ),
  );
  $field_groups['group_text_logos|bean|intro_formation|default'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Focus');
  t('Texte et logos');
  t('group deuxième ligne');
  t('group première ligne');
  t('stat');
  t('stat et logos');

  return $field_groups;
}
