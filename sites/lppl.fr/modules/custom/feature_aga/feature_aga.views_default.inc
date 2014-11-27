<?php
/**
 * @file
 * feature_aga.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_aga_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aga_adherentes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AGA adhérentes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'AGA adhérentes';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Appliquer';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
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
  $handler->display->display_options['row_plugin'] = 'node';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Nom antenne */
  $handler->display->display_options['fields']['field_aga_nom_antenne']['id'] = 'field_aga_nom_antenne';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['table'] = 'field_data_field_aga_nom_antenne';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['field'] = 'field_aga_nom_antenne';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['label'] = '';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aga_nom_antenne']['alter']['text'] = '[title] [field_aga_nom_antenne]';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['element_label_colon'] = FALSE;
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
    'aga_membre' => 'aga_membre',
  );
  /* Critère de filtrage: Contenu : Région (field_region) */
  $handler->display->display_options['filters']['field_region_tid']['id'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['table'] = 'field_data_field_region';
  $handler->display->display_options['filters']['field_region_tid']['field'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator_id'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['label'] = 'Région';
  $handler->display->display_options['filters']['field_region_tid']['expose']['operator'] = 'field_region_tid_op';
  $handler->display->display_options['filters']['field_region_tid']['expose']['identifier'] = 'field_region_tid';
  $handler->display->display_options['filters']['field_region_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_region_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_region_tid']['vocabulary'] = 'regions';

  /* Display: Page carte */
  $handler = $view->new_display('page', 'Page carte', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Trouver votre interlocuteur';
  $handler->display->display_options['defaults']['use_ajax'] = FALSE;
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Rechercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'geofield_map_map';
  $handler->display->display_options['style_options']['data_source'] = 'field_geo_coordinates';
  $handler->display->display_options['style_options']['popup_source'] = 'nothing';
  $handler->display->display_options['style_options']['geofield_map_height'] = '500px';
  $handler->display->display_options['style_options']['geofield_map_draggable'] = 1;
  $handler->display->display_options['style_options']['geofield_map_streetview_show'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="#aga-adherentes-page">Voir la carte</div>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Champ: Contenu : Nom antenne */
  $handler->display->display_options['fields']['field_aga_nom_antenne']['id'] = 'field_aga_nom_antenne';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['table'] = 'field_data_field_aga_nom_antenne';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['field'] = 'field_aga_nom_antenne';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['label'] = '';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aga_nom_antenne']['empty'] = ' ';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['hide_alter_empty'] = FALSE;
  /* Champ: Contenu : Géolocalisation */
  $handler->display->display_options['fields']['field_geo_coordinates']['id'] = 'field_geo_coordinates';
  $handler->display->display_options['fields']['field_geo_coordinates']['table'] = 'field_data_field_geo_coordinates';
  $handler->display->display_options['fields']['field_geo_coordinates']['field'] = 'field_geo_coordinates';
  $handler->display->display_options['fields']['field_geo_coordinates']['label'] = '';
  $handler->display->display_options['fields']['field_geo_coordinates']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_geo_coordinates']['click_sort_column'] = 'geom';
  $handler->display->display_options['fields']['field_geo_coordinates']['type'] = 'geofield_map_map';
  $handler->display->display_options['fields']['field_geo_coordinates']['settings'] = array(
    'geofield_map_width' => '100%',
    'geofield_map_height' => '300px',
    'geofield_map_zoom' => '8',
    'geofield_map_controltype' => 'default',
    'geofield_map_mtc' => 'standard',
    'geofield_map_pancontrol' => 1,
    'geofield_map_maptype' => 'map',
    'geofield_map_baselayers_map' => 1,
    'geofield_map_baselayers_satellite' => 1,
    'geofield_map_baselayers_hybrid' => 1,
    'geofield_map_baselayers_physical' => 0,
    'geofield_map_scale' => 0,
    'geofield_map_overview' => 0,
    'geofield_map_overview_opened' => 0,
    'geofield_map_scrollwheel' => 0,
    'geofield_map_draggable' => 0,
    'geofield_map_streetview_show' => 0,
  );
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[title] [field_aga_nom_antenne]';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['path'] = 's-entourer/aga/trouver-son-association';

  /* Display: Bloc liste */
  $handler = $view->new_display('block', 'Bloc liste', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = 'h3';
  $handler->display->display_options['fields']['title']['element_class'] = 'h3_list_aga';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Logo */
  $handler->display->display_options['fields']['field_aga_logo']['id'] = 'field_aga_logo';
  $handler->display->display_options['fields']['field_aga_logo']['table'] = 'field_data_field_aga_logo';
  $handler->display->display_options['fields']['field_aga_logo']['field'] = 'field_aga_logo';
  $handler->display->display_options['fields']['field_aga_logo']['label'] = '';
  $handler->display->display_options['fields']['field_aga_logo']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_aga_logo']['alter']['text'] = '<a href="[path]">[field_aga_logo]</a>';
  $handler->display->display_options['fields']['field_aga_logo']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_aga_logo']['type'] = 'liste_logo_aga';
  $handler->display->display_options['fields']['field_aga_logo']['settings'] = array(
    'link' => '1',
  );
  /* Champ: Contenu : Nom antenne */
  $handler->display->display_options['fields']['field_aga_nom_antenne']['id'] = 'field_aga_nom_antenne';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['table'] = 'field_data_field_aga_nom_antenne';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['field'] = 'field_aga_nom_antenne';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['relationship'] = 'field_coordonnees_value';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['label'] = '';
  $handler->display->display_options['fields']['field_aga_nom_antenne']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '100',
  );
  /* Champ: Global : Texte personnalisé */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<a href="[path]" class="list-link-aga">Voir toutes les coordonnées <br />ou prendre un rendez-vous</a>';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Titre */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['block_description'] = 'Liste AGA';
  $translatables['aga_adherentes'] = array(
    t('Master'),
    t('AGA adhérentes'),
    t('plus'),
    t('Appliquer'),
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
    t('[title] [field_aga_nom_antenne]'),
    t('Région'),
    t('Page carte'),
    t('Trouver votre interlocuteur'),
    t('Rechercher'),
    t('<a href="#aga-adherentes-page">Voir la carte</div>'),
    t(' '),
    t('Bloc liste'),
    t('<a href="[path]">[field_aga_logo]</a>'),
    t('<a href="[path]" class="list-link-aga">Voir toutes les coordonnées <br />ou prendre un rendez-vous</a>'),
    t('Liste AGA'),
  );
  $export['aga_adherentes'] = $view;

  return $export;
}
