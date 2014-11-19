<?php
/**
 * @file
 * devtrac_health_centres_data_importer_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function devtrac_health_centres_data_importer_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_data_action_centres_importer';
  $feeds_importer->config = array(
    'name' => '4. mTrac Action Centres (Users) Importer',
    'description' => 'Imports information related to action centres',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsUserProcessor',
      'config' => array(
        'roles' => array(),
        'status' => 1,
        'defuse_mail' => FALSE,
        'mappings' => array(
          0 => array(
            'source' => 'Username',
            'target' => 'name',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'First Name',
            'target' => 'field_user_firstname',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Surname',
            'target' => 'field_user_surname',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => 0,
          ),
          4 => array(
            'source' => 'Function',
            'target' => 'taxonomy_vocabulary_5',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          5 => array(
            'source' => 'Manager',
            'target' => 'field_user_superior:label',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Department',
            'target' => 'taxonomy_vocabulary_4',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'About Me',
            'target' => 'field_user_aboutme',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Password',
            'target' => 'pass',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => 0,
        'input_format' => NULL,
        'skip_hash_check' => FALSE,
        'bundle' => 'user',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_data_action_centres_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_data_action_items_importer';
  $feeds_importer->config = array(
    'name' => '5. mTrac Action Items Importer',
    'description' => 'Imports data related to action items into a devtrac instance',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Status',
            'target' => 'field_actionitem_status',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Visited on',
            'target' => 'field_actionitem_due_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Priority',
            'target' => 'field_actionitem_severity',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'District',
            'target' => 'taxonomy_vocabulary_6',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'Title',
            'target' => 'field_actionitem_resp_place:label',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Site Visit Lat',
            'target' => 'field_actionitem_lat_long:lat',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Site Visit Lon',
            'target' => 'field_actionitem_lat_long:lon',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Sector',
            'target' => 'taxonomy_vocabulary_8',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          10 => array(
            'source' => 'Action Center',
            'target' => 'field_actionitem_responsible:label',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Follow-up Task',
            'target' => 'field_actionitem_followuptask',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'actionitem',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_data_action_items_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_data_districts_importer';
  $feeds_importer->config = array(
    'name' => '1. mTrac Districts Importer',
    'description' => 'Imports districts into a devtrac instance',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Name',
            'target' => 'name',
            'unique' => 0,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'vocabulary_6',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_data_districts_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_data_location_types_health_centres_importer';
  $feeds_importer->config = array(
    'name' => '2. mTrac Location Types(Health Centres) Importer',
    'description' => 'Imports Location types for health centers into a devtrac instance',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsTermProcessor',
      'config' => array(
        'vocabulary' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Location Type',
            'target' => 'name',
            'unique' => 1,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'vocabulary_1',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_data_location_types_health_centres_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_data_locations_importer';
  $feeds_importer->config = array(
    'name' => '3. mTrac Locations Importer',
    'description' => 'Imports Location information into a devtrac instance',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'csv',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Location Types',
            'target' => 'taxonomy_vocabulary_1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'Admin Units',
            'target' => 'taxonomy_vocabulary_6',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Lat',
            'target' => 'field_place_lat_long:lat',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Lon',
            'target' => 'field_place_lat_long:lon',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'place',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_data_locations_importer'] = $feeds_importer;

  return $export;
}
