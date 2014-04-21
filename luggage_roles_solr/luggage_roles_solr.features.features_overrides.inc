<?php
/**
 * @file
 * luggage_roles_solr.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function luggage_roles_solr_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-page-field_category.display|default|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-page-field_category.display|default|settings|path"] = array(
    'search_path' => 'http://preview.ent.iastate.edu/search/content',
  );
  $overrides["field_instance.node-page-field_category.display|default|settings|target"] = '_self';
  $overrides["field_instance.node-page-field_category.display|default|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-page-field_tags.display|default|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-page-field_tags.display|default|settings"]["DELETED"] = TRUE;
  $overrides["field_instance.node-page-field_tags.display|default|type"] = 'taxonomy_to_apachesolr_link';

 return $overrides;
}
