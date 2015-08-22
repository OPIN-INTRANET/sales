<?php
/**
 * @file
 * context_questions_answers.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function context_questions_answers_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'question_answers';
  $context->description = '';
  $context->tag = 'Views';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'questions' => 'questions',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-questions_answers-page' => array(
          'module' => 'views',
          'delta' => '-exp-questions_answers-page',
          'region' => 'featured',
          'weight' => '-10',
        ),
        'facetapi-EduFOI3AqmeiT1Map3l7g1RLqHSXt7D0' => array(
          'module' => 'facetapi',
          'delta' => 'EduFOI3AqmeiT1Map3l7g1RLqHSXt7D0',
          'region' => 'featured',
          'weight' => '-9',
        ),
        'facetapi-jH4LnlQsXIn7Ie7o2IUSuW0KZXXBfcr1' => array(
          'module' => 'facetapi',
          'delta' => 'jH4LnlQsXIn7Ie7o2IUSuW0KZXXBfcr1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-1fE4lFxbKZTZ7K0ncDh3Sz1R5eWKJhdv' => array(
          'module' => 'facetapi',
          'delta' => '1fE4lFxbKZTZ7K0ncDh3Sz1R5eWKJhdv',
          'region' => 'sidebar_first',
          'weight' => '-9',
        ),
        'facetapi-Sit6yinEgpvR9Pi5n0Ax8k7g1BpUga4d' => array(
          'module' => 'facetapi',
          'delta' => 'Sit6yinEgpvR9Pi5n0Ax8k7g1BpUga4d',
          'region' => 'sidebar_first',
          'weight' => '-8',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Views');
  $export['question_answers'] = $context;

  return $export;
}
