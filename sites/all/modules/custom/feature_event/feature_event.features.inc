<?php
/**
 * @file
 * feature_event.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_event_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function feature_event_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function feature_event_node_info() {
  $items = array(
    'event' => array(
      'name' => t('Evénement'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_registration_state().
 */
function feature_event_default_registration_state() {
  $items = array();
  $items['canceled'] = entity_import('registration_state', '{
    "name" : "canceled",
    "label" : "Canceled",
    "description" : "Registration was cancelled",
    "default_state" : "0",
    "active" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['complete'] = entity_import('registration_state', '{
    "name" : "complete",
    "label" : "Complete",
    "description" : "Registration has been completed.",
    "default_state" : "1",
    "active" : "1",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  $items['pending'] = entity_import('registration_state', '{
    "name" : "pending",
    "label" : "Pending",
    "description" : "Registration is pending.",
    "default_state" : "0",
    "active" : "0",
    "show_on_form" : "0",
    "weight" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_registration_type().
 */
function feature_event_default_registration_type() {
  $items = array();
  $items['event_subscribe'] = entity_import('registration_type', '{
    "name" : "event_subscribe",
    "label" : "Inscription \\u00e9v\\u00e9nement",
    "locked" : "0",
    "weight" : "0",
    "data" : null,
    "rdf_mapping" : []
  }');
  return $items;
}
