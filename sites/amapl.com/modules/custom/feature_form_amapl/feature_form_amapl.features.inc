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
  if ($module == "strongarm" && $api == "strongarm") {
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
    "label" : "Demande d\\u0027adh\\u00e9sion BNC en ligne",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Valider le formulaire avant paiement",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "R\\u00e9sum\\u00e9 de votre demande d\\u0027adh\\u00e9sion en ligne",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "5" : "5", "4" : "4", "3" : "3", "6" : 0 },
      "resubmit_action" : "old",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EVous renseignez et validez ce formulaire, puis payez par CB sur le compte Paypal de l\\u2019AMAPL. \\u003Cstrong\\u003EVotre adh\\u00e9sion \\u00e0 l\\u2019AMAPL ne sera prise en compte qu\\u2019apr\\u00e8s ce paiement\\u003C\\/strong\\u003E, sous r\\u00e9serve du respect des d\\u00e9lais r\\u00e9glementaires d\\u2019adh\\u00e9sion en vigueur. Un remboursement du r\\u00e8glement CB pourra avoir lieu en cas de rejet de l\\u2019adh\\u00e9sion pour ce motif.\\u0026nbsp;\\u0026nbsp;\\u003Cbr \\/\\u003E\\r\\nDemande d\\u0027adh\\u00e9sion en ligne actuellement possible pour les seules activit\\u00e9s BNC (professions lib\\u00e9rales) relevant de l\\u0027activit\\u00e9 AGA.\\u0026nbsp;Bulletins d\\u0027adh\\u00e9sion et tarifs sp\\u00e9cifiques BIC \\/ BA, rendez-vous sur le\\u0026nbsp;site\\u0026nbsp;\\u003Cstrong\\u003E\\u003Ca href=\\u0022http:\\/\\/www.cga30.fr\\/crbst_14.html\\u0022\\u003Ecga30.fr\\u003C\\/a\\u003E\\u003C\\/strong\\u003E.\\u003C\\/span\\u003E\\u003Cbr \\/\\u003E\\r\\n\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "anonymous_links" : 1,
      "session_save" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/inscription-amapl",
        "alias" : "adherer\\/formulaire",
        "language" : "und"
      }
    }
  }');
  $items['inscription_amapl_caa'] = entity_import('entityform_type', '{
    "type" : "inscription_amapl_caa",
    "label" : "Demande d\\u0027adh\\u00e9sion BIC \\/ BA en ligne",
    "data" : {
      "draftable" : 0,
      "draft_redirect_path" : "",
      "draft_button_text" : "",
      "draft_save_text" : { "value" : "", "format" : "full_html" },
      "submit_button_text" : "Valider le formulaire avant paiement",
      "submit_confirm_msg" : "",
      "your_submissions" : "",
      "disallow_resubmit_msg" : "",
      "delete_confirm_msg" : "",
      "page_title_view" : "R\\u00e9sum\\u00e9 de votre demande d\\u0027adh\\u00e9sion en ligne",
      "preview_page" : 0,
      "submission_page_title" : "",
      "submission_text" : { "value" : "", "format" : "full_html" },
      "submission_show_submitted" : 0,
      "submissions_view" : "default",
      "user_submissions_view" : "default",
      "form_status" : "ENTITYFORM_OPEN",
      "roles" : { "1" : "1", "2" : "2", "5" : "5", "4" : "4", "3" : "3", "6" : 0 },
      "resubmit_action" : "old",
      "redirect_path" : "",
      "instruction_pre" : {
        "value" : "\\u003Cp\\u003EVous renseignez et validez ce formulaire, puis payez par CB sur le compte Paypal de l\\u2019AMAPL. \\u003Cstrong\\u003EVotre adh\\u00e9sion \\u00e0 l\\u2019AMAPL ne sera prise en compte qu\\u2019apr\\u00e8s ce paiement\\u003C\\/strong\\u003E, sous r\\u00e9serve du respect des d\\u00e9lais r\\u00e9glementaires d\\u2019adh\\u00e9sion en vigueur. Un remboursement du r\\u00e8glement CB pourra avoir lieu en cas de rejet de l\\u2019adh\\u00e9sion pour ce motif.\\u0026nbsp;\\u0026nbsp;\\u003Cbr \\/\\u003E\\r\\nDemande d\\u0027adh\\u00e9sion en ligne actuellement possible pour les seules activit\\u00e9s BNC (professions lib\\u00e9rales) relevant de l\\u0027activit\\u00e9 AGA.\\u0026nbsp;Bulletins d\\u0027adh\\u00e9sion et tarifs sp\\u00e9cifiques BIC \\/ BA, rendez-vous sur le\\u0026nbsp;site\\u0026nbsp;\\u003Cstrong\\u003E\\u003Ca href=\\u0022http:\\/\\/www.cga30.fr\\/crbst_14.html\\u0022\\u003Ecga30.fr\\u003C\\/a\\u003E\\u003C\\/strong\\u003E.\\u003Cbr \\/\\u003E\\r\\n\\u0026nbsp;\\u003C\\/p\\u003E\\r\\n",
        "format" : "full_html"
      },
      "anonymous_links" : 1,
      "session_save" : 1
    },
    "weight" : "0",
    "rdf_mapping" : [],
    "paths" : { "submit" : {
        "source" : "eform\\/submit\\/inscription-amapl-caa",
        "alias" : "adherer\\/formulaire-bic-ba",
        "language" : "und"
      }
    }
  }');
  return $items;
}
