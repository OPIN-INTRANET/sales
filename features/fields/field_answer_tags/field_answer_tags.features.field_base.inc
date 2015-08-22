<?php
/**
 * @file
 * field_answer_tags.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function field_answer_tags_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_answer_tags'
  $field_bases['field_answer_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_answer_tags',
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tags',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
