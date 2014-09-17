<?php
/**
 * @file
 * feature_artist_gallery.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_artist_gallery_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'liste_artistes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Liste artistes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Liste artistes';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Chercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Vignette */
  $handler->display->display_options['fields']['field_scald_image']['id'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['table'] = 'field_data_field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['field'] = 'field_scald_image';
  $handler->display->display_options['fields']['field_scald_image']['label'] = '';
  $handler->display->display_options['fields']['field_scald_image']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_scald_image']['alter']['text'] = '<a href="[path]">[field_scald_image]</a>';
  $handler->display->display_options['fields']['field_scald_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_scald_image']['type'] = 'icons';
  $handler->display->display_options['fields']['field_scald_image']['settings'] = array(
    'link' => '0',
  );
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Critère de filtrage: Contenu : Publié */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Critère de filtrage: Contenu : Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'galerie_adherents' => 'galerie_adherents',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Critère de filtrage: Contenu : Activité (field_ga_activity) */
  $handler->display->display_options['filters']['field_ga_activity_tid']['id'] = 'field_ga_activity_tid';
  $handler->display->display_options['filters']['field_ga_activity_tid']['table'] = 'field_data_field_ga_activity';
  $handler->display->display_options['filters']['field_ga_activity_tid']['field'] = 'field_ga_activity_tid';
  $handler->display->display_options['filters']['field_ga_activity_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ga_activity_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ga_activity_tid']['expose']['operator_id'] = 'field_ga_activity_tid_op';
  $handler->display->display_options['filters']['field_ga_activity_tid']['expose']['label'] = 'Activité';
  $handler->display->display_options['filters']['field_ga_activity_tid']['expose']['operator'] = 'field_ga_activity_tid_op';
  $handler->display->display_options['filters']['field_ga_activity_tid']['expose']['identifier'] = 'field_ga_activity_tid';
  $handler->display->display_options['filters']['field_ga_activity_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ga_activity_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ga_activity_tid']['vocabulary'] = 'm_tiers';
  /* Critère de filtrage: Contenu : Région (field_ga_region) */
  $handler->display->display_options['filters']['field_ga_region_tid']['id'] = 'field_ga_region_tid';
  $handler->display->display_options['filters']['field_ga_region_tid']['table'] = 'field_data_field_ga_region';
  $handler->display->display_options['filters']['field_ga_region_tid']['field'] = 'field_ga_region_tid';
  $handler->display->display_options['filters']['field_ga_region_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_ga_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ga_region_tid']['expose']['operator_id'] = 'field_ga_region_tid_op';
  $handler->display->display_options['filters']['field_ga_region_tid']['expose']['label'] = 'Région';
  $handler->display->display_options['filters']['field_ga_region_tid']['expose']['operator'] = 'field_ga_region_tid_op';
  $handler->display->display_options['filters']['field_ga_region_tid']['expose']['identifier'] = 'field_ga_region_tid';
  $handler->display->display_options['filters']['field_ga_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_ga_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ga_region_tid']['vocabulary'] = 'regions';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'liste-artistes';
  $translatables['liste_artistes'] = array(
    t('Master'),
    t('Liste artistes'),
    t('plus'),
    t('Chercher'),
    t('Réinitialiser'),
    t('Trier par'),
    t('Asc'),
    t('Desc'),
    t('Éléments par page'),
    t('- Tout -'),
    t('Décalage'),
    t('« premier'),
    t('‹ précédent'),
    t('suivant ›'),
    t('dernier »'),
    t('<a href="[path]">[field_scald_image]</a>'),
    t('Activité'),
    t('Région'),
    t('Page'),
  );
  $export['liste_artistes'] = $view;

  return $export;
}