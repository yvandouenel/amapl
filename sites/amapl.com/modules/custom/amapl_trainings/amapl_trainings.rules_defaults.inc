<?php
/**
 * @file
 * amapl_trainings.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function amapl_trainings_default_rules_configuration() {
  $items = array();
  $items['rules_apr_s_inscription'] = entity_import('rules_config', '{ "rules_apr_s_inscription" : {
      "LABEL" : "Apr\\u00e8s inscription",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "training" ],
      "REQUIRES" : [ "rules", "registration" ],
      "ON" : { "registration_insert" : [] },
      "DO" : [
        { "redirect" : { "url" : "registration\\/[registration:registration-id]" } }
      ]
    }
  }');
  return $items;
}
