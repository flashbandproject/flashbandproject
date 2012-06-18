<?php
/**
 * @file
 * flashband_bands.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function flashband_bands_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function flashband_bands_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function flashband_bands_node_info() {
  $items = array(
    'band' => array(
      'name' => t('Flash Band'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Band Name'),
      'help' => '',
    ),
  );
  return $items;
}
