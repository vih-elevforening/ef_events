<?php
/**
 * @file
 * ef_events.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ef_events_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'registration_commerce_product';
  $strongarm->value = '1';
  $export['registration_commerce_product'] = $strongarm;

  return $export;
}
