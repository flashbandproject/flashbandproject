<?php
/**
 * @file
 * flashband_users.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function flashband_users_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'flashband_users-instrument-explode';
  $feeds_tamper->importer = 'flashband_users';
  $feeds_tamper->source = 'Instrument';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['flashband_users-instrument-explode'] = $feeds_tamper;

  return $export;
}
