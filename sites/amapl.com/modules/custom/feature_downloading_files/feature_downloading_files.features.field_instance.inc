<?php
/**
 * @file
 * feature_downloading_files.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_downloading_files_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-downloading_file-field_files_img'.
  $field_instances['node-downloading_file-field_files_img'] = array(
    'bundle' => 'downloading_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 2,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_files_img',
    'label' => 'Fichiers',
    'required' => 1,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '2_colonnes' => -1,
        'drop_down_para' => -1,
        'drop_down_para_orange' => -1,
        'file_and_img' => 'file_and_img',
        'image_2_col' => -1,
        'liste_pdf_bleus' => -1,
        'liste_pdf_orange' => -1,
        'paragraphe_simple' => -1,
        'titre_et_paragraphe' => -1,
        'titre_paragraphe_bouton' => -1,
        'une_colonne' => -1,
      ),
      'bundle_weights' => array(
        '2_colonnes' => 2,
        'drop_down_para' => 3,
        'drop_down_para_orange' => 4,
        'file_and_img' => 5,
        'image_2_col' => 6,
        'liste_pdf_bleus' => 7,
        'liste_pdf_orange' => 8,
        'paragraphe_simple' => 9,
        'titre_et_paragraphe' => 10,
        'titre_paragraphe_bouton' => 11,
        'une_colonne' => 12,
      ),
      'default_edit_mode' => 'open',
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-downloading_file-field_scald_image'.
  $field_instances['node-downloading_file-field_scald_image'] = array(
    'bundle' => 'downloading_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Prévue pour afficher une image de 100px X 100px',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'icons',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'icons',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'node',
    'field_name' => 'field_scald_image',
    'label' => 'Vignette',
    'required' => 0,
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
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-downloading_file-field_session_target'.
  $field_instances['node-downloading_file-field_session_target'] = array(
    'bundle' => 'downloading_file',
    'default_value' => array(
      0 => array(
        'value' => 'both',
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
        'weight' => 2,
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
    'label' => 'cible',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-downloading_file-field_texte'.
  $field_instances['node-downloading_file-field_texte'] = array(
    'bundle' => 'downloading_file',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
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
    'field_name' => 'field_texte',
    'label' => 'Descriptif',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 1,
      'mee_enabled' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'show_token_tree' => 0,
      ),
      'type' => 'text_textarea',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'paragraphs_item-file_and_img-field_scald_file'.
  $field_instances['paragraphs_item-file_and_img-field_scald_file'] = array(
    'bundle' => 'file_and_img',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(
          'link' => 0,
        ),
        'type' => 'list',
        'weight' => 1,
      ),
      'paragraphs_editor_preview' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'ds_extras_field_template' => '',
    'entity_type' => 'paragraphs_item',
    'field_name' => 'field_scald_file',
    'label' => 'Fichiers en téléchargement',
    'required' => 1,
    'settings' => array(
      'allow_override' => 0,
      'referencable_types' => array(
        'audio' => 0,
        'file' => 'file',
        'gallery' => 0,
        'image' => 0,
        'twitter' => 0,
        'video' => 0,
      ),
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'atom_reference',
      'settings' => array(
        'context' => 'sdl_editor_representation',
      ),
      'type' => 'atom_reference_textfield',
      'weight' => 34,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Descriptif');
  t('Fichiers');
  t('Fichiers en téléchargement');
  t('Prévue pour afficher une image de 100px X 100px');
  t('Vignette');
  t('cible');

  return $field_instances;
}
