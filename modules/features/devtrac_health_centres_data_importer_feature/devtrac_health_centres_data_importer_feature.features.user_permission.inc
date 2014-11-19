<?php
/**
 * @file
 * devtrac_health_centres_data_importer_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function devtrac_health_centres_data_importer_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_data_action_centres_importer feeds'.
  $permissions['clear devtrac_data_action_centres_importer feeds'] = array(
    'name' => 'clear devtrac_data_action_centres_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_data_action_items_importer feeds'.
  $permissions['clear devtrac_data_action_items_importer feeds'] = array(
    'name' => 'clear devtrac_data_action_items_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_data_districts_importer feeds'.
  $permissions['clear devtrac_data_districts_importer feeds'] = array(
    'name' => 'clear devtrac_data_districts_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_data_location_types_health_centres_importer feeds'.
  $permissions['clear devtrac_data_location_types_health_centres_importer feeds'] = array(
    'name' => 'clear devtrac_data_location_types_health_centres_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_data_locations_importer feeds'.
  $permissions['clear devtrac_data_locations_importer feeds'] = array(
    'name' => 'clear devtrac_data_locations_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_data_action_centres_importer feeds'.
  $permissions['import devtrac_data_action_centres_importer feeds'] = array(
    'name' => 'import devtrac_data_action_centres_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_data_action_items_importer feeds'.
  $permissions['import devtrac_data_action_items_importer feeds'] = array(
    'name' => 'import devtrac_data_action_items_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_data_districts_importer feeds'.
  $permissions['import devtrac_data_districts_importer feeds'] = array(
    'name' => 'import devtrac_data_districts_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_data_location_types_health_centres_importer feeds'.
  $permissions['import devtrac_data_location_types_health_centres_importer feeds'] = array(
    'name' => 'import devtrac_data_location_types_health_centres_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_data_locations_importer feeds'.
  $permissions['import devtrac_data_locations_importer feeds'] = array(
    'name' => 'import devtrac_data_locations_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_data_action_centres_importer feeds'.
  $permissions['unlock devtrac_data_action_centres_importer feeds'] = array(
    'name' => 'unlock devtrac_data_action_centres_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_data_action_items_importer feeds'.
  $permissions['unlock devtrac_data_action_items_importer feeds'] = array(
    'name' => 'unlock devtrac_data_action_items_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_data_districts_importer feeds'.
  $permissions['unlock devtrac_data_districts_importer feeds'] = array(
    'name' => 'unlock devtrac_data_districts_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_data_location_types_health_centres_importer feeds'.
  $permissions['unlock devtrac_data_location_types_health_centres_importer feeds'] = array(
    'name' => 'unlock devtrac_data_location_types_health_centres_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_data_locations_importer feeds'.
  $permissions['unlock devtrac_data_locations_importer feeds'] = array(
    'name' => 'unlock devtrac_data_locations_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
