<?php
/**
 * @file
 * flashband_users.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function flashband_users_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'flashband_users';
  $feeds_importer->config = array(
    'name' => 'flashband users',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'direct' => FALSE,
        'allowed_extensions' => 'txt csv tsv xml opml',
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(),
        'update_existing' => FALSE,
        'status' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Name',
            'target' => 'field_first_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Last',
            'target' => 'field_last_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 1,
          ),
          3 => array(
            'source' => 'Instrument',
            'target' => 'field_instrument',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Bio',
            'target' => 'field_bio',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Phone Number',
            'target' => 'field_phone:url',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'cat',
            'target' => 'name',
            'unique' => 0,
          ),
          7 => array(
            'source' => 'cat',
            'target' => 'pass',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Picture',
            'target' => 'picture',
            'unique' => FALSE,
          ),
        ),
        'defuse_mail' => FALSE,
        'input_format' => NULL,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => FALSE,
  );
  $export['flashband_users'] = $feeds_importer;

  return $export;
}
