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
  $items['rules_ef_events_only_allow_one_product_for_order'] = entity_import('rules_config', '{ "rules_ef_events_only_allow_one_product_for_order" : {
      "LABEL" : "EF Events: Only allow one product for order",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "commerce_cart" ],
      "ON" : { "commerce_cart_product_prepare" : [] },
      "DO" : [
        { "commerce_cart_empty" : { "commerce_order" : [ "commerce_order" ] } }
      ]
    }
  }');
  return $items;
}
