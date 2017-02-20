<?php
/**
 * @file
 * feature_page_complexe.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function feature_page_complexe_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-page-field_cp_body'
  $field_instances['node-page-field_cp_body'] = array(
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
    'field_name' => 'field_cp_body',
    'label' => 'Corps',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(
        '2_colonnes' => '2_colonnes',
        'encarts_50' => 'encarts_50',
        'image_2_col' => -1,
        'paragraphe_simple' => -1,
        'titre_paragraphe_bouton' => -1,
        'une_colonne' => 'une_colonne',
        'v2017_2col_6_6' => 'v2017_2col_6_6',
        'v2017_2col_8_4' => 'v2017_2col_8_4',
        'v2017_3col_4_4_4' => 'v2017_3col_4_4_4',
      ),
      'bundle_weights' => array(
        '2_colonnes' => 2,
        'encarts_50' => 3,
        'image_2_col' => 4,
        'paragraphe_simple' => 5,
        'titre_paragraphe_bouton' => 6,
        'une_colonne' => 7,
        'v2017_2col_6_6' => -18,
        'v2017_2col_8_4' => -16,
        'v2017_3col_4_4_4' => 16,
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'node-page-field_page_kw'
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
        'weight' => 13,
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'paragraphs_item-v2017_2col_6_6-field_colonne_1_moitie'
  $field_instances['paragraphs_item-v2017_2col_6_6-field_colonne_1_moitie'] = array(
    'bundle' => 'v2017_2col_6_6',
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
    'field_name' => 'field_colonne_1_moitie',
    'label' => 'Colonne 1',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'paragraphs_item-v2017_2col_6_6-field_colonne_2_moitie'
  $field_instances['paragraphs_item-v2017_2col_6_6-field_colonne_2_moitie'] = array(
    'bundle' => 'v2017_2col_6_6',
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
    'field_name' => 'field_colonne_2_moitie',
    'label' => 'Colonne 2',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'paragraphs_item-v2017_2col_8_4-field_colonne_1_3'
  $field_instances['paragraphs_item-v2017_2col_8_4-field_colonne_1_3'] = array(
    'bundle' => 'v2017_2col_8_4',
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
    'field_name' => 'field_colonne_1_3',
    'label' => 'colonne 1/3',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'paragraphs_item-v2017_2col_8_4-field_colonne_2_3'
  $field_instances['paragraphs_item-v2017_2col_8_4-field_colonne_2_3'] = array(
    'bundle' => 'v2017_2col_8_4',
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
    'field_name' => 'field_colonne_2_3',
    'label' => 'colonne 2/3',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'paragraphs_item-v2017_3col_4_4_4-field_colonne_1_tiers'
  $field_instances['paragraphs_item-v2017_3col_4_4_4-field_colonne_1_tiers'] = array(
    'bundle' => 'v2017_3col_4_4_4',
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
    'field_name' => 'field_colonne_1_tiers',
    'label' => 'Colonne 1 ',
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
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'paragraphs_item-v2017_3col_4_4_4-field_colonne_2_tiers'
  $field_instances['paragraphs_item-v2017_3col_4_4_4-field_colonne_2_tiers'] = array(
    'bundle' => 'v2017_3col_4_4_4',
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
    'field_name' => 'field_colonne_2_tiers',
    'label' => 'Colonne 2',
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
      'weight' => 32,
    ),
  );

  // Exported field_instance: 'paragraphs_item-v2017_3col_4_4_4-field_colonne_3_tiers'
  $field_instances['paragraphs_item-v2017_3col_4_4_4-field_colonne_3_tiers'] = array(
    'bundle' => 'v2017_3col_4_4_4',
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
    'field_name' => 'field_colonne_3_tiers',
    'label' => 'Colonne 3',
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
      'weight' => 33,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Colonne 1');
  t('Colonne 1 ');
  t('Colonne 2');
  t('Colonne 3');
  t('Corps');
  t('Mots clés');
  t('Mots clés descriptifs de la page pour une  liaison avec des événements, des actualités et des articles. Si le terme "Tout" est présent, l\'article sera entouré de toutes les actus, tous les événements et tous les articles. L\'auto-complétion permet de retrouver les mots clés déjà utilisés après que vous ayez entré au moins 1 lettre.');
  t('colonne 1/3');
  t('colonne 2/3');

  return $field_instances;
}
