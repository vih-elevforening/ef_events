<?php
/**
 * @file
 * ef_events.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ef_events_default_rules_configuration() {
  $items = array();
  $items['rules_finalize_registrations_on_an_order'] = entity_import('rules_config', '{ "rules_finalize_registrations_on_an_order" : {
      "LABEL" : "Finalize Registrations on an order",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "registration_commerce", "commerce_checkout" ],
      "ON" : { "commerce_checkout_complete" : [] },
      "DO" : [
        { "registration_commerce_set_state" : {
            "commerce_order" : [ "commerce_order" ],
            "registration_state" : "complete"
          }
        }
      ]
    }
  }');
  return $items;
}
