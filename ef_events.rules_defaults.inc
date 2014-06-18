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
  $items['rules_ef_events_'] = entity_import('rules_config', '{ "rules_ef_events_" : {
      "LABEL" : "EF Events: Checkout Redirect",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "TAGS" : [ "EF Events" ],
      "REQUIRES" : [ "rules", "commerce_cart" ],
      "ON" : { "commerce_cart_product_add" : [] },
      "DO" : [ { "redirect" : { "url" : "checkout" } } ]
    }
  }');
  return $items;
}
