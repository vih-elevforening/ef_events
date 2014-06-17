<?php
/**
 * @file
 * ef_events.features.inc
 */

/**
 * Implements hook_commerce_product_default_types().
 */
function ef_events_commerce_product_default_types() {
  $items = array(
    'registration' => array(
      'type' => 'registration',
      'name' => 'Registration',
      'description' => 'Product type for registrations.',
      'help' => '',
      'revision' => 1,
    ),
  );
  return $items;
}

/**
 * Implements hook_ctools_plugin_api().
 */
function ef_events_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ef_events_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}
