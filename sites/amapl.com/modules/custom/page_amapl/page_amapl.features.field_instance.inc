<?php
/**
 * @file
 * page_amapl.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function page_amapl_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-body'.
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
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
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'context' => 'debug',
      'context_default' => 'sdl_editor_representation',
      'display_summary' => 0,
      'dnd_enabled' => 1,
      'mee_enabled' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'show_token_tree' => 0,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-page-field_page_2_cols'.
  $field_instances['node-page-field_page_2_cols'] = array(
    'bundle' => 'page',
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
      'full' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 1,
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
    'field_name' => 'field_page_2_cols',
    'label' => 'Contenu spécial',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '2_colonnes' => -1,
        'drop_down_para' => 'drop_down_para',
        'drop_down_para_orange' => 'drop_down_para_orange',
        'image_2_col' => -1,
        'liste_pdf_bleus' => 'liste_pdf_bleus',
        'liste_pdf_orange' => 'liste_pdf_orange',
        'paragraphe_simple' => -1,
        'titre_et_paragraphe' => 'titre_et_paragraphe',
        'titre_paragraphe_bouton' => -1,
        'une_colonne' => -1,
      ),
      'bundle_weights' => array(
        '2_colonnes' => 2,
        'drop_down_para' => 15,
        'drop_down_para_orange' => 19,
        'image_2_col' => 3,
        'liste_pdf_bleus' => -14,
        'liste_pdf_orange' => -16,
        'paragraphe_simple' => 4,
        'titre_et_paragraphe' => 12,
        'titre_paragraphe_bouton' => 5,
        'une_colonne' => 6,
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

  // Exported field_instance: 'node-page-field_page_kw'.
  $field_instances['node-page-field_page_kw'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Mots clés descriptifs de la page pour une  liaison avec des événements, des actualités et des articles. Si le terme "Tout" est présent, l\'article sera entouré de toutes les actus, tous les événements et tous les articles. L\'auto-complétion permet de retrouver les mots clés déjà utilisés après que vous ayez entré au moins 1 lettre.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_page_kw',
    'label' => 'Mots clés',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-page-field_titre_simple_'.
  $field_instances['node-page-field_titre_simple_'] = array(
    'bundle' => 'page',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Dans le cas où l\'on veut que le titre principal de la page soit mis en page de manière simple, sans icône sur sa gauche',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
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
    'field_name' => 'field_titre_simple_',
    'label' => 'Titre simple ?',
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
      'weight' => 1,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-drop_down_para-field_drop_down_title'.
  $field_instances['paragraphs_item-drop_down_para-field_drop_down_title'] = array(
    'bundle' => 'drop_down_para',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
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
    'field_name' => 'field_drop_down_title',
    'label' => 'Titre',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'paragraphs_item-drop_down_para-field_texte'.
  $field_instances['paragraphs_item-drop_down_para-field_texte'] = array(
    'bundle' => 'drop_down_para',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_texte',
    'label' => 'Texte déroulant',
    'required' => 1,
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
      'weight' => 33,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-drop_down_para_orange-field_drop_down_title'.
  $field_instances['paragraphs_item-drop_down_para_orange-field_drop_down_title'] = array(
    'bundle' => 'drop_down_para_orange',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
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
    'field_name' => 'field_drop_down_title',
    'label' => 'Titre',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-drop_down_para_orange-field_texte'.
  $field_instances['paragraphs_item-drop_down_para_orange-field_texte'] = array(
    'bundle' => 'drop_down_para_orange',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_texte',
    'label' => 'Texte',
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
      'weight' => 34,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-liste_pdf_bleus-field_scald_file'.
  $field_instances['paragraphs_item-liste_pdf_bleus-field_scald_file'] = array(
    'bundle' => 'liste_pdf_bleus',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ajoutez des fichiers pdf à télécharger (via un cliquer/glisser depuis scald) et il appraîtront avec une icône bleu et centrés 2 par 2.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
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
    'label' => 'Fichiers attachés',
    'required' => 0,
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
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-liste_pdf_orange-field_scald_file'.
  $field_instances['paragraphs_item-liste_pdf_orange-field_scald_file'] = array(
    'bundle' => 'liste_pdf_orange',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Ajoutez des fichiers pdf à télécharger (via un cliquer/glisser depuis scald) et il appraîtront avec une icône orange et centrés 2 par 2.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'domainedo_media',
        'settings' => array(),
        'type' => 'sdl_editor_representation',
        'weight' => 0,
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
    'label' => 'Fichiers attachés',
    'required' => 0,
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
      'weight' => 32,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-titre_et_paragraphe-field_texte_col_droite'.
  $field_instances['paragraphs_item-titre_et_paragraphe-field_texte_col_droite'] = array(
    'bundle' => 'titre_et_paragraphe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
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
    'field_name' => 'field_texte_col_droite',
    'label' => 'Texte colonne droite',
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
      'weight' => 5,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-titre_et_paragraphe-field_texte_col_gauche'.
  $field_instances['paragraphs_item-titre_et_paragraphe-field_texte_col_gauche'] = array(
    'bundle' => 'titre_et_paragraphe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
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
    'field_name' => 'field_texte_col_gauche',
    'label' => 'Texte colonne gauche',
    'required' => 0,
    'settings' => array(
      'context' => 'title',
      'context_default' => 'sdl_editor_representation',
      'dnd_enabled' => 1,
      'mee_enabled' => 0,
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
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-titre_et_paragraphe-field_titre_col_droite'.
  $field_instances['paragraphs_item-titre_et_paragraphe-field_titre_col_droite'] = array(
    'bundle' => 'titre_et_paragraphe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
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
    'field_name' => 'field_titre_col_droite',
    'label' => 'Titre colonne droite',
    'required' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance:
  // 'paragraphs_item-titre_et_paragraphe-field_titre_col_gauche'.
  $field_instances['paragraphs_item-titre_et_paragraphe-field_titre_col_gauche'] = array(
    'bundle' => 'titre_et_paragraphe',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
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
    'field_name' => 'field_titre_col_gauche',
    'label' => 'Titre colonne gauche',
    'required' => 0,
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
      'weight' => 6,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Ajoutez des fichiers pdf à télécharger (via un cliquer/glisser depuis scald) et il appraîtront avec une icône bleu et centrés 2 par 2.');
  t('Ajoutez des fichiers pdf à télécharger (via un cliquer/glisser depuis scald) et il appraîtront avec une icône orange et centrés 2 par 2.');
  t('Body');
  t('Contenu spécial');
  t('Dans le cas où l\'on veut que le titre principal de la page soit mis en page de manière simple, sans icône sur sa gauche');
  t('Fichiers attachés');
  t('Mots clés');
  t('Mots clés descriptifs de la page pour une  liaison avec des événements, des actualités et des articles. Si le terme "Tout" est présent, l\'article sera entouré de toutes les actus, tous les événements et tous les articles. L\'auto-complétion permet de retrouver les mots clés déjà utilisés après que vous ayez entré au moins 1 lettre.');
  t('Texte');
  t('Texte colonne droite');
  t('Texte colonne gauche');
  t('Texte déroulant');
  t('Titre');
  t('Titre colonne droite');
  t('Titre colonne gauche');
  t('Titre simple ?');

  return $field_instances;
}
