<?php
/**
 * @file
 * featurecoocontext.default_breakpoints.inc
 */

/**
 * Implements hook_default_breakpoints().
 */
function featurecoocontext_default_breakpoints() {
  $export = array();

  $breakpoint = new stdClass();
  $breakpoint->disabled = FALSE; /* Edit this to true to make a default breakpoint disabled initially */
  $breakpoint->api_version = 1;
  $breakpoint->machine_name = 'custom.user.small';
  $breakpoint->name = 'small';
  $breakpoint->breakpoint = '(max-width:960px)';
  $breakpoint->source = 'user';
  $breakpoint->source_type = 'custom';
  $breakpoint->status = 1;
  $breakpoint->weight = 0;
  $breakpoint->multipliers = array(
    '1x' => '1x',
  );
  $export['custom.user.small'] = $breakpoint;

  return $export;
}
