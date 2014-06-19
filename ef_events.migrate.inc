<?php

/**
 * @file
 */

class EFPaidEventProduct extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import short courses from CSV file.');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'sku' => array(
          'type' => 'varchar',
          'length' => 32,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationEntityAPI::getKeySchema('commerce_product', 'registration')
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'ef_events') . '/import/products.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationEntityAPI('commerce_product', 'registration');

    $this->addFieldMapping('title', 'title');
    $this->addFieldMapping('sku', 'sku');
    $this->addFieldMapping('commerce_price', 'price');
    $this->addFieldMapping('commerce_stock', 'stock_quantity');
    $this->addFieldMapping('uid', 'uid');
    $this->addFieldMapping('language', 'language');
  }

  function csvcolumns() {
    $columns[0] = array('title', 'Title');
    $columns[1] = array('sku', 'SKU');
    $columns[2] = array('price', 'Price');
    $columns[3] = array('stock_status', 'Stock status');
    $columns[4] = array('stock_quantity', 'Stock quantity');

    return $columns;
  }

  function prepareRow($row) {
    $row->uid = 1;
    $row->language = LANGUAGE_NONE;
  }
}

class EFPaidEventNode extends Migration {

  public function __construct() {
    parent::__construct();
    $this->description = t('Import event nodes.');
    $this->dependencies = array('EFPaidEventProduct');

    // Create a map object for tracking the relationships between source rows
    $this->map = new MigrateSQLMap($this->machineName,
      array(
        'id' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => TRUE,
        ),
      ),
      MigrateDestinationNode::getKeySchema()
    );

    // Create a MigrateSource object.
    $this->source = new MigrateSourceCSV(drupal_get_path('module', 'ef_events') . '/import/events.csv', $this->csvcolumns(), array('header_rows' => 1));

    $this->destination = new MigrateDestinationNode('event_payable');

    $this->addFieldMapping('uid', 'uid')->defaultValue(1);

    $this->addFieldMapping('title', 'title');
    /*
    $this->addFieldMapping('body', 'body');
    $this->addFieldMapping('body:format')
      ->defaultValue('filtered_html');
    */
    $this->addFieldMapping('field_date', 'date_from');
    $this->addFieldMapping('field_date:to', 'date_to');

    $this->addFieldMapping('field_location')
      ->defaultValue('physical');

    /*
    // Featured image
    $this->addFieldMapping('field_featured_image', 'featured_image');
    $this->addFieldMapping('field_featured_image:file_replace')
      ->defaultValue(FILE_EXISTS_REPLACE);
    $this->addFieldMapping('field_featured_image:source_dir')
      ->defaultValue(drupal_get_path('module', 'vih_short_course_commerce') . '/import/images');
    */
    /*
    // Adress fields to be added
    $arguments = array(
      // 'name_line' => array('source_field' => 'full_name'),
      'thoroughfare' => array('source_field' => 'address'),
      'locality' => array('source_field' => 'city'),
      'postal_code' => array('source_field' => 'zipcode'),
      'country' => array('source_field' => 'country'),
    );
    $this->addFieldMapping('field_address', 'country')
      ->arguments($arguments)
      ->description('Address field');
    */
    // Connect the products.
    $this->addFieldMapping('field_registration_product', 'skus');
  }

  public function prepareRow($row) {
    $products = array();
    foreach (explode(',', $row->sku) as $sku) {
      $product = commerce_product_load_by_sku($sku);
      $products[] = $product->product_id;
    }
    $row->skus = $products;
  }

  function csvcolumns() {
    $columns[0] = array('id', 'Id');
    $columns[1] = array('title', 'Title');
    $columns[2] = array('date_from', 'Date From');
    $columns[3] = array('date_to', 'Date To');
    $columns[4] = array('body', 'Body');
    $columns[5] = array('sku', 'SKU');
    $columns[6] = array('product', 'Product');
    $columns[7] = array('featured_image', 'Featured Image');
    return $columns;
  }
}
/*
 *
features[field_instance][] = node-event_payable-field_address
features[field_instance][] = node-event_payable-field_date
features[field_instance][] = node-event_payable-field_location
features[field_instance][] = node-event_payable-field_logo
features[field_instance][] = node-event_payable-field_organizers
features[field_instance][] = node-event_payable-field_registration_product
 */