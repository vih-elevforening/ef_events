<?php
/**
 * @file
 * ef_events.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function ef_events_user_default_permissions() {
  $permissions = array();


  // Exported permission: 'create commerce_product entities of bundle registration'.
  $permissions['create commerce_product entities of bundle registration'] = array(
    'name' => 'create commerce_product entities of bundle registration',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create event_payable content'.
  $permissions['create event_payable content'] = array(
    'name' => 'create event_payable content',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any event_payable content'.
  $permissions['delete any event_payable content'] = array(
    'name' => 'delete any event_payable content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own event_payable content'.
  $permissions['delete own event_payable content'] = array(
    'name' => 'delete own event_payable content',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any commerce_product entity of bundle registration'.
  $permissions['edit any commerce_product entity of bundle registration'] = array(
    'name' => 'edit any commerce_product entity of bundle registration',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit any event_payable content'.
  $permissions['edit any event_payable content'] = array(
    'name' => 'edit any event_payable content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own commerce_product entities of bundle registration'.
  $permissions['edit own commerce_product entities of bundle registration'] = array(
    'name' => 'edit own commerce_product entities of bundle registration',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'edit own event_payable content'.
  $permissions['edit own event_payable content'] = array(
    'name' => 'edit own event_payable content',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view any commerce_product entity of bundle registration'.
  $permissions['view any commerce_product entity of bundle registration'] = array(
    'name' => 'view any commerce_product entity of bundle registration',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle registration'.
  $permissions['view own commerce_product entities of bundle registration'] = array(
    'name' => 'view own commerce_product entities of bundle registration',
    'roles' => array(
      'administrator' => 'administrator',
      'content moderator' => 'content moderator',
    ),
    'module' => 'commerce_product',
  );

  return $permissions;
}
