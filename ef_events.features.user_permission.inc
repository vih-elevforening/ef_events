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

  // Exported permission: 'delete any event registration'.
  $permissions['delete any event registration'] = array(
    'name' => 'delete any event registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'edit event registration state'.
  $permissions['edit event registration state'] = array(
    'name' => 'edit event registration state',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  // Exported permission: 'registration_commerce_administer'.
  $permissions['registration_commerce_administer'] = array(
    'name' => 'registration_commerce_administer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration_commerce',
  );

  // Exported permission: 'registration_commerce_pay_any_registration'.
  $permissions['registration_commerce_pay_any_registration'] = array(
    'name' => 'registration_commerce_pay_any_registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration_commerce',
  );

  // Exported permission: 'update any event registration'.
  $permissions['update any event registration'] = array(
    'name' => 'update any event registration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'registration',
  );

  return $permissions;
}
