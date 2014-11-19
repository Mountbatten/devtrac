<?php
/**
 * @file
 * devtrac_all_data_importers_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function devtrac_all_data_importers_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'clear devtrac_new_action_items_importer feeds'.
  $permissions['clear devtrac_new_action_items_importer feeds'] = array(
    'name' => 'clear devtrac_new_action_items_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_new_fieldtrip_importer feeds'.
  $permissions['clear devtrac_new_fieldtrip_importer feeds'] = array(
    'name' => 'clear devtrac_new_fieldtrip_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_new_locations_importer feeds'.
  $permissions['clear devtrac_new_locations_importer feeds'] = array(
    'name' => 'clear devtrac_new_locations_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_new_site_reports_importer feeds'.
  $permissions['clear devtrac_new_site_reports_importer feeds'] = array(
    'name' => 'clear devtrac_new_site_reports_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear devtrac_new_users_importer feeds'.
  $permissions['clear devtrac_new_users_importer feeds'] = array(
    'name' => 'clear devtrac_new_users_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_new_action_items_importer feeds'.
  $permissions['import devtrac_new_action_items_importer feeds'] = array(
    'name' => 'import devtrac_new_action_items_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_new_fieldtrip_importer feeds'.
  $permissions['import devtrac_new_fieldtrip_importer feeds'] = array(
    'name' => 'import devtrac_new_fieldtrip_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_new_locations_importer feeds'.
  $permissions['import devtrac_new_locations_importer feeds'] = array(
    'name' => 'import devtrac_new_locations_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_new_site_reports_importer feeds'.
  $permissions['import devtrac_new_site_reports_importer feeds'] = array(
    'name' => 'import devtrac_new_site_reports_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import devtrac_new_users_importer feeds'.
  $permissions['import devtrac_new_users_importer feeds'] = array(
    'name' => 'import devtrac_new_users_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_new_action_items_importer feeds'.
  $permissions['unlock devtrac_new_action_items_importer feeds'] = array(
    'name' => 'unlock devtrac_new_action_items_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_new_fieldtrip_importer feeds'.
  $permissions['unlock devtrac_new_fieldtrip_importer feeds'] = array(
    'name' => 'unlock devtrac_new_fieldtrip_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_new_locations_importer feeds'.
  $permissions['unlock devtrac_new_locations_importer feeds'] = array(
    'name' => 'unlock devtrac_new_locations_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_new_site_reports_importer feeds'.
  $permissions['unlock devtrac_new_site_reports_importer feeds'] = array(
    'name' => 'unlock devtrac_new_site_reports_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock devtrac_new_users_importer feeds'.
  $permissions['unlock devtrac_new_users_importer feeds'] = array(
    'name' => 'unlock devtrac_new_users_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'editor' => 'editor',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
