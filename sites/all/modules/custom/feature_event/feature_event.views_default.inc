<?php
/**
 * @file
 * feature_event.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_event_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'events';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Events';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'edit any event content';
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
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Url de destination */
  $handler->display->display_options['fields']['field_event_url_target']['id'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['table'] = 'field_data_field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['field'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_event_url_target']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_event_new_window']['id'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['table'] = 'field_data_field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['field'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_event_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_new_window']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
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
    'event' => 'event',
  );
  /* Critère de filtrage: Contenu : Dates de parution -  start date (field_event_publication_date) */
  $handler->display->display_options['filters']['field_event_publication_date_value']['id'] = 'field_event_publication_date_value';
  $handler->display->display_options['filters']['field_event_publication_date_value']['table'] = 'field_data_field_event_publication_date';
  $handler->display->display_options['filters']['field_event_publication_date_value']['field'] = 'field_event_publication_date_value';
  $handler->display->display_options['filters']['field_event_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_publication_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_publication_date_value']['default_date'] = 'now';
  /* Critère de filtrage: Contenu : Dates de parution - end date (field_event_publication_date:value2) */
  $handler->display->display_options['filters']['field_event_publication_date_value2']['id'] = 'field_event_publication_date_value2';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['table'] = 'field_data_field_event_publication_date';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['field'] = 'field_event_publication_date_value2';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['default_date'] = 'now';

  /* Display: Page événements */
  $handler = $view->new_display('page', 'Page événements', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'L\'agenda de l\'AMAPL';
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['query'] = FALSE;
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Chercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Zone de texte */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="title-page-list-events">Résultats</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportement en l'absence de résultats: Global : Texte non filtré */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Il n\'y a pas de résultats correspondant à votre recherche. Merci de modifier les critères ci-dessus.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Url de destination */
  $handler->display->display_options['fields']['field_event_url_target']['id'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['table'] = 'field_data_field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['field'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_event_url_target']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_event_new_window']['id'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['table'] = 'field_data_field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['field'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_event_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_new_window']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'link' => '0',
  );
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Champ: Contenu : Lieu */
  $handler->display->display_options['fields']['field_event_place']['id'] = 'field_event_place';
  $handler->display->display_options['fields']['field_event_place']['table'] = 'field_data_field_event_place';
  $handler->display->display_options['fields']['field_event_place']['field'] = 'field_event_place';
  $handler->display->display_options['fields']['field_event_place']['label'] = 'Lieu : ';
  $handler->display->display_options['fields']['field_event_place']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_place']['hide_empty'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Draggableviews : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'events:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Critère de tri: Contenu : Dates de l&#039;événement -  start date (field_dates) */
  $handler->display->display_options['sorts']['field_dates_value']['id'] = 'field_dates_value';
  $handler->display->display_options['sorts']['field_dates_value']['table'] = 'field_data_field_dates';
  $handler->display->display_options['sorts']['field_dates_value']['field'] = 'field_dates_value';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  /* Critère de filtrage: Contenu : Dates de parution -  start date (field_event_publication_date) */
  $handler->display->display_options['filters']['field_event_publication_date_value']['id'] = 'field_event_publication_date_value';
  $handler->display->display_options['filters']['field_event_publication_date_value']['table'] = 'field_data_field_event_publication_date';
  $handler->display->display_options['filters']['field_event_publication_date_value']['field'] = 'field_event_publication_date_value';
  $handler->display->display_options['filters']['field_event_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_publication_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_publication_date_value']['default_date'] = 'now';
  /* Critère de filtrage: Contenu : Dates de parution - end date (field_event_publication_date:value2) */
  $handler->display->display_options['filters']['field_event_publication_date_value2']['id'] = 'field_event_publication_date_value2';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['table'] = 'field_data_field_event_publication_date';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['field'] = 'field_event_publication_date_value2';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['default_date'] = 'now';
  /* Critère de filtrage: Contenu : Catégorie (field_event_cat) */
  $handler->display->display_options['filters']['field_event_cat_tid']['id'] = 'field_event_cat_tid';
  $handler->display->display_options['filters']['field_event_cat_tid']['table'] = 'field_data_field_event_cat';
  $handler->display->display_options['filters']['field_event_cat_tid']['field'] = 'field_event_cat_tid';
  $handler->display->display_options['filters']['field_event_cat_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_event_cat_tid']['expose']['operator_id'] = 'field_event_cat_tid_op';
  $handler->display->display_options['filters']['field_event_cat_tid']['expose']['label'] = 'Type d\'événement :';
  $handler->display->display_options['filters']['field_event_cat_tid']['expose']['operator'] = 'field_event_cat_tid_op';
  $handler->display->display_options['filters']['field_event_cat_tid']['expose']['identifier'] = 'field_event_cat_tid';
  $handler->display->display_options['filters']['field_event_cat_tid']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_event_cat_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => '1',
    5 => '5',
    4 => '4',
    3 => '3',
  );
  $handler->display->display_options['filters']['field_event_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_cat_tid']['vocabulary'] = 'categorie_evenement';
  $handler->display->display_options['path'] = 's-informer/agenda';
  $handler->display->display_options['menu']['title'] = 'Agenda';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Classement */
  $handler = $view->new_display('page', 'Classement', 'page_1');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_event_url_target' => 'field_event_url_target',
    'field_event_new_window' => 'field_event_new_window',
    'body' => 'body',
    'field_event_image' => 'field_event_image',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_url_target' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_new_window' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'body' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_event_image' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Draggableviews : Contenu */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['save_button_label'] = 'Enregistrer l\'ordre';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Champ: Contenu : Dates de l'événement */
  $handler->display->display_options['fields']['field_dates']['id'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['table'] = 'field_data_field_dates';
  $handler->display->display_options['fields']['field_dates']['field'] = 'field_dates';
  $handler->display->display_options['fields']['field_dates']['settings'] = array(
    'format_type' => 'medium',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  $handler->display->display_options['fields']['field_dates']['delta_offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Draggableviews : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'self';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
  $handler->display->display_options['path'] = 'classement-evt';

  /* Display: Bloc événements */
  $handler = $view->new_display('block', 'Bloc événements', 'block_evenements_home');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events-home';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Voir tous les événements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['defaults']['access'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Url de destination */
  $handler->display->display_options['fields']['field_event_url_target']['id'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['table'] = 'field_data_field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['field'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_event_url_target']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_event_new_window']['id'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['table'] = 'field_data_field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['field'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_event_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_new_window']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Draggableviews : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'events:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['block_description'] = 'Bloc événements';

  /* Display: Bloc événements tagués */
  $handler = $view->new_display('block', 'Bloc événements tagués', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events-home';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Voir tous les événements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Url de destination */
  $handler->display->display_options['fields']['field_event_url_target']['id'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['table'] = 'field_data_field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['field'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_event_url_target']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_event_new_window']['id'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['table'] = 'field_data_field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['field'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_event_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_new_window']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Draggableviews : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'events:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Filtre contextuel: Contenu : Possède un identifiant (ID) de terme de taxonomie */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Tout';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['anyall'] = '+';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'tags' => 'tags',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['add_table'] = TRUE;
  $handler->display->display_options['block_description'] = 'Bloc événements tagués';

  /* Display: Page formations */
  $handler = $view->new_display('page', 'Page formations', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Les formations du Portail des Professions Libérales';
  $handler->display->display_options['defaults']['exposed_form'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Chercher';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Réinitialiser';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Trier par';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = TRUE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* Comportement en l'absence de résultats: Global : Texte non filtré */
  $handler->display->display_options['empty']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['empty']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['empty']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['empty']['area_text_custom']['content'] = 'Il n\'y a pas de résultats correspondant à votre recherche. Merci de modifier les critères ci-dessus.';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3 class="title-event-list">[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Url de destination */
  $handler->display->display_options['fields']['field_event_url_target']['id'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['table'] = 'field_data_field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['field'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_event_url_target']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_event_new_window']['id'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['table'] = 'field_data_field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['field'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_event_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_new_window']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Draggableviews : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'events:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  /* Critère de filtrage: Contenu : Dates de parution -  start date (field_event_publication_date) */
  $handler->display->display_options['filters']['field_event_publication_date_value']['id'] = 'field_event_publication_date_value';
  $handler->display->display_options['filters']['field_event_publication_date_value']['table'] = 'field_data_field_event_publication_date';
  $handler->display->display_options['filters']['field_event_publication_date_value']['field'] = 'field_event_publication_date_value';
  $handler->display->display_options['filters']['field_event_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_publication_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_publication_date_value']['default_date'] = 'now';
  /* Critère de filtrage: Contenu : Dates de parution - end date (field_event_publication_date:value2) */
  $handler->display->display_options['filters']['field_event_publication_date_value2']['id'] = 'field_event_publication_date_value2';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['table'] = 'field_data_field_event_publication_date';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['field'] = 'field_event_publication_date_value2';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['default_date'] = 'now';
  /* Critère de filtrage: Contenu : Catégorie (field_event_cat) */
  $handler->display->display_options['filters']['field_event_cat_tid']['id'] = 'field_event_cat_tid';
  $handler->display->display_options['filters']['field_event_cat_tid']['table'] = 'field_data_field_event_cat';
  $handler->display->display_options['filters']['field_event_cat_tid']['field'] = 'field_event_cat_tid';
  $handler->display->display_options['filters']['field_event_cat_tid']['value'] = array(
    0 => '37',
  );
  $handler->display->display_options['filters']['field_event_cat_tid']['vocabulary'] = 'categorie_evenement';
  /* Critère de filtrage: Contenu : Sujet de la formation (field_envent_training_topic) */
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['id'] = 'field_envent_training_topic_tid';
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['table'] = 'field_data_field_envent_training_topic';
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['field'] = 'field_envent_training_topic_tid';
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['expose']['operator_id'] = 'field_envent_training_topic_tid_op';
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['expose']['label'] = 'Sujet de la formation';
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['expose']['operator'] = 'field_envent_training_topic_tid_op';
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['expose']['identifier'] = 'field_envent_training_topic_tid';
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    5 => 0,
    4 => 0,
    3 => 0,
  );
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_envent_training_topic_tid']['vocabulary'] = 'categories_de_formation';
  $handler->display->display_options['path'] = 'se-former/agenda';
  $handler->display->display_options['menu']['title'] = 'Agenda';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Bloc non formation */
  $handler = $view->new_display('block', 'Bloc non formation', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Agenda';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['css_class'] = 'block-events-home';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Voir tous les événements';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '2';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Url de destination */
  $handler->display->display_options['fields']['field_event_url_target']['id'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['table'] = 'field_data_field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['field'] = 'field_event_url_target';
  $handler->display->display_options['fields']['field_event_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_event_url_target']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Lien vers nouvelle fenêtre */
  $handler->display->display_options['fields']['field_event_new_window']['id'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['table'] = 'field_data_field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['field'] = 'field_event_new_window';
  $handler->display->display_options['fields']['field_event_new_window']['label'] = '';
  $handler->display->display_options['fields']['field_event_new_window']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_event_new_window']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '150',
  );
  /* Champ: Contenu : Image */
  $handler->display->display_options['fields']['field_event_image']['id'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['table'] = 'field_data_field_event_image';
  $handler->display->display_options['fields']['field_event_image']['field'] = 'field_event_image';
  $handler->display->display_options['fields']['field_event_image']['label'] = '';
  $handler->display->display_options['fields']['field_event_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_event_image']['type'] = 'list';
  $handler->display->display_options['fields']['field_event_image']['settings'] = array(
    'link' => '0',
  );
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Draggableviews : Poids */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'events:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 0;
  /* Critère de tri: Contenu : Date de publication */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
    'event' => 'event',
  );
  /* Critère de filtrage: Contenu : Dates de parution -  start date (field_event_publication_date) */
  $handler->display->display_options['filters']['field_event_publication_date_value']['id'] = 'field_event_publication_date_value';
  $handler->display->display_options['filters']['field_event_publication_date_value']['table'] = 'field_data_field_event_publication_date';
  $handler->display->display_options['filters']['field_event_publication_date_value']['field'] = 'field_event_publication_date_value';
  $handler->display->display_options['filters']['field_event_publication_date_value']['operator'] = '<=';
  $handler->display->display_options['filters']['field_event_publication_date_value']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_publication_date_value']['default_date'] = 'now';
  /* Critère de filtrage: Contenu : Dates de parution - end date (field_event_publication_date:value2) */
  $handler->display->display_options['filters']['field_event_publication_date_value2']['id'] = 'field_event_publication_date_value2';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['table'] = 'field_data_field_event_publication_date';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['field'] = 'field_event_publication_date_value2';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['operator'] = '>=';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['granularity'] = 'hour';
  $handler->display->display_options['filters']['field_event_publication_date_value2']['default_date'] = 'now';
  /* Critère de filtrage: Contenu : Catégorie (field_event_cat) */
  $handler->display->display_options['filters']['field_event_cat_tid']['id'] = 'field_event_cat_tid';
  $handler->display->display_options['filters']['field_event_cat_tid']['table'] = 'field_data_field_event_cat';
  $handler->display->display_options['filters']['field_event_cat_tid']['field'] = 'field_event_cat_tid';
  $handler->display->display_options['filters']['field_event_cat_tid']['operator'] = 'not';
  $handler->display->display_options['filters']['field_event_cat_tid']['value'] = array(
    37 => '37',
  );
  $handler->display->display_options['filters']['field_event_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_event_cat_tid']['vocabulary'] = 'categorie_evenement';
  $handler->display->display_options['block_description'] = 'Bloc non formation';
  $translatables['events'] = array(
    t('Master'),
    t('Agenda'),
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
    t('Page événements'),
    t('L\'agenda de l\'AMAPL'),
    t('Chercher'),
    t('<h2 class="title-page-list-events">Résultats</h2>'),
    t('Il n\'y a pas de résultats correspondant à votre recherche. Merci de modifier les critères ci-dessus.'),
    t('Lieu : '),
    t('Type d\'événement :'),
    t('Classement'),
    t('Dates de l\'événement'),
    t('Bloc événements'),
    t('Voir tous les événements'),
    t('Bloc événements tagués'),
    t('Tout'),
    t('Page formations'),
    t('Les formations du Portail des Professions Libérales'),
    t('<h3 class="title-event-list">[title]</h3>'),
    t('Sujet de la formation'),
    t('Bloc non formation'),
  );
  $export['events'] = $view;

  return $export;
}
