<?php
/**
 * @file
 * devtrac_all_data_importers_feature.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function devtrac_all_data_importers_feature_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_new_action_items_importer';
  $feeds_importer->config = array(
    'name' => '4. Devtrac to Devtrac Action Items Importer',
    'description' => 'Imports Action Items into a devtrac Instance',
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
            'source' => 'Admin Unit',
            'target' => 'taxonomy_vocabulary_6',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Sector',
            'target' => 'taxonomy_vocabulary_8',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Status',
            'target' => 'field_actionitem_status',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Due Date',
            'target' => 'field_actionitem_due_date:start',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Follow-up Task',
            'target' => 'field_actionitem_followuptask',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Report',
            'target' => 'field_actionitem_ftreportitem:label',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Responsible',
            'target' => 'field_actionitem_responsible:label',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Location UUID',
            'target' => 'field_actionitem_resp_place:label',
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
  $export['devtrac_new_action_items_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_new_fieldtrip_importer';
  $feeds_importer->config = array(
    'name' => '2. Devtrac to Devtrac FieldTrip Importer',
    'description' => 'Imports field trips into a devtrac instance',
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
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Internal IDentity',
            'target' => 'field_fieldtrip_internal_id',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Tags',
            'target' => 'field_fieldtriptags',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          4 => array(
            'source' => 'Start Date',
            'target' => 'field_fieldtrip_start_end_date:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'End Date',
            'target' => 'field_fieldtrip_start_end_date:end',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'User',
            'target' => 'field_fieldtrip_user:label',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Admin Units',
            'target' => 'taxonomy_vocabulary_6',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Public Summary',
            'target' => 'field_fieldtrip_public_summary',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Approval Date',
            'target' => 'field_fieldtrip_approval_date:start',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Approved By',
            'target' => 'field_fieldtrip_approved_by:label',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Status',
            'target' => 'field_fieldtrip_status',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'fieldtrip',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_new_fieldtrip_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_new_locations_importer';
  $feeds_importer->config = array(
    'name' => '1. Devtrac to Devtrac Locations Importer',
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
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Admin Unit',
            'target' => 'taxonomy_vocabulary_6',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          2 => array(
            'source' => 'Lat',
            'target' => 'field_place_lat_long:lat',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Lon',
            'target' => 'field_place_lat_long:lon',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Title',
            'target' => 'title',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Location Types',
            'target' => 'taxonomy_vocabulary_1',
            'term_search' => '0',
            'autocreate' => 1,
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
  $export['devtrac_new_locations_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_new_site_reports_importer';
  $feeds_importer->config = array(
    'name' => '3. Devtrac to Devtrac Site Reports Importer',
    'description' => 'imports site reports into a new devtrac instance',
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
            'source' => 'Sector',
            'target' => 'taxonomy_vocabulary_8',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          3 => array(
            'source' => 'Status',
            'target' => 'field_ftritem_status',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Public Summary',
            'target' => 'field_ftritem_public_summary',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Full Report',
            'target' => 'field_ftritem_narrative',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Location Type',
            'target' => 'taxonomy_vocabulary_1',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'Site Report Type',
            'target' => 'taxonomy_vocabulary_7',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'Field Trip',
            'target' => 'entityreference:field_ftritem_field_trip',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Site Visit Lat',
            'target' => 'field_ftritem_lat_long:lat',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Site Visit Lon',
            'target' => 'field_ftritem_lat_long:lon',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Visited on',
            'target' => 'field_ftritem_date_visited:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'ftritem',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['devtrac_new_site_reports_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'devtrac_new_users_importer';
  $feeds_importer->config = array(
    'name' => 'Devtrac to Devtrac Users Importer',
    'description' => 'imports users into a devtrac instance',
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
        'roles' => array(
          5 => '5',
          3 => 0,
          4 => 0,
          6 => 0,
          7 => 0,
        ),
        'status' => '1',
        'defuse_mail' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'UUID',
            'target' => 'guid',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Username',
            'target' => 'name',
            'unique' => 0,
          ),
          2 => array(
            'source' => 'First Name',
            'target' => 'field_user_firstname',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Surname',
            'target' => 'field_user_surname',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Email',
            'target' => 'mail',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Function',
            'target' => 'taxonomy_vocabulary_5',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          6 => array(
            'source' => 'Manager',
            'target' => 'field_user_superior:label',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Department',
            'target' => 'taxonomy_vocabulary_4',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          8 => array(
            'source' => 'About Me',
            'target' => 'field_user_aboutme',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Password',
            'target' => 'pass',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
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
  $export['devtrac_new_users_importer'] = $feeds_importer;

  return $export;
}
