<?php
/**
 * @file
 * feature_pages.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function feature_pages_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'site_template__common';
  $handler->task = 'site_template';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Common',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'common',
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '024e4e57-aaf0-4032-8ba8-7c172299f9c5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b74a2082-61fe-4895-9f61-143badfdfe2e';
    $pane->panel = 'middle';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'fasdfasdf',
      'title' => 'asdfasdf',
      'body' => 'asdfasdf',
      'format' => 'filtered_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b74a2082-61fe-4895-9f61-143badfdfe2e';
    $display->content['new-b74a2082-61fe-4895-9f61-143badfdfe2e'] = $pane;
    $display->panels['middle'][0] = 'new-b74a2082-61fe-4895-9f61-143badfdfe2e';
    $pane = new stdClass();
    $pane->pid = 'new-d1ed299c-0aeb-4a47-bb1e-8277a3010215';
    $pane->panel = 'middle';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd1ed299c-0aeb-4a47-bb1e-8277a3010215';
    $display->content['new-d1ed299c-0aeb-4a47-bb1e-8277a3010215'] = $pane;
    $display->panels['middle'][1] = 'new-d1ed299c-0aeb-4a47-bb1e-8277a3010215';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-b74a2082-61fe-4895-9f61-143badfdfe2e';
  $handler->conf['display'] = $display;
  $export['site_template__common'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function feature_pages_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'about';
  $page->task = 'page';
  $page->admin_title = 'ABout';
  $page->admin_description = '';
  $page->path = 'about';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_about__panel_context_8a535a84-45a1-4c24-9f3d-5fe84344420e';
  $handler->task = 'page';
  $handler->subtask = 'about';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '516045fd-3717-4656-97ff-e9fbecb30d2e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9da22f39-30a9-4486-a9db-5b5a87df5f64';
    $pane->panel = 'center';
    $pane->type = 'image_text';
    $pane->subtype = 'image_text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'vertical_tabs__active_tab' => 'edit-block-text',
      'image' => array(
        'path' => '/sites/default/files/images/00118217.jpg 3x4-2 left 3x4-2 left  left',
        'style' => '3x4-2',
        'side' => 'right',
      ),
      'image[path]' => '/sites/default/files/images/00118217.jpg 3x4-2 left 3x4-2 left  left',
      'browse' => 'Browse',
      'block_title' => array(
        'en' => 'title en',
        'ru' => 'title tu',
      ),
      'block_text' => array(
        'en' => array(
          'value' => 'text en',
          'format' => 'filtered_html',
        ),
        'ru' => array(
          'value' => 'tet ru',
          'format' => 'filtered_html',
        ),
      ),
      'form_build_id' => 'form-YkUsFAEfzdHznvqhGVaYEJD6ZEoSOj5oV6BDKLALdhk',
      'form_token' => 'wVwJQkc7tLUXJ7wwHO1yCc55PCu8X678oHuUSFzXrxQ',
      'form_id' => 'cm_cct_image_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9da22f39-30a9-4486-a9db-5b5a87df5f64';
    $display->content['new-9da22f39-30a9-4486-a9db-5b5a87df5f64'] = $pane;
    $display->panels['center'][0] = 'new-9da22f39-30a9-4486-a9db-5b5a87df5f64';
    $pane = new stdClass();
    $pane->pid = 'new-6dc351cb-1cbe-4ead-80bd-4321376097b3';
    $pane->panel = 'center';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6dc351cb-1cbe-4ead-80bd-4321376097b3';
    $display->content['new-6dc351cb-1cbe-4ead-80bd-4321376097b3'] = $pane;
    $display->panels['center'][1] = 'new-6dc351cb-1cbe-4ead-80bd-4321376097b3';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  return $pages;

}
