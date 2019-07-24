<?php
/**
 * @file
 * page_amapl.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function page_amapl_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_droite|paragraphs_item|titre_et_paragraphe|form';
  $field_group->group_name = 'group_col_droite';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'titre_et_paragraphe';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne droite',
    'weight' => '3',
    'children' => array(
      0 => 'field_titre_col_droite',
      1 => 'field_texte_col_droite',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-col-droite field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_col_gauche|paragraphs_item|titre_et_paragraphe|form';
  $field_group->group_name = 'group_col_gauche';
  $field_group->entity_type = 'paragraphs_item';
  $field_group->bundle = 'titre_et_paragraphe';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Colonne gauche',
    'weight' => '1',
    'children' => array(
      0 => 'field_titre_col_gauche',
      1 => 'field_texte_col_gauche',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-col-gauche field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Colonne droite');
  t('Colonne gauche');

  return $field_groups;
}
