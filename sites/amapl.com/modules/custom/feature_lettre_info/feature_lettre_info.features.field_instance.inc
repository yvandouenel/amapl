<?php
/**
 * @file
 * feature_lettre_info.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_lettre_info_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-lettre_d_information-field_news_image'.
  $field_instances['node-lettre_d_information-field_news_image'] = array(
    'bundle' => 'lettre_d_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Prévu pour une image de 588 x 836px',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'lettre_info',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'lettre_info',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_news_image',
    'label' => 'Image',
    'required' => 1,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'audio' => 0,
        'file' => 0,
        'gallery' => 0,
        'image' => 'image',
        'twitter' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'icons',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-lettre_d_information-field_session_target'.
  $field_instances['node-lettre_d_information-field_session_target'] = array(
    'bundle' => 'lettre_d_information',
    'default_value' => array(
      0 => array(
        'value' => 'pl',
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 3,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_session_target',
    'label' => 'Cible',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-lettre_d_information-field_url'.
  $field_instances['node-lettre_d_information-field_url'] = array(
    'bundle' => 'lettre_d_information',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'URL du type : https://fr.calameo.com/read/004682026665da6018c7d',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_url',
    'label' => 'URL',
    'required' => 1,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 0,
      'mee_enabled' => 0,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'show_token_tree' => 0,
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Cible');
  t('Image');
  t('Prévu pour une image de 588 x 836px');
  t('URL');
  t('URL du type : https://fr.calameo.com/read/004682026665da6018c7d');

  return $field_instances;
}
