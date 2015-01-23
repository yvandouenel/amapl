<?php
/**
 * @file
 * feature_crumbs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_crumbs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
