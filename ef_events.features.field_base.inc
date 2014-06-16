<?php
/**
 * @file
 * ef_events.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function ef_events_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'registration_commerce_reg'
  $field_bases['registration_commerce_reg'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'registration_commerce_reg',
    'foreign keys' => array(
      'registration' => array(
        'columns' => array(
          'target_id' => 'registration_id',
        ),
        'table' => 'registration',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 1,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'registration',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}
