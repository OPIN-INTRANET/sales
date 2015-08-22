<?php
/**
 * @file
 * view_question_answer.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function view_question_answer_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'questions_answers';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_questions_answers';
  $view->human_name = 'Questions & Answers';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Questions & Answers';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Indexed Node: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'search_api_index_questions_answers';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_entity'] = 0;
  /* Field: Indexed Node: Answers */
  $handler->display->display_options['fields']['field_question_answers']['id'] = 'field_question_answers';
  $handler->display->display_options['fields']['field_question_answers']['table'] = 'search_api_index_questions_answers';
  $handler->display->display_options['fields']['field_question_answers']['field'] = 'field_question_answers';
  $handler->display->display_options['fields']['field_question_answers']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_question_answers']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_question_answers']['bypass_access'] = 0;
  /* Field: Indexed Node: Section */
  $handler->display->display_options['fields']['field_question_section']['id'] = 'field_question_section';
  $handler->display->display_options['fields']['field_question_section']['table'] = 'search_api_index_questions_answers';
  $handler->display->display_options['fields']['field_question_section']['field'] = 'field_question_section';
  $handler->display->display_options['fields']['field_question_section']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_question_section']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_question_section']['bypass_access'] = 0;
  /* Field: Indexed Node: Tags */
  $handler->display->display_options['fields']['field_question_tags']['id'] = 'field_question_tags';
  $handler->display->display_options['fields']['field_question_tags']['table'] = 'search_api_index_questions_answers';
  $handler->display->display_options['fields']['field_question_tags']['field'] = 'field_question_tags';
  $handler->display->display_options['fields']['field_question_tags']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_question_tags']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_question_tags']['bypass_access'] = 0;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_questions_answers';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'question' => 'question',
  );
  /* Filter criterion: Search: Fulltext search */
  $handler->display->display_options['filters']['search_api_views_fulltext']['id'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['table'] = 'search_api_index_questions_answers';
  $handler->display->display_options['filters']['search_api_views_fulltext']['field'] = 'search_api_views_fulltext';
  $handler->display->display_options['filters']['search_api_views_fulltext']['operator'] = 'OR';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'questions';
  $export['questions_answers'] = $view;

  return $export;
}
