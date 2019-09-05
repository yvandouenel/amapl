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
    'weight' => '1',
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
  $field_group->identifier = 'group_second_row|node|training_session|colorbox';
  $field_group->group_name = 'group_second_row';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'training_session';
  $field_group->mode = 'colorbox';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'group deuxième ligne',
    'weight' => '2',
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

  // Translatables
  // Included for use with string extractors like potx.
  t('group deuxième ligne');
  t('group première ligne');

  return $field_groups;
}
