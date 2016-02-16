<?php
/**
 * @file
 * featurecoocontext.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function featurecoocontext_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
}
