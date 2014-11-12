<?php
/**
 * @file
 * featurelpplglossary.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function featurelpplglossary_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-field_glossaire'
  $field_instances['node-article-field_glossaire'] = array(
    'bundle' => 'article',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Si vous cochez cette case, l\'article sera répertorié dans le glossaire',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_default',
        'weight' => 20,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_glossaire',
    'label' => 'Glossaire',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 43,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Glossaire');
  t('Si vous cochez cette case, l\'article sera répertorié dans le glossaire');

  return $field_instances;
}
