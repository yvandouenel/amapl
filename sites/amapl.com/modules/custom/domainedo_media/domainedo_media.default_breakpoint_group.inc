<?php
/**
 * @file
 * domainedo_media.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function domainedo_media_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'max';
  $breakpoint_group->name = 'max';
  $breakpoint_group->breakpoints = array(
    0 => NULL,
    1 => NULL,
    2 => 'breakpoints.theme.domainedo.wide',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['max'] = $breakpoint_group;

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'zoom';
  $breakpoint_group->name = 'zoom';
  $breakpoint_group->breakpoints = array(
    0 => NULL,
    1 => NULL,
    2 => 'breakpoints.theme.domainedo.wide',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['zoom'] = $breakpoint_group;

  return $export;
}
