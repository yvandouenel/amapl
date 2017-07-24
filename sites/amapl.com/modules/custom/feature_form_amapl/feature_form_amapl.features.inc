<?php
/**
 * @file
 * feature_form_amapl.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_form_amapl_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_entityform_type().
 */
function feature_form_amapl_default_entityform_type() {
  $items = array();
  $items['inscription_amapl'] = entity_import('entityform_type', '{
    "type" : "inscription_amapl",
    "label" : "Inscription amapl",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "5" : "5", "4" : "4", "3" : "3" },
      "resubmit_action" : "old",
      "redirect_path" : "",
      "instruction_pre" : { "value" : "", "format" : "full_html" },
      "anonymous_links" : 1,
      "session_save" : 1
    },
    "weight" : "0",
    "metatags" : [],
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/inscription-amapl",
        "alias" : "adherer\\/formulaire",
        "language" : "und"
      }
    }
  }');
  return $items;
}
