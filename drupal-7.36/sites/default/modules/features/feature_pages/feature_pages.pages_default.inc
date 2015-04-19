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
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '16214b96-0ceb-4c1d-bd89-95d004e174c9';
    $display->content['new-16214b96-0ceb-4c1d-bd89-95d004e174c9'] = $pane;
    $display->panels['content'][1] = 'new-16214b96-0ceb-4c1d-bd89-95d004e174c9';
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
    $pane->pid = 'new-8fbd9de1-2636-4c9c-b07f-d0e79b1917f6';
    $pane->panel = 'center';
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
          'path' => 'about',
          'title' => array(
            'en' => 'About',
            'ru' => 'Pro nas',
          ),
          'weight' => '-10',
        ),
        1 => array(
          'enabled' => 0,
          'path' => '',
          'title' => array(
            'en' => '',
            'ru' => '',
          ),
          'weight' => '-10',
        ),
        2 => array(
          'enabled' => 0,
          'path' => '',
          'title' => array(
            'en' => '',
            'ru' => '',
          ),
          'weight' => '-10',
        ),
        3 => array(
          'enabled' => 0,
          'path' => '',
          'title' => array(
            'en' => '',
            'ru' => '',
          ),
          'weight' => '-10',
        ),
        'items__active_tab' => 'edit-items-0',
      ),
      'form_build_id' => 'form-RyULk_YwukP2kqNnn8isSx5SrIFjM9uomsxQkuYWiec',
      'form_token' => 'TVrG0MDnNJuWU6kO7ugWojvQsUYlgDEOocLh6Njaxes',
      'form_id' => 'cm_cct_menu_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8fbd9de1-2636-4c9c-b07f-d0e79b1917f6';
    $display->content['new-8fbd9de1-2636-4c9c-b07f-d0e79b1917f6'] = $pane;
    $display->panels['center'][0] = 'new-8fbd9de1-2636-4c9c-b07f-d0e79b1917f6';
    $pane = new stdClass();
    $pane->pid = 'new-d4387093-be86-48d1-9c8d-9cf9dd1a01ca';
    $pane->panel = 'center';
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
      'image_style' => 'large',
      'item_limit' => '5',
      'list' => array(
        0 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/00118217.jpg',
          'weight' => '4',
        ),
        1 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/00118217.jpg',
          'weight' => '6',
        ),
        2 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/00118217.jpg',
          'weight' => '3',
        ),
        3 => array(
          'enabled' => 0,
          'image' => '',
          'weight' => '-10',
        ),
        4 => array(
          'enabled' => 0,
          'image' => '',
          'weight' => '-10',
        ),
        'list__active_tab' => 'edit-list-0',
      ),
      'list[0][image]' => '/sites/default/files/images/00118217.jpg',
      'browse' => 'Browse',
      'list[1][image]' => '/sites/default/files/images/00118217.jpg',
      'list[2][image]' => '/sites/default/files/images/00118217.jpg',
      'list[3][image]' => '',
      'list[4][image]' => '',
      'settings' => array(
        'slideWidth' => '480',
        'minSlides' => '1',
        'maxSlides' => '4',
        'slideMargin' => '0',
        'pager' => 1,
        'js_settings' => '',
      ),
      'form_build_id' => 'form-0ulBZtWuRVfQElWj-lz0EdmnFray7cDYX7KTlpI6EyQ',
      'form_token' => 'cgeQuT_kX4hr81WfrucEvqopeBOZYf9cQPsSLWzi-CA',
      'form_id' => 'bxslider_cct_image_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd4387093-be86-48d1-9c8d-9cf9dd1a01ca';
    $display->content['new-d4387093-be86-48d1-9c8d-9cf9dd1a01ca'] = $pane;
    $display->panels['center'][1] = 'new-d4387093-be86-48d1-9c8d-9cf9dd1a01ca';
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
      'vertical_tabs__active_tab' => 'edit-image',
      'image' => array(
        'path' => '/sites/default/files/images/00118217.jpg',
        'style' => '3x4-2',
        'side' => 'left',
      ),
      'image[path]' => '/sites/default/files/images/00118217.jpg',
      'browse' => 'Browse',
      'block_title' => array(
        'en' => 'About us',
        'ru' => 'Про нас',
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
      ),
      'form_build_id' => 'form-hRDtLywFY4CSmunkW4TBHMewFYySCONN_54LpMW06Ag',
      'form_token' => 'wVwJQkc7tLUXJ7wwHO1yCc55PCu8X678oHuUSFzXrxQ',
      'form_id' => 'cm_cct_image_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '9da22f39-30a9-4486-a9db-5b5a87df5f64';
    $display->content['new-9da22f39-30a9-4486-a9db-5b5a87df5f64'] = $pane;
    $display->panels['center'][2] = 'new-9da22f39-30a9-4486-a9db-5b5a87df5f64';
    $pane = new stdClass();
    $pane->pid = 'new-d1afcda0-7d84-4c8f-858f-dcabcffaac29';
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
      'vertical_tabs__active_tab' => 'edit-image',
      'image' => array(
        'path' => '/sites/default/files/images/00118217.jpg',
        'style' => '3x4-2',
        'side' => 'right',
      ),
      'image[path]' => '/sites/default/files/images/00118217.jpg',
      'browse' => 'Browse',
      'block_title' => array(
        'en' => 'Chernigiv',
        'ru' => 'Чернигов',
      ),
      'block_text' => array(
        'en' => array(
          'value' => 'Chernigiv is the capital of the northern region of Ukraine, is situated on the right (western) bank of the Desna River 89 miles (144 km) north of the Ukrainian capital Kyiv along the international highway Odessa – St.Petersburg.

Present-day Chernigov is an important industrial center of Ukraine. Main industries of Chernigov are chemical and food. There are 34 industrial plants in the city (2006), a worsted-cloth mill, bread making plant, meat and poultry plants.

Among the ancient churches of Chernigov there are the following: Assumption church of Yeletsky monastery (12th century), Trinity church of Trinity-Ilyinsky monastery (17th century) and Savior-Transfiguration church built in 11th century as well as Boris and Gleb church (12th century).',
          'format' => 'filtered_html',
        ),
        'ru' => array(
          'value' => 'Чернигов — это столица северного региона Украины. Он находится на правом (западном) берегу речки Десна, севернее столицы Украины Киева— на расстоянии 89 миль (144 км) по международной трассе Одесса — Санкт-Петербург.

Современный Чернигов — важный промышленный центр Украины. Наиболее важные ветви — химическая и пищевая промышленности. В городе 34 промышленные предприятия (состоянием на 2006 год), камвольно-суконный комбинат, хлебобулочный завод, мясокомбинат и птицефабрика.

Среди древнейших церквей наиболее известные - это Успенская церковь Елицкого монастыря 12-го века, Троицкая церковь Троицко-Іллинского монастыря 17-го века и Спасо-Преображенский собор, построенный в 11 веке, а также Борисоглебский собор 12-го века.',
          'format' => 'filtered_html',
        ),
      ),
      'form_build_id' => 'form-ncILMEufU6ibY3IgpmVazi2n4YsuBujSb-bwLeYZqWA',
      'form_token' => 'wVwJQkc7tLUXJ7wwHO1yCc55PCu8X678oHuUSFzXrxQ',
      'form_id' => 'cm_cct_image_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'd1afcda0-7d84-4c8f-858f-dcabcffaac29';
    $display->content['new-d1afcda0-7d84-4c8f-858f-dcabcffaac29'] = $pane;
    $display->panels['center'][3] = 'new-d1afcda0-7d84-4c8f-858f-dcabcffaac29';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

  return $pages;

}
