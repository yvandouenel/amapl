<?php
/**
 * @file
 * feature_references.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function feature_references_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'references';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Références';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Références';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'plus';
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    2 => '2',
  );
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
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h3>[title]</h3>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Critère de tri: Contenu : Date de décision (field_pub_date_decision) */
  $handler->display->display_options['sorts']['field_pub_date_decision_value']['id'] = 'field_pub_date_decision_value';
  $handler->display->display_options['sorts']['field_pub_date_decision_value']['table'] = 'field_data_field_pub_date_decision';
  $handler->display->display_options['sorts']['field_pub_date_decision_value']['field'] = 'field_pub_date_decision_value';
  $handler->display->display_options['sorts']['field_pub_date_decision_value']['order'] = 'DESC';
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
    'references' => 'references',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Texte non filtré */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3 class="ref-subtitles">Sélection de jurisprudence</h3>';
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
    'references' => 'references',
  );
  /* Critère de filtrage: Contenu : Catégorie (field_ref_cat) */
  $handler->display->display_options['filters']['field_ref_cat_tid']['id'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['table'] = 'field_data_field_ref_cat';
  $handler->display->display_options['filters']['field_ref_cat_tid']['field'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['value'] = array(
    42 => '42',
  );
  $handler->display->display_options['filters']['field_ref_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ref_cat_tid']['vocabulary'] = 'categories_ref';
  /* Critère de filtrage: Contenu : Date de publication */
  $handler->display->display_options['filters']['created']['id'] = 'created';
  $handler->display->display_options['filters']['created']['table'] = 'node';
  $handler->display->display_options['filters']['created']['field'] = 'created';
  $handler->display->display_options['filters']['created']['value']['value'] = '1970-01-01';
  $handler->display->display_options['path'] = 'references';

  /* Display: Bloc */
  $handler = $view->new_display('block', 'Bloc', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Références';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Voir plus de références';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Critère de tri: Contenu : Date de décision (field_pub_date_decision) */
  $handler->display->display_options['sorts']['field_pub_date_decision_value']['id'] = 'field_pub_date_decision_value';
  $handler->display->display_options['sorts']['field_pub_date_decision_value']['table'] = 'field_data_field_pub_date_decision';
  $handler->display->display_options['sorts']['field_pub_date_decision_value']['field'] = 'field_pub_date_decision_value';
  $handler->display->display_options['sorts']['field_pub_date_decision_value']['order'] = 'DESC';
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
    'references' => 'references',
  );
  /* Critère de filtrage: Contenu : Affichage en page d&#039;accueil (field_pub_home) */
  $handler->display->display_options['filters']['field_pub_home_value']['id'] = 'field_pub_home_value';
  $handler->display->display_options['filters']['field_pub_home_value']['table'] = 'field_data_field_pub_home';
  $handler->display->display_options['filters']['field_pub_home_value']['field'] = 'field_pub_home_value';
  $handler->display->display_options['filters']['field_pub_home_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'block références';

  /* Display: Sélection de jurisprudence */
  $handler = $view->new_display('attachment', 'Sélection de jurisprudence', 'attachment_4');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sélection de jurisprudence';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Afficher les autres jurisprudences sélectionnées';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_1';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Texte non filtré */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3 class="ref-subtitles">Sélection de jurisprudence</h3>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4>[title]</h4>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : Afficher la cible du lien dans une nouvelle fenêtre ? */
  $handler->display->display_options['fields']['field_window_target']['id'] = 'field_window_target';
  $handler->display->display_options['fields']['field_window_target']['table'] = 'field_data_field_window_target';
  $handler->display->display_options['fields']['field_window_target']['field'] = 'field_window_target';
  $handler->display->display_options['fields']['field_window_target']['label'] = '';
  $handler->display->display_options['fields']['field_window_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_window_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_window_target']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_window_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_window_target']['empty'] = '_self';
  $handler->display->display_options['fields']['field_window_target']['empty_zero'] = TRUE;
  /* Champ: Contenu : URL de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_url_target']['alter']['text'] = '<a href="[field_news_url_target]" target="[field_window_target]">[title]</a>
[body]';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_url_target']['empty'] = '<a href="[path]" target="[field_window_target]">[title]</a>
[body]';
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
    'references' => 'references',
  );
  /* Critère de filtrage: Contenu : Catégorie (field_ref_cat) */
  $handler->display->display_options['filters']['field_ref_cat_tid']['id'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['table'] = 'field_data_field_ref_cat';
  $handler->display->display_options['filters']['field_ref_cat_tid']['field'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['value'] = array(
    42 => '42',
  );
  $handler->display->display_options['filters']['field_ref_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ref_cat_tid']['vocabulary'] = 'categories_ref';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Sélection de textes */
  $handler = $view->new_display('attachment', 'Sélection de textes', 'attachment_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sélection de jurisprudence';
  $handler->display->display_options['defaults']['use_more'] = FALSE;
  $handler->display->display_options['use_more'] = TRUE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_always'] = FALSE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['defaults']['use_more_text'] = FALSE;
  $handler->display->display_options['use_more_text'] = 'Afficher les autres textes sélectionnés';
  $handler->display->display_options['defaults']['link_display'] = FALSE;
  $handler->display->display_options['link_display'] = 'page_2';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Texte non filtré */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3 class="ref-subtitles">Sélection de textes</h3>';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Champ: Contenu : Titre */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h4>[title]</h4>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Champ: Contenu : Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['exclude'] = TRUE;
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['body']['type'] = 'text_summary_or_trimmed';
  $handler->display->display_options['fields']['body']['settings'] = array(
    'trim_length' => '300',
  );
  /* Champ: Contenu : Afficher la cible du lien dans une nouvelle fenêtre ? */
  $handler->display->display_options['fields']['field_window_target']['id'] = 'field_window_target';
  $handler->display->display_options['fields']['field_window_target']['table'] = 'field_data_field_window_target';
  $handler->display->display_options['fields']['field_window_target']['field'] = 'field_window_target';
  $handler->display->display_options['fields']['field_window_target']['label'] = '';
  $handler->display->display_options['fields']['field_window_target']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_window_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_window_target']['alter']['text'] = '_blank';
  $handler->display->display_options['fields']['field_window_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_window_target']['empty'] = '_self';
  $handler->display->display_options['fields']['field_window_target']['empty_zero'] = TRUE;
  /* Champ: Contenu : Chemin */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  /* Champ: Contenu : URL de destination */
  $handler->display->display_options['fields']['field_news_url_target']['id'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['table'] = 'field_data_field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['field'] = 'field_news_url_target';
  $handler->display->display_options['fields']['field_news_url_target']['label'] = '';
  $handler->display->display_options['fields']['field_news_url_target']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_news_url_target']['alter']['text'] = '<a href="[field_news_url_target]" target="[field_window_target]">[title]</a>
[body]';
  $handler->display->display_options['fields']['field_news_url_target']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_news_url_target']['empty'] = '<a href="[path]" target="[field_window_target]">[title]</a>
[body]';
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
    'references' => 'references',
  );
  /* Critère de filtrage: Contenu : Catégorie (field_ref_cat) */
  $handler->display->display_options['filters']['field_ref_cat_tid']['id'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['table'] = 'field_data_field_ref_cat';
  $handler->display->display_options['filters']['field_ref_cat_tid']['field'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['value'] = array(
    43 => '43',
  );
  $handler->display->display_options['filters']['field_ref_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ref_cat_tid']['vocabulary'] = 'categories_ref';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Sélection de textes */
  $handler = $view->new_display('attachment', 'Sélection de textes', 'attachment_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Téléchargements';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Texte non filtré */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3 class="ref-subtitles">Téléchargements</h3>';
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
    'references' => 'references',
  );
  /* Critère de filtrage: Contenu : Catégorie (field_ref_cat) */
  $handler->display->display_options['filters']['field_ref_cat_tid']['id'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['table'] = 'field_data_field_ref_cat';
  $handler->display->display_options['filters']['field_ref_cat_tid']['field'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['value'] = array(
    145 => '145',
  );
  $handler->display->display_options['filters']['field_ref_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ref_cat_tid']['vocabulary'] = 'categories_ref';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Tribune Libre */
  $handler = $view->new_display('attachment', 'Tribune Libre', 'attachment_3');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Téléchargements';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Entête: Global : Texte non filtré */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['content'] = '<h3 class="ref-subtitles">Tribune Libre</h3>';
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
    'references' => 'references',
  );
  /* Critère de filtrage: Contenu : Catégorie (field_ref_cat) */
  $handler->display->display_options['filters']['field_ref_cat_tid']['id'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['table'] = 'field_data_field_ref_cat';
  $handler->display->display_options['filters']['field_ref_cat_tid']['field'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['value'] = array(
    172 => '172',
  );
  $handler->display->display_options['filters']['field_ref_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ref_cat_tid']['vocabulary'] = 'categories_ref';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'block_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';

  /* Display: Page jurisprudence */
  $handler = $view->new_display('page', 'Page jurisprudence', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sélection de jurisprudences';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['header'] = FALSE;
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
    'references' => 'references',
  );
  /* Critère de filtrage: Contenu : Catégorie (field_ref_cat) */
  $handler->display->display_options['filters']['field_ref_cat_tid']['id'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['table'] = 'field_data_field_ref_cat';
  $handler->display->display_options['filters']['field_ref_cat_tid']['field'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['value'] = array(
    42 => '42',
  );
  $handler->display->display_options['filters']['field_ref_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ref_cat_tid']['vocabulary'] = 'categories_ref';
  $handler->display->display_options['path'] = 'references/jurisprudence';

  /* Display: Sélection de textes */
  $handler = $view->new_display('page', 'Sélection de textes', 'page_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Sélection de textes';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_label'] = 'Éléments par page';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all_label'] = '- Tout -';
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Décalage';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« premier';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['pager']['options']['tags']['next'] = 'suivant ›';
  $handler->display->display_options['pager']['options']['tags']['last'] = 'dernier »';
  $handler->display->display_options['defaults']['header'] = FALSE;
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
    'references' => 'references',
  );
  /* Critère de filtrage: Contenu : Catégorie (field_ref_cat) */
  $handler->display->display_options['filters']['field_ref_cat_tid']['id'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['table'] = 'field_data_field_ref_cat';
  $handler->display->display_options['filters']['field_ref_cat_tid']['field'] = 'field_ref_cat_tid';
  $handler->display->display_options['filters']['field_ref_cat_tid']['value'] = array(
    43 => '43',
  );
  $handler->display->display_options['filters']['field_ref_cat_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_ref_cat_tid']['vocabulary'] = 'categories_ref';
  $handler->display->display_options['path'] = 'references/textes';
  $translatables['references'] = array(
    t('Master'),
    t('Références'),
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
    t('<h3>[title]</h3>'),
    t('Page'),
    t('<h3 class="ref-subtitles">Sélection de jurisprudence</h3>'),
    t('Bloc'),
    t('Voir plus de références'),
    t('block références'),
    t('Sélection de jurisprudence'),
    t('Afficher les autres jurisprudences sélectionnées'),
    t('<h4>[title]</h4>'),
    t('_blank'),
    t('_self'),
    t('<a href="[field_news_url_target]" target="[field_window_target]">[title]</a>
[body]'),
    t('<a href="[path]" target="[field_window_target]">[title]</a>
[body]'),
    t('Sélection de textes'),
    t('Afficher les autres textes sélectionnés'),
    t('<h3 class="ref-subtitles">Sélection de textes</h3>'),
    t('Téléchargements'),
    t('<h3 class="ref-subtitles">Téléchargements</h3>'),
    t('Tribune Libre'),
    t('<h3 class="ref-subtitles">Tribune Libre</h3>'),
    t('Page jurisprudence'),
    t('Sélection de jurisprudences'),
  );
  $export['references'] = $view;

  return $export;
}
