<?php
/**
 * @file
 * luggage_roles_solr.features.inc
 */

/**
 * Implements hook_field_default_field_instances_alter().
 */
function luggage_roles_solr_field_default_field_instances_alter(&$data) {
  if (isset($data['node-page-field_category'])) {
    $data['node-page-field_category']['display']['default']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-page-field_category']['display']['default']['settings']['path'] = array(
      'search_path' => 'http://preview.ent.iastate.edu/search/content',
    ); /* WAS: '' */
    $data['node-page-field_category']['display']['default']['settings']['target'] = '_self'; /* WAS: '' */
    $data['node-page-field_category']['display']['default']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
  }
  if (isset($data['node-page-field_tags'])) {
    $data['node-page-field_tags']['display']['default']['module'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy' */
    $data['node-page-field_tags']['display']['default']['type'] = 'taxonomy_to_apachesolr_link'; /* WAS: 'taxonomy_term_reference_link' */
    unset($data['node-page-field_tags']['display']['default']['settings']);
  }
}
