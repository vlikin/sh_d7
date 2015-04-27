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
  $handler->name = 'node_view__article';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Article',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'article',
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e12c9b6b-d54d-456f-a80d-c47921e9d848';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-47c57255-a79b-4f3e-a958-45d0086a7936';
    $pane->panel = 'content';
    $pane->type = 'node_content';
    $pane->subtype = 'node_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'links' => 1,
      'no_extras' => 1,
      'override_title' => 1,
      'override_title_text' => '',
      'identifier' => '',
      'link' => 1,
      'leave_node_title' => 1,
      'build_mode' => 'teaser',
      'context' => 'argument_entity_id:node_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '47c57255-a79b-4f3e-a958-45d0086a7936';
    $display->content['new-47c57255-a79b-4f3e-a958-45d0086a7936'] = $pane;
    $display->panels['content'][0] = 'new-47c57255-a79b-4f3e-a958-45d0086a7936';
    $pane = new stdClass();
    $pane->pid = 'new-33ab83ab-e251-4cbd-ac8b-5a46d4520e84';
    $pane->panel = 'content';
    $pane->type = 'nnn';
    $pane->subtype = 'nnn';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => array(
        'return' => 'Finish',
        'cancel' => 'Cancel',
      ),
      'override_title' => 1,
      'override_title_text' => 'Last notes',
      'override_title_heading' => 'h2',
      'form_build_id' => 'form-E2pw8Hk7bTofN3B2YcHvJFNeARn85wAk6BO9-N8JTRU',
      'form_token' => '8fB8fdtH9rR38uPFUp3dynk-j5iY_r6PdY0fZxJjdLk',
      'form_id' => 'cm_cct_nnn_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '33ab83ab-e251-4cbd-ac8b-5a46d4520e84';
    $display->content['new-33ab83ab-e251-4cbd-ac8b-5a46d4520e84'] = $pane;
    $display->panels['content'][1] = 'new-33ab83ab-e251-4cbd-ac8b-5a46d4520e84';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article'] = $handler;

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
    'css_id' => 'page',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'common',
  );
  $display = new panels_display();
  $display->layout = 'frame';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
      'header' => NULL,
      'content' => NULL,
      'footer_block_1' => NULL,
      'footer_block_2' => NULL,
      'footer_block_3' => NULL,
      'footer_block_4' => NULL,
      'copyright' => NULL,
    ),
    'header' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '024e4e57-aaf0-4032-8ba8-7c172299f9c5';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4b058c19-94a0-4e89-a28d-1361693ed455';
    $pane->panel = 'content';
    $pane->type = 'page_messages';
    $pane->subtype = 'page_messages';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4b058c19-94a0-4e89-a28d-1361693ed455';
    $display->content['new-4b058c19-94a0-4e89-a28d-1361693ed455'] = $pane;
    $display->panels['content'][0] = 'new-4b058c19-94a0-4e89-a28d-1361693ed455';
    $pane = new stdClass();
    $pane->pid = 'new-0ba1f9bc-698a-4fe1-888b-4f978a986a3d';
    $pane->panel = 'content';
    $pane->type = 'page_tabs';
    $pane->subtype = 'page_tabs';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'type' => 'both',
      'id' => 'tabs',
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
    $pane->uuid = '0ba1f9bc-698a-4fe1-888b-4f978a986a3d';
    $display->content['new-0ba1f9bc-698a-4fe1-888b-4f978a986a3d'] = $pane;
    $display->panels['content'][1] = 'new-0ba1f9bc-698a-4fe1-888b-4f978a986a3d';
    $pane = new stdClass();
    $pane->pid = 'new-16214b96-0ceb-4c1d-bd89-95d004e174c9';
    $pane->panel = 'content';
    $pane->type = 'page_content';
    $pane->subtype = 'page_content';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_page_content_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '16214b96-0ceb-4c1d-bd89-95d004e174c9';
    $display->content['new-16214b96-0ceb-4c1d-bd89-95d004e174c9'] = $pane;
    $display->panels['content'][2] = 'new-16214b96-0ceb-4c1d-bd89-95d004e174c9';
    $pane = new stdClass();
    $pane->pid = 'new-110104fe-1fb5-4fc2-8aae-88f0189035ea';
    $pane->panel = 'copyright';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p style="text-align: center;">2013-2015</p>',
      'format' => 'full_html',
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
    $pane->uuid = '110104fe-1fb5-4fc2-8aae-88f0189035ea';
    $display->content['new-110104fe-1fb5-4fc2-8aae-88f0189035ea'] = $pane;
    $display->panels['copyright'][0] = 'new-110104fe-1fb5-4fc2-8aae-88f0189035ea';
    $pane = new stdClass();
    $pane->pid = 'new-e048f540-a0de-4e0b-baf0-7952e042fd48';
    $pane->panel = 'footer_block_1';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => '',
      'title' => '',
      'body' => '<p><img src="/sites/default/files/images/technologies/d8.png" height="183" width="240"></p>',
      'format' => 'full_html',
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
    $pane->uuid = 'e048f540-a0de-4e0b-baf0-7952e042fd48';
    $display->content['new-e048f540-a0de-4e0b-baf0-7952e042fd48'] = $pane;
    $display->panels['footer_block_1'][0] = 'new-e048f540-a0de-4e0b-baf0-7952e042fd48';
    $pane = new stdClass();
    $pane->pid = 'new-9ec5ba8c-f611-4936-b5a5-7ff7b83aec1b';
    $pane->panel = 'footer_block_2';
    $pane->type = 'text';
    $pane->subtype = 'text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => array(
        'return' => 'Finish',
        'cancel' => 'Cancel',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'vertical_tabs' => array(
        'vertical_tabs__active_tab' => 'edit-uk',
      ),
      'en' => array(
        'text' => array(
          'value' => '<p>Drupal 8 Road. We try Drupal 8. We help the society. Help us. Support our sandboxes:</p><ul style="list-style-type: disc;"><li><a href="https://drupal.org/sandbox/likin/2151701" target="_blank" title="Styleguide">Styleguide</a>,</li><li><a href="https://drupal.org/sandbox/likin/2161645" target="_blank" title="bxSlider">bxSlider</a>.<a href="https://drupal.org/sandbox/likin/2151701" target="_blank" title="Styleguide" class="links"></a></li></ul>',
          'format' => 'full_html',
        ),
      ),
      'ru' => array(
        'text' => array(
          'value' => '<p>Путь Drupal 8. Мы пытаемся использовать Drupal 8. Мы помогаем сообществу. Помогите продвинуть нас. Поддержите наши проекты:</p><ul style="list-style-type: disc;"><li><a href="https://drupal.org/sandbox/likin/2151701" target="_blank" title="Styleguide">Styleguide</a>,</li><li><a href="https://drupal.org/sandbox/likin/2161645" target="_blank" title="bxSlider">bxSlider</a>.</li></ul>',
          'format' => 'full_html',
        ),
      ),
      'uk' => array(
        'text' => array(
          'value' => '<p>Шлях Drupal 8. Ми намагаємося використовувати Drupal 8. Ми допомагаємо спільноті. Допоможіть нам просунутися далі. Підтримайте наші проекти:</p><ul style="list-style-type: disc;"><li><a href="https://drupal.org/sandbox/likin/2151701" target="_blank" title="Styleguide">Styleguide</a>,</li><li><a href="https://drupal.org/sandbox/likin/2161645" target="_blank" title="bxSlider">bxSlider</a>.</li></ul>',
          'format' => 'full_html',
        ),
      ),
      'form_build_id' => 'form-IYRwImynDErvbD7mUufLIM8WjaBGTfI3LLk9yieQNcQ',
      'form_token' => 'jO-NWdZruVQodS_9O3Ehk4gOW8LYku03QY5nb6z05Go',
      'form_id' => 'cm_cct_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9ec5ba8c-f611-4936-b5a5-7ff7b83aec1b';
    $display->content['new-9ec5ba8c-f611-4936-b5a5-7ff7b83aec1b'] = $pane;
    $display->panels['footer_block_2'][0] = 'new-9ec5ba8c-f611-4936-b5a5-7ff7b83aec1b';
    $pane = new stdClass();
    $pane->pid = 'new-5bc69160-b3d8-4d79-9cd7-5856442d8895';
    $pane->panel = 'header';
    $pane->type = 'block';
    $pane->subtype = 'locale-language';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5bc69160-b3d8-4d79-9cd7-5856442d8895';
    $display->content['new-5bc69160-b3d8-4d79-9cd7-5856442d8895'] = $pane;
    $display->panels['header'][0] = 'new-5bc69160-b3d8-4d79-9cd7-5856442d8895';
    $pane = new stdClass();
    $pane->pid = 'new-70f2264d-ded3-4727-8b86-084b8a01d3a4';
    $pane->panel = 'header';
    $pane->type = 'menu';
    $pane->subtype = 'menu';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => array(
        'return' => 'Finish',
        'cancel' => 'Cancel',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'item_limit' => '4',
      'items' => array(
        0 => array(
          'enabled' => 1,
          'path' => 'we_are',
          'title' => array(
            'en' => 'We are',
            'ru' => 'О нас',
            'uk' => 'Про нас',
          ),
          'weight' => '-10',
        ),
        1 => array(
          'enabled' => 1,
          'path' => 'contacts',
          'title' => array(
            'en' => 'Contacts',
            'ru' => 'Контакты',
            'uk' => 'Контакти',
          ),
          'weight' => '-10',
        ),
        2 => array(
          'enabled' => 1,
          'path' => '<front>',
          'title' => array(
            'en' => 'Notes',
            'ru' => 'Записки',
            'uk' => 'Нотатки',
          ),
          'weight' => '-10',
        ),
        3 => array(
          'enabled' => 1,
          'path' => 'car_budget',
          'title' => array(
            'en' => 'Car budget',
            'ru' => 'Автомобильный бюджет',
            'uk' => 'Автомобільний бюджет',
          ),
          'weight' => '-10',
        ),
        'items__active_tab' => 'edit-items-3',
      ),
      'form_build_id' => 'form-kEo5kMSSMo3gYqbH6CLsZAKYJRd3ND_rGAg2vzn6wIs',
      'form_token' => 'rbYS-ahVwcwGsvgIfz7R7Rj9YAu5IFJCfPGL8D7dXnA',
      'form_id' => 'cm_cct_menu_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '70f2264d-ded3-4727-8b86-084b8a01d3a4';
    $display->content['new-70f2264d-ded3-4727-8b86-084b8a01d3a4'] = $pane;
    $display->panels['header'][1] = 'new-70f2264d-ded3-4727-8b86-084b8a01d3a4';
    $pane = new stdClass();
    $pane->pid = 'new-6b1839ae-2ce1-4dc7-a849-64f984723f96';
    $pane->panel = 'header';
    $pane->type = 'logo';
    $pane->subtype = 'logo';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'return' => 'Finish',
      'cancel' => 'Cancel',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'vertical_tabs__active_tab' => 'edit-site-slogan',
      'image' => array(
        'path' => '/sites/default/files/images/logo.png',
        'style' => 'thumbnail',
      ),
      'image[path]' => '',
      'browse' => 'Browse',
      'site_name' => array(
        'en' => 'Shelepen',
        'ru' => 'Шелепень',
        'uk' => 'Шелепень',
      ),
      'site_slogan' => array(
        'en' => 'A Rough Road Leads to the Stars',
        'ru' => 'Путь к звёздам лежит через тернии',
        'uk' => 'Тернистий шлях веде до зірок',
      ),
      'form_build_id' => 'form-j8N6Jc639gLiAE783qX2L98LmqeGqVLqigDsKp2UCho',
      'form_token' => 'Bev4AukodxUdXRA36Sd8roAewUGuqXkYjz-jYATDWyc',
      'form_id' => 'cm_cct_logo_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '6b1839ae-2ce1-4dc7-a849-64f984723f96';
    $display->content['new-6b1839ae-2ce1-4dc7-a849-64f984723f96'] = $pane;
    $display->panels['header'][2] = 'new-6b1839ae-2ce1-4dc7-a849-64f984723f96';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
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
  $page->admin_title = 'About';
  $page->admin_description = '';
  $page->path = 'we_are';
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
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
    'center' => array(
      'style' => 'naked',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '516045fd-3717-4656-97ff-e9fbecb30d2e';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-9da22f39-30a9-4486-a9db-5b5a87df5f64';
    $pane->panel = 'content';
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
        'path' => '/sites/default/files/images/we_are.jpg',
        'style' => '3x4-2',
        'side' => 'left',
      ),
      'image[path]' => '/sites/default/files/images/we_are.jpg',
      'browse' => 'Browse',
      'block_title' => array(
        'en' => 'About us',
        'ru' => 'О нас',
        'uk' => 'Про нас',
      ),
      'block_text' => array(
        'en' => array(
          'value' => 'Hello! “Shelepen” is a small ukrainian company, located in Chernigiv, Ukraine. We are founders  (Viktor, Elena) of the company. We are also employeers of the company. We are persons of different branches of life and can consult you how to create and support your business in wide world of Internet.  Yes, we create web sites by ourselves, from one side. From another side we investigate your business togather and create tools for your business, support it and modify it under changable conditions. So we earn money by making your business efficient. We almost always use open source tecknolodgies. It helps us to work legally. It reduces money usage. Regards, Viktor and Elena',
          'format' => 'filtered_html',
        ),
        'ru' => array(
          'value' => 'Здравствуйте! "Шелепень" - это небольшая украинская компания, расположенная в Чернигове, Украине. Мы учредители (Виктор, Елена) этой компании. Мы также сотрудники компании. Мы личности с различных отраслей жизни и можем проконсультировать вас как создать и поддерживать свой ​​бизнес в широком мире Интернета. Да, мы создаем веб-сайты сами, с одной стороны. С другой стороны, мы исследуем ваш ​​бизнес вместе и создаем инструменты для вашего бизнеса, поддерживаем и изменяем их в соответствии с изменением условий. Таким образом мы зарабатываем деньги, делая ваш бизнес эффективным. Мы почти всегда используем открытые технологии. Это помогает нам работать легально. Это уменьшает денежные затраты нашей работы, делая наши услуги дешевле. С уважением, Виктор и Елена',
          'format' => 'filtered_html',
        ),
        'uk' => array(
          'value' => 'Вітаємо! "Шелепень" - це невелика українська компанія, що знаходиться в Чернігові, Україні. Ми засновники (Віктор, Олена) цієї компанії. Ми також співробітники компанії. Ми особистості з різних галузей життя й можемо проконсультувати вас як створити та підтримувати свій бізнес в широкому світі Інтернету. Так, ми створюємо веб-сайти самі, з одного боку. З іншого боку, ми досліджуємо ваш ​​бізнес разом і створюємо інструменти для вашого бізнесу, підтримуємо та змінюємо їх у відповідності до змінних умов. Таким чином ми заробляємо гроші, роблячи ваш бізнес ефективним. Ми майже завжди використовуємо відкриті технології. Це домогає нам працювати легально. Це зменшує грошові витрати нашої праці, що робить наші послуги більш дешевими. З повагою, Віктор і Олена',
          'format' => 'filtered_html',
        ),
      ),
      'form_build_id' => 'form-6vBcc_cHozfm14pIwx3DueJMR7bTdySBXkaoHBjQSo4',
      'form_token' => 'iODV9cGlTyJRpAwXMinaJVjzdHzYi1E4mcFUQ8qYjQk',
      'form_id' => 'cm_cct_image_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9da22f39-30a9-4486-a9db-5b5a87df5f64';
    $display->content['new-9da22f39-30a9-4486-a9db-5b5a87df5f64'] = $pane;
    $display->panels['content'][0] = 'new-9da22f39-30a9-4486-a9db-5b5a87df5f64';
    $pane = new stdClass();
    $pane->pid = 'new-a3f7e7ad-6f43-45f4-89b6-6044b4bc145f';
    $pane->panel = 'content';
    $pane->type = 'image';
    $pane->subtype = 'image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => array(
        'return' => 'Finish',
        'cancel' => 'Cancel',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'image_style' => '3x4-4',
      'item_limit' => '10',
      'list' => array(
        0 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/php.png',
          'weight' => '-10',
        ),
        1 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/nginx.jpg',
          'weight' => '-10',
        ),
        2 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/mysql.png',
          'weight' => '-10',
        ),
        3 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/ubuntu.png',
          'weight' => '-10',
        ),
        4 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/linux.jpg',
          'weight' => '-10',
        ),
        5 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/inkscape.png',
          'weight' => '-10',
        ),
        6 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/html_css.png',
          'weight' => '-10',
        ),
        7 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/apache.png',
          'weight' => '-10',
        ),
        8 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/d8.png',
          'weight' => '-10',
        ),
        9 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/gimp.png',
          'weight' => '-10',
        ),
        'list__active_tab' => 'edit-list-0',
      ),
      'list[0][image]' => '/sites/default/files/images/technologies/php.png',
      'browse' => 'Browse',
      'list[1][image]' => '/sites/default/files/images/technologies/nginx.jpg',
      'list[2][image]' => '/sites/default/files/images/technologies/mysql.png',
      'list[3][image]' => '/sites/default/files/images/technologies/ubuntu.png',
      'list[4][image]' => '/sites/default/files/images/technologies/linux.jpg',
      'list[5][image]' => '/sites/default/files/images/technologies/inkscape.png',
      'list[6][image]' => '/sites/default/files/images/technologies/html_css.png',
      'list[7][image]' => '/sites/default/files/images/technologies/apache.png',
      'list[8][image]' => '/sites/default/files/images/technologies/d8.png',
      'list[9][image]' => '/sites/default/files/images/technologies/gimp.png',
      'settings' => array(
        'slideWidth' => '240',
        'minSlides' => '2',
        'maxSlides' => '4',
        'slideMargin' => '0',
        'pager' => 0,
        'js_settings' => '',
      ),
      'form_build_id' => 'form-XLqpFkhvRqDQm1ZDCYPXuADhatj7aP_BcPIDaDrUd4c',
      'form_token' => 'WF3j8TYw1mD5lrc4JOxvNP0aNwRKrNRcfCta0OME-Ao',
      'form_id' => 'bxslider_cct_image_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a3f7e7ad-6f43-45f4-89b6-6044b4bc145f';
    $display->content['new-a3f7e7ad-6f43-45f4-89b6-6044b4bc145f'] = $pane;
    $display->panels['content'][1] = 'new-a3f7e7ad-6f43-45f4-89b6-6044b4bc145f';
    $pane = new stdClass();
    $pane->pid = 'new-d1afcda0-7d84-4c8f-858f-dcabcffaac29';
    $pane->panel = 'content';
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
        'path' => '/sites/default/files/images/chernigiv.jpg',
        'style' => '3x4-2',
        'side' => 'right',
      ),
      'image[path]' => '/sites/default/files/images/chernigiv.jpg',
      'browse' => 'Browse',
      'block_title' => array(
        'en' => 'Chernigiv',
        'ru' => 'Чернигов',
        'uk' => 'Чернігів',
      ),
      'block_text' => array(
        'en' => array(
          'value' => 'Chernigiv is the capital of the northern region of Ukraine, is situated on the right (western) bank of the Desna River 89 miles (144 km) north of the Ukrainian capital Kyiv along the international highway Odessa – St.Petersburg.

Present-day Chernigiv is an important industrial center of Ukraine. Main industries of Chernigiv are chemical and food. There are 34 industrial plants in the city (2006), a worsted-cloth mill, bread making plant, meat and poultry plants.

Among the ancient churches of Chernigiv there are the following: Assumption church of Yeletsky monastery (12th century), Trinity church of Trinity-Ilyinsky monastery (17th century) and Savior-Transfiguration church built in 11th century as well as Boris and Gleb church (12th century).',
          'format' => 'filtered_html',
        ),
        'ru' => array(
          'value' => 'Чернигов — это столица северного региона Украины. Он находится на правом (западном) берегу речки Десна, севернее столицы Украины Киева— на расстоянии 89 миль (144 км) по международной трассе Одесса — Санкт-Петербург.

Современный Чернигов — важный промышленный центр Украины. Наиболее важные ветви — химическая и пищевая промышленности. В городе 34 промышленные предприятия (состоянием на 2006 год), камвольно-суконный комбинат, хлебобулочный завод, мясокомбинат и птицефабрика.

Среди древнейших церквей наиболее известные - это Успенская церковь Елицкого монастыря 12-го века, Троицкая церковь Троицко-Іллинского монастыря 17-го века и Спасо-Преображенский собор, построенный в 11 веке, а также Борисоглебский собор 12-го века.',
          'format' => 'filtered_html',
        ),
        'uk' => array(
          'value' => 'Чернігів — це столиця північного регіону України. Він розташований на правому (західному) березі річки Десна, північніше від столиці України Києва— на відстані 89 миль (144 км) по міжнародній трасі Одеса — Санкт-Петербург.

Чернігів — це старовинне слов\'янське місто. Наприкінці 9 століття Чернігів приєднано до держави Київська Русь.

Сучасний Чернігів — важливий промисловий центр України. Найважливіші галузі — хімічна та харчова промисловості. У місті 34 промислових підприємств (станом на 2006 р.,), камвольно-суконна фабрика, хлібобулочний завод, м\'ясокомбінат і птахофабрика.

Серед стародавніх церков найвизначнішими є Успенська церква Єлицького монастиря 12-го століття, Троїцька церква Троїцько-Іллінського монастиря 17-го століття і Спасо-Преображенський собор, побудований у 11 столітті, а також Борисоглібський собор 12-го століття.',
          'format' => 'filtered_html',
        ),
      ),
      'form_build_id' => 'form-JP4QTXsUBSEZbHdPtqzCbWRVKLuCAiDqYawhF5kIrO0',
      'form_token' => 'f5aimW02RIkTlpKsYbwo4YaAtbvC5E1i78eAew9ayjQ',
      'form_id' => 'cm_cct_image_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd1afcda0-7d84-4c8f-858f-dcabcffaac29';
    $display->content['new-d1afcda0-7d84-4c8f-858f-dcabcffaac29'] = $pane;
    $display->panels['content'][2] = 'new-d1afcda0-7d84-4c8f-858f-dcabcffaac29';
    $pane = new stdClass();
    $pane->pid = 'new-1915463f-00f2-44fe-8884-c8e38c86ebc6';
    $pane->panel = 'content';
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
      'vertical_tabs__active_tab' => 'edit-block-title',
      'image' => array(
        'path' => '/sites/default/files/images/ukraine.jpg',
        'style' => '3x4-2',
        'side' => 'left',
      ),
      'image[path]' => '/sites/default/files/images/ukraine.jpg',
      'browse' => 'Browse',
      'block_title' => array(
        'en' => 'Ukraine',
        'ru' => 'Украина',
        'uk' => 'Україна',
      ),
      'block_text' => array(
        'en' => array(
          'value' => 'Ukraine is situated in the east of Europe. Ukraine borders on Russia, Belarus, Poland, Moldova, Slovakia, Hungary, and Romania. It’s washed by the Black Sea and the Sea of Azov and has very important ports. Ukraine has the Carpathians and the Crimean Mountains. The Dnieper is the main river of the country; moreover, it’s the third longest river in Europe.

Ukraine is developed industrial and agricultural country. Scientists of Ukraine make their contributions of important discoveries and inventions to the world science.

Ukraine has a rich historical and cultural heritage. There are many higher educational establishments, theatres, libraries, museums, art galleries in Ukraine. It’s also famous for many outstanding writers, poets and musicians.

Ukraine is a member of the United Nation Organization and takes part in the work of many international organizations.',
          'format' => 'filtered_html',
        ),
        'ru' => array(
          'value' => 'Украина находится на востоке Европы. Украина граничит с Россией, Белоруссией, Польшей, Молдовой, Словакией, Венгрией, Румынией. Она омывается Черным и Азовским морями и имеет очень важные порты. В Украине есть Карпатские и Крымские горы. Днепр — главная река страны.

Украина развитая промышленная и сельскохозяйственная страна. Украинские ученые своими открытиями и изобретениями вносят вклад в мировую науку.

Украина имеет богатое историческое и культурное наследие. В стране много высших учебных заведений, театров, библиотек, музеев, художественных галерей. В Украине много известных писателей, поэтов и музыкантов.

Украина — член ООН; она принимает участие в работе многих международных организаций.

 ',
          'format' => 'filtered_html',
        ),
        'uk' => array(
          'value' => 'Україна знаходиться на сході Європи. Україна межує з Росією, Білорусією, Польщею, Молдовою, Словаччиною, Угорщиною, Румунією. Вона омивається Чорним і Азовським морями і має дуже важливі порти. В Україні є Карпатські і Кримські гори. Дніпро — головна річка країни.

Україна розвинена промислова і сільськогосподарська країна. Українські вчені своїми відкриттями і винаходами вносять вклад до світової науки.

В України багата історична і культурна спадщина. У країні багато вищих навчальних закладів, театрів, бібліотек, музеїв, художніх галерей. В Україні є багато відомих письменників, поетів і музикантів.

Україна — член ООН; вона бере участь в роботі багатьох міжнародних організацій.',
          'format' => 'filtered_html',
        ),
      ),
      'form_build_id' => 'form-lVg355TpbhDIEfLC6iQ6hLX3CrXwC4Gw_ZSb942-pnw',
      'form_token' => 'iODV9cGlTyJRpAwXMinaJVjzdHzYi1E4mcFUQ8qYjQk',
      'form_id' => 'cm_cct_image_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1915463f-00f2-44fe-8884-c8e38c86ebc6';
    $display->content['new-1915463f-00f2-44fe-8884-c8e38c86ebc6'] = $pane;
    $display->panels['content'][3] = 'new-1915463f-00f2-44fe-8884-c8e38c86ebc6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'car_budget';
  $page->task = 'page';
  $page->admin_title = 'Car budget';
  $page->admin_description = 'This is a page that describes the mobile application "Car budget"';
  $page->path = 'car_budget';
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
  $handler->name = 'page_car_budget__panel_context_f9842f32-8765-4066-a6b0-b667687d3e11';
  $handler->task = 'page';
  $handler->subtask = 'car_budget';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 1,
    'pipeline' => 'ipe',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '14a0ffe4-4414-4606-ae10-b457e71fbb69';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-04ca5c69-ff9a-44e7-a567-b7a78afffce3';
    $pane->panel = 'content';
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
        'path' => '/sites/default/files/car_budget/site_icon.png',
        'style' => '3x4-2',
        'side' => 'left',
      ),
      'image[path]' => '/sites/default/files/car_budget/site_icon.png',
      'browse' => 'Browse',
      'block_title' => array(
        'en' => 'Car budget project - Hybryd mobile application',
        'ru' => 'Автомобильный бюджет - гибридное мобильное приложение',
        'uk' => 'Автомобільний бюджет - гібридний мобільний додаток',
      ),
      'block_text' => array(
        'en' => array(
          'value' => '<p style="text-align: justify;">Hello! The idea of the creation of this application appeared under our needs. We hope it will be useful for everyone. This project gathers fuel statistics, saves it and visualizes some analyzes. Furthermore you will calculate fuel consumption. It helps you to have own car budget! This is the mobile application, that is based on IONIC and related technologies. This is the hybrid mobile application. We hope it is the long support application. We develop this to prove that our team is able to create a such project.</p><p style="text-align: justify;">Check code on <a href="https://github.com/vlikin/car_budget" target="_blank" title="car_budget_github">Github</a>. <a href="https://docs.google.com/document/d/17sNJZM8rLPqjfdqgPdXcbV9CuBEwasf7NYrtBSO8ekQ/edit?usp=sharing">Technical description of the project</a>.</p>',
          'format' => 'full_html',
        ),
        'ru' => array(
          'value' => '<p style="text-align: justify;">Здравствуйте! Идея создания этого приложения возникла, исходя из наших потребностей. Мы надеемся, что оно будет полезным и для Вас. Этот проект собирает и сохраняет топливную статистику ваших машин, а также визуализирует анализ, основываясь на статистических данных по конкретному автомобилю. Более того Вы с его помощью посчитаете расход топлива. Это поможет Вам вести бюджет собственного автомобиля! Это мобильное приложение основывается на IONIC и связанных с ним технологиях. Это гибридное мобильное приложение. Мы надеемся, что это долгосрочно поддерживаемое приложение. Мы разрабатываем его, чтобы доказать, что наша команда способна создавать такого рода проекты.</p><p style="text-align: justify;">Смотрите код на <a href="https://github.com/vlikin/car_budget" target="_blank" title="автобольный_бюджет_на_Github">Github</a>. <a href="https://docs.google.com/document/d/17sNJZM8rLPqjfdqgPdXcbV9CuBEwasf7NYrtBSO8ekQ/edit?usp=sharing">Техническое описание проекта</a>.</p>',
          'format' => 'full_html',
        ),
        'uk' => array(
          'value' => '<p style="text-align: justify;">Вітаємо! Ідея створення цього мобільного додатку виникла для врахування наших нагальних потреб. Ми сподіваємося, що воно буде корисним і для Вас. Цей проект збирає та зберігає статистику палива ваших машин, а також візуалізує аналіз, базуючись на статистичних даних конкретного автомобіля. Більше того Ви з його допомогою порахуєте витрати палива. Це допоможе Вам вести бюджет власного авто! Цей мобільний додаток базується на IONIC та пов’язаних з ним технологіях. Це гібридний мобільний додаток. Ми сподіваємося, що це додаток, який ми будемо постійно піддтримувати. Ми розроблюємо його, щоб довести, що наша команда здатна створюавати такого роду проекти.</p><p style="text-align: justify;">Дивіться код на <a href="https://github.com/vlikin/car_budget" target="_blank" title="автомобільний_бюджет_на_Github">Github</a>. <a href="https://docs.google.com/document/d/17sNJZM8rLPqjfdqgPdXcbV9CuBEwasf7NYrtBSO8ekQ/edit?usp=sharing">Технічний опис проекту</a>.</p>',
          'format' => 'full_html',
        ),
      ),
      'form_build_id' => 'form-TyIB_MqxTkRGItCVEK4t7d82wh1_agouk1iga8SzLa4',
      'form_token' => 'bXBNaaVhDlGp0k2qSKS_YhHRSrGYS_O0skLJoO6cMvg',
      'form_id' => 'cm_cct_image_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '04ca5c69-ff9a-44e7-a567-b7a78afffce3';
    $display->content['new-04ca5c69-ff9a-44e7-a567-b7a78afffce3'] = $pane;
    $display->panels['content'][0] = 'new-04ca5c69-ff9a-44e7-a567-b7a78afffce3';
    $pane = new stdClass();
    $pane->pid = 'new-38b953cf-2852-4eb7-b99d-f551ac76b287';
    $pane->panel = 'content';
    $pane->type = 'image';
    $pane->subtype = 'image';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'image_style' => '4x3-2',
      'item_limit' => '13',
      'list' => array(
        0 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/0-menu.png',
          'weight' => '-10',
        ),
        1 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/1-calculator.png',
          'weight' => '-10',
        ),
        2 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/2-statistics.png',
          'weight' => '-10',
        ),
        3 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/3-chart_price.png',
          'weight' => '-10',
        ),
        4 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/4-usage_chart.png',
          'weight' => '-10',
        ),
        5 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/5-about.png',
          'weight' => '-10',
        ),
        6 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/6-create_car.png',
          'weight' => '-10',
        ),
        7 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/7-activate_car.png',
          'weight' => '-10',
        ),
        8 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/8-popup_create.png',
          'weight' => '-10',
        ),
        9 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/9-loads.png',
          'weight' => '-10',
        ),
        10 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/10-new_load.png',
          'weight' => '-10',
        ),
        11 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/11-setings.png',
          'weight' => '-10',
        ),
        12 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/car_budget/screenshots/12-languages.png',
          'weight' => '-10',
        ),
        'list__active_tab' => 'edit-list-0',
      ),
      'settings' => array(
        'slideWidth' => '480',
        'minSlides' => '1',
        'maxSlides' => '2',
        'slideMargin' => '10',
        'pager' => 0,
        'js_settings' => '{"mode": "horizontal", "controls": "false", "auto": "true"}',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '38b953cf-2852-4eb7-b99d-f551ac76b287';
    $display->content['new-38b953cf-2852-4eb7-b99d-f551ac76b287'] = $pane;
    $display->panels['content'][1] = 'new-38b953cf-2852-4eb7-b99d-f551ac76b287';
    $pane = new stdClass();
    $pane->pid = 'new-8b0567e1-9dfa-47c7-8548-df93f80fb41e';
    $pane->panel = 'content';
    $pane->type = 'text';
    $pane->subtype = 'text';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'buttons' => array(
        'return' => 'Finish',
        'cancel' => 'Cancel',
      ),
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
      'vertical_tabs' => array(
        'vertical_tabs__active_tab' => 'edit-uk',
      ),
      'en' => array(
        'text' => array(
          'value' => '<p style="text-align: center;">&nbsp;</p><p style="text-align: center;">&nbsp;</p><p style="text-align: center;"><a href="/sites/default/files/car_budget/releases/MainActivity-debug.apk" class="button"><strong>Download Car Budget v0.0.1 Android application</strong></a></p><p style="text-align: center;">&nbsp;</p><p style="text-align: center;">&nbsp;</p>',
          'format' => 'full_html',
        ),
      ),
      'ru' => array(
        'text' => array(
          'value' => '<p style="text-align: center;">&nbsp;</p><p style="text-align: center;">&nbsp;</p><p style="text-align: center;"><a href="/sites/default/files/car_budget/releases/car_budget-0.0.1.apk" class="button"><strong>Загрузить Автомобильный Бюджет v0.0.1 под Android<br></strong></a></p><p style="text-align: center;">&nbsp;</p><p style="text-align: center;">&nbsp;</p>',
          'format' => 'full_html',
        ),
      ),
      'uk' => array(
        'text' => array(
          'value' => '<p style="text-align: center;">&nbsp;</p><p style="text-align: center;">&nbsp;</p><p style="text-align: center;"><a href="/sites/default/files/car_budget/releases/car_budget-0.0.1.apk" class="button"><strong>Завантажити додаток Автомобільний Бюджет v0.0.1 під Андроїд</strong></a></p><p style="text-align: center;">&nbsp;</p><p style="text-align: center;">&nbsp;</p><p style="text-align: center;">&nbsp;</p><p style="text-align: center;">&nbsp;</p>',
          'format' => 'full_html',
        ),
      ),
      'form_build_id' => 'form-GxAniZJqXmGF2gqyqp_zhZ0KGgM0yU9DstHQu2YV9rA',
      'form_token' => '4f5xgDbQolTOKBu4ynYeOvdDTnMbPi_3VKqPLsmcz98',
      'form_id' => 'cm_cct_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '8b0567e1-9dfa-47c7-8548-df93f80fb41e';
    $display->content['new-8b0567e1-9dfa-47c7-8548-df93f80fb41e'] = $pane;
    $display->panels['content'][2] = 'new-8b0567e1-9dfa-47c7-8548-df93f80fb41e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-04ca5c69-ff9a-44e7-a567-b7a78afffce3';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['car_budget'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'contacts';
  $page->task = 'page';
  $page->admin_title = 'Contacts';
  $page->admin_description = 'Page describes how to find the company "Shelepen".';
  $page->path = 'contacts';
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
  $handler->name = 'page_contacts__panel_context_e3591620-cbe1-4632-b9a7-148bfeb04459';
  $handler->task = 'page';
  $handler->subtask = 'contacts';
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
  $display->layout = 'single';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '648c0565-5d9e-4e44-a320-8dba4688e683';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-294adc3b-66cb-47df-9ea4-853a95d751e5';
    $pane->panel = 'content';
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
        'path' => '/sites/default/files/images/office.jpg',
        'style' => '3x4-2',
        'side' => 'left',
      ),
      'image[path]' => '/sites/default/files/images/office.jpg',
      'browse' => 'Browse',
      'block_title' => array(
        'en' => 'Our contacts',
        'ru' => 'Наши контакты',
        'uk' => 'Наші контакти',
      ),
      'block_text' => array(
        'en' => array(
          'value' => '<p style="text-align: justify;">Viktor:</p><p style="text-align: center;">&nbsp;</p><p>email: viktor.likin@gmail.com;</p><p>&nbsp;</p><p>phone: +38(063)8867177;</p><p>&nbsp;</p><p>Skype: vlikin;</p><p>&nbsp;</p><p style="text-align: justify;">Elena:</p><p style="text-align: center;">&nbsp;</p><p>email: pogodaelena@gmail.com;</p><p>&nbsp;</p><p>phone: +38(063)4191476;</p><p>&nbsp;</p><p>Skype: s10061988.</p>',
          'format' => 'full_html',
        ),
        'ru' => array(
          'value' => '<p style="text-align: justify;">Виктор:</p><p style="text-align: center;">&nbsp;</p><p>email: viktor.likin@gmail.com;</p><p>&nbsp;</p><p>телефон: +38(063)8867177;</p><p>&nbsp;</p><p>Skype: vlikin;</p><p>&nbsp;</p><p style="text-align: justify;">Елена:</p><p style="text-align: center;">&nbsp;</p><p>email: pogodaelena@gmail.com;</p><p>&nbsp;</p><p>телефон: +38(063)4191476;</p><p>&nbsp;</p><p>Skype: s10061988.</p>',
          'format' => 'full_html',
        ),
        'uk' => array(
          'value' => '<p style="text-align: justify;">Віктор:</p><p style="text-align: center;">&nbsp;</p><p>email: viktor.likin@gmail.com;</p><p>&nbsp;</p><p>телефон: +38(063)8867177;</p><p>&nbsp;</p><p>Skype: vlikin;</p><p>&nbsp;</p><p style="text-align: justify;">Олена:</p><p style="text-align: center;">&nbsp;</p><p>email: pogodaelena@gmail.com;</p><p>&nbsp;</p><p>телефон: +38(063)4191476;</p><p>&nbsp;</p><p>Skype: s10061988.</p>',
          'format' => 'full_html',
        ),
      ),
      'form_build_id' => 'form-J3akC0uEV_jQd5J63u616IEkQv80Y6OK6CNTbY4Sdvs',
      'form_token' => 'f5aimW02RIkTlpKsYbwo4YaAtbvC5E1i78eAew9ayjQ',
      'form_id' => 'cm_cct_image_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '294adc3b-66cb-47df-9ea4-853a95d751e5';
    $display->content['new-294adc3b-66cb-47df-9ea4-853a95d751e5'] = $pane;
    $display->panels['content'][0] = 'new-294adc3b-66cb-47df-9ea4-853a95d751e5';
    $pane = new stdClass();
    $pane->pid = 'new-bb194754-bf97-4492-b2a1-ffa552cc2b9b';
    $pane->panel = 'content';
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
        'path' => '/sites/default/files/images/google_map_oficce.png',
        'style' => '3x4-2',
        'side' => 'right',
      ),
      'image[path]' => '/sites/default/files/images/google_map_oficce.png',
      'browse' => 'Browse',
      'block_title' => array(
        'en' => 'How to find us?',
        'ru' => 'Как нас найти?',
        'uk' => 'Як нас знайти?',
      ),
      'block_text' => array(
        'en' => array(
          'value' => 'We work remotely, at the moment.
 
Address of the previous office:

Chernigiv Oblpotrebsoyuz

14038, Chernigiv, Victory Avenue, 139, office 702.',
          'format' => 'filtered_html',
        ),
        'ru' => array(
          'value' => 'На данный момент работаем удаленно. 

Адрес предыдущего офиса:

Черниговский облпотребсоюз

14038,     Чернигов,   проспект Победы, 139, офис 702.',
          'format' => 'filtered_html',
        ),
        'uk' => array(
          'value' => 'На даний час працюємо віддалено. 

Адреса попереднього офісу:

Чернігівська облспоживспілка

14038,Чернігів,проспект Перемоги, 139, офіс 702.',
          'format' => 'filtered_html',
        ),
      ),
      'form_build_id' => 'form-WHfQXcY_C-XsURHW7Izy9ivE4ZJYYZyxnRdGe3nc_mg',
      'form_token' => 'f5aimW02RIkTlpKsYbwo4YaAtbvC5E1i78eAew9ayjQ',
      'form_id' => 'cm_cct_image_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bb194754-bf97-4492-b2a1-ffa552cc2b9b';
    $display->content['new-bb194754-bf97-4492-b2a1-ffa552cc2b9b'] = $pane;
    $display->panels['content'][1] = 'new-bb194754-bf97-4492-b2a1-ffa552cc2b9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contacts'] = $page;

  return $pages;

}
