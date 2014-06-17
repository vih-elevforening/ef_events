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

  // Exported permission: 'administer event registration'.
  $permissions['administer event registration'] = array(
    'name' => 'administer event registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own event registration'.
  $permissions['administer own event registration'] = array(
    'name' => 'administer own event registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer own paid_event registration'.
  $permissions['administer own paid_event registration'] = array(
    'name' => 'administer own paid_event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'administer paid_event registration'.
  $permissions['administer paid_event registration'] = array(
    'name' => 'administer paid_event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration'.
  $permissions['administer registration'] = array(
    'name' => 'administer registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration states'.
  $permissions['administer registration states'] = array(
    'name' => 'administer registration states',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'administer registration types'.
  $permissions['administer registration types'] = array(
    'name' => 'administer registration types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create commerce_product entities of bundle registration'.
  $permissions['create commerce_product entities of bundle registration'] = array(
    'name' => 'create commerce_product entities of bundle registration',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'create event registration other anonymous'.
  $permissions['create event registration other anonymous'] = array(
    'name' => 'create event registration other anonymous',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'create event registration other users'.
  $permissions['create event registration other users'] = array(
    'name' => 'create event registration other users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
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

  // Exported permission: 'create paid_event registration'.
  $permissions['create paid_event registration'] = array(
    'name' => 'create paid_event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'create paid_event registration other anonymous'.
  $permissions['create paid_event registration other anonymous'] = array(
    'name' => 'create paid_event registration other anonymous',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'create paid_event registration other users'.
  $permissions['create paid_event registration other users'] = array(
    'name' => 'create paid_event registration other users',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'delete any event registration'.
  $permissions['delete any event registration'] = array(
    'name' => 'delete any event registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'delete any event_payable content'.
  $permissions['delete any event_payable content'] = array(
    'name' => 'delete any event_payable content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any paid_event registration'.
  $permissions['delete any paid_event registration'] = array(
    'name' => 'delete any paid_event registration',
    'roles' => array(),
    'module' => 'registration',
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

  // Exported permission: 'delete own paid_event registration'.
  $permissions['delete own paid_event registration'] = array(
    'name' => 'delete own paid_event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'edit any commerce_product entity of bundle registration'.
  $permissions['edit any commerce_product entity of bundle registration'] = array(
    'name' => 'edit any commerce_product entity of bundle registration',
    'roles' => array(),
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

  // Exported permission: 'edit event registration state'.
  $permissions['edit event registration state'] = array(
    'name' => 'edit event registration state',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit own commerce_product entities of bundle registration'.
  $permissions['edit own commerce_product entities of bundle registration'] = array(
    'name' => 'edit own commerce_product entities of bundle registration',
    'roles' => array(),
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

  // Exported permission: 'edit paid_event registration state'.
  $permissions['edit paid_event registration state'] = array(
    'name' => 'edit paid_event registration state',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'update any event registration'.
  $permissions['update any event registration'] = array(
    'name' => 'update any event registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'update any paid_event registration'.
  $permissions['update any paid_event registration'] = array(
    'name' => 'update any paid_event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'update own paid_event registration'.
  $permissions['update own paid_event registration'] = array(
    'name' => 'update own paid_event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'view any commerce_product entity of bundle registration'.
  $permissions['view any commerce_product entity of bundle registration'] = array(
    'name' => 'view any commerce_product entity of bundle registration',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own commerce_product entities of bundle registration'.
  $permissions['view own commerce_product entities of bundle registration'] = array(
    'name' => 'view own commerce_product entities of bundle registration',
    'roles' => array(),
    'module' => 'commerce_product',
  );

  // Exported permission: 'view own paid_event registration'.
  $permissions['view own paid_event registration'] = array(
    'name' => 'view own paid_event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  // Exported permission: 'view paid_event registration'.
  $permissions['view paid_event registration'] = array(
    'name' => 'view paid_event registration',
    'roles' => array(),
    'module' => 'registration',
  );

  return $permissions;
}
