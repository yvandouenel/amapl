<?php
/**
 * @file
 * feature_dev.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function feature_dev_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'masquerade_admin_roles';
  $strongarm->value = array(
    3 => '3',
    1 => 0,
    2 => 0,
    5 => 0,
    4 => 0,
  );
  $export['masquerade_admin_roles'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'masquerade_quick_switches';
  $strongarm->value = array(
    0 => '7',
    1 => '8',
  );
  $export['masquerade_quick_switches'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'masquerade_test_user';
  $strongarm->value = '';
  $export['masquerade_test_user'] = $strongarm;

  return $export;
}
