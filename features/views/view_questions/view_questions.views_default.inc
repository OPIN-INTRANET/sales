<?php
/**
 * @file
 * view_questions.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_questions_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'questions';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Questions';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questions';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_question_section',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_question_answers' => 'field_question_answers',
    'view' => 'view',
    'field_question_section' => 'field_question_section',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_question_answers' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_question_section' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = 'Question';
  /* Field: Content: Answers */
  $handler->display->display_options['fields']['field_question_answers']['id'] = 'field_question_answers';
  $handler->display->display_options['fields']['field_question_answers']['table'] = 'field_data_field_question_answers';
  $handler->display->display_options['fields']['field_question_answers']['field'] = 'field_question_answers';
  $handler->display->display_options['fields']['field_question_answers']['label'] = '';
  $handler->display->display_options['fields']['field_question_answers']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_question_answers']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_question_answers']['type'] = 'entityreference_entity_id';
  $handler->display->display_options['fields']['field_question_answers']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_question_answers']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_question_answers']['separator'] = ',';
  /* Field: Global: View */
  $handler->display->display_options['fields']['view']['id'] = 'view';
  $handler->display->display_options['fields']['view']['table'] = 'views';
  $handler->display->display_options['fields']['view']['field'] = 'view';
  $handler->display->display_options['fields']['view']['label'] = 'Answers';
  $handler->display->display_options['fields']['view']['view'] = 'answers';
  $handler->display->display_options['fields']['view']['arguments'] = '[%field_question_answers]';
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_question_section']['id'] = 'field_question_section';
  $handler->display->display_options['fields']['field_question_section']['table'] = 'field_data_field_question_section';
  $handler->display->display_options['fields']['field_question_section']['field'] = 'field_question_section';
  $handler->display->display_options['fields']['field_question_section']['label'] = '';
  $handler->display->display_options['fields']['field_question_section']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_question_section']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'questions';
  $export['questions'] = $view;

  return $export;
}
