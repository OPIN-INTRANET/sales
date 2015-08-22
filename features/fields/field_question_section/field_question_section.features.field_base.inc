<?php
/**
 * @file
 * field_question_section.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function field_question_section_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_question_section'
  $field_bases['field_question_section'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_question_section',
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
          'vocabulary' => 'question_section',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
