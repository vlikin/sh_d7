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
      'item_limit' => '3',
      'items' => array(
        0 => array(
          'enabled' => 1,
          'path' => 'we_are',
          'title' => array(
            'en' => 'We_are',
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
          'path' => 'notes',
          'title' => array(
            'en' => 'Notes',
            'ru' => 'Записки',
            'uk' => 'Нотатки',
          ),
          'weight' => '-10',
        ),
        'items__active_tab' => 'edit-items-2',
      ),
      'form_build_id' => 'form-3AVTBdHlKT6rcK1Vtk027ZfvMU7o9--E-bbEcHMj9sA',
      'form_token' => 'nLYEomgXGiyZHRwneI_cOtpJEQU4XLCg7qveZcO5f4Q',
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
    $pane->pid = 'new-a3f7e7ad-6f43-45f4-89b6-6044b4bc145f';
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
      'image_style' => '3x4-4',
      'item_limit' => '10',
      'list' => array(
        0 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/php-digest-6.png',
          'weight' => '-10',
        ),
        1 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/nginx-logo.jpg',
          'weight' => '-10',
        ),
        2 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/Mysql.png',
          'weight' => '-10',
        ),
        3 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/logo-ubuntu_st_no%C2%AE-black_orange-hex.png',
          'weight' => '-10',
        ),
        4 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/Linux.jpg',
          'weight' => '-10',
        ),
        5 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/inkscape-draw-freely-program-LOGO.png',
          'weight' => '-10',
        ),
        6 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/html%2C%20css.png',
          'weight' => '-10',
        ),
        7 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/apache.png',
          'weight' => '-10',
        ),
        8 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/d8%204x3.png',
          'weight' => '-10',
        ),
        9 => array(
          'enabled' => 1,
          'image' => '/sites/default/files/images/technologies/3012_gimp_2.8_logo.png',
          'weight' => '-10',
        ),
        'list__active_tab' => 'edit-list-0',
      ),
      'list[0][image]' => '/sites/default/files/images/technologies/php-digest-6.png',
      'browse' => 'Browse',
      'list[1][image]' => '/sites/default/files/images/technologies/nginx-logo.jpg',
      'list[2][image]' => '/sites/default/files/images/technologies/Mysql.png',
      'list[3][image]' => '/sites/default/files/images/technologies/logo-ubuntu_st_no%C2%AE-black_orange-hex.png',
      'list[4][image]' => '/sites/default/files/images/technologies/Linux.jpg',
      'list[5][image]' => '/sites/default/files/images/technologies/inkscape-draw-freely-program-LOGO.png',
      'list[6][image]' => '/sites/default/files/images/technologies/html%2C%20css.png',
      'list[7][image]' => '/sites/default/files/images/technologies/apache.png',
      'list[8][image]' => '/sites/default/files/images/technologies/d8%204x3.png',
      'list[9][image]' => '/sites/default/files/images/technologies/3012_gimp_2.8_logo.png',
      'settings' => array(
        'slideWidth' => '240',
        'minSlides' => '4',
        'maxSlides' => '4',
        'slideMargin' => '0',
        'pager' => 0,
        'js_settings' => '',
      ),
      'form_build_id' => 'form-oYrBZ_RpAmGgZvdAVjvcCeRuMSyuGU4zijHxnlsRiBE',
      'form_token' => 'etiq0xqbXo4LsSg82ghthi8Ur1oyDN0V5S4FfChcTQc',
      'form_id' => 'bxslider_cct_image_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a3f7e7ad-6f43-45f4-89b6-6044b4bc145f';
    $display->content['new-a3f7e7ad-6f43-45f4-89b6-6044b4bc145f'] = $pane;
    $display->panels['center'][0] = 'new-a3f7e7ad-6f43-45f4-89b6-6044b4bc145f';
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9da22f39-30a9-4486-a9db-5b5a87df5f64';
    $display->content['new-9da22f39-30a9-4486-a9db-5b5a87df5f64'] = $pane;
    $display->panels['center'][1] = 'new-9da22f39-30a9-4486-a9db-5b5a87df5f64';
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
        'uk' => array(
          'value' => 'Чернігів — це столиця північного регіону України. Він розташований на правому (західному) березі річки Десна, північніше від столиці України Києва— на відстані 89 миль (144 км) по міжнародній трасі Одеса — Санкт-Петербург.

Чернігів — це старовинне слов\'янське місто. Наприкінці 9 століття Чернігів приєднано до держави Київська Русь.

Сучасний Чернігів — важливий промисловий центр України. Найважливіші галузі — хімічна та харчова промисловості. У місті 34 промислових підприємств (станом на 2006 р.,), камвольно-суконна фабрика, хлібобулочний завод, м\'ясокомбінат і птахофабрика.

Серед стародавніх церков найвизначнішими є Успенська церква Єлицького монастиря 12-го століття, Троїцька церква Троїцько-Іллінського монастиря 17-го століття і Спасо-Преображенський собор, побудований у 11 столітті, а також Борисоглібський собор 12-го століття.',
          'format' => 'filtered_html',
        ),
      ),
      'form_build_id' => 'form-551ZR19-nnfCqU8zFODPR-wxVEbd6Usnxhq9O9U7moY',
      'form_token' => 'iODV9cGlTyJRpAwXMinaJVjzdHzYi1E4mcFUQ8qYjQk',
      'form_id' => 'cm_cct_image_text_edit_form',
      'op' => 'Finish',
    );
    $pane->cache = array();
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd1afcda0-7d84-4c8f-858f-dcabcffaac29';
    $display->content['new-d1afcda0-7d84-4c8f-858f-dcabcffaac29'] = $pane;
    $display->panels['center'][2] = 'new-d1afcda0-7d84-4c8f-858f-dcabcffaac29';
    $pane = new stdClass();
    $pane->pid = 'new-1915463f-00f2-44fe-8884-c8e38c86ebc6';
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
    $pane->style = array();
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '1915463f-00f2-44fe-8884-c8e38c86ebc6';
    $display->content['new-1915463f-00f2-44fe-8884-c8e38c86ebc6'] = $pane;
    $display->panels['center'][3] = 'new-1915463f-00f2-44fe-8884-c8e38c86ebc6';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['about'] = $page;

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
  $display->uuid = '648c0565-5d9e-4e44-a320-8dba4688e683';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-294adc3b-66cb-47df-9ea4-853a95d751e5';
    $pane->panel = 'middle';
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
          'value' => 'Email: viktor.likin@gmail.com; pogodaelena@gmail.com.
Skype: vlikin; s10061988.',
          'format' => 'full_html',
        ),
        'ru' => array(
          'value' => 'Email: viktor.likin@gmail.com; pogodaelena@gmail.com.
Skype: vlikin; s10061988.',
          'format' => 'full_html',
        ),
        'uk' => array(
          'value' => 'Email: viktor.likin@gmail.com; pogodaelena@gmail.com.
Skype: vlikin; s10061988.',
          'format' => 'full_html',
        ),
      ),
      'form_build_id' => 'form-7S4XqiQTQMwwd-weSCJUbwyRuFZlW3mwjjX_29eXhvM',
      'form_token' => 'iODV9cGlTyJRpAwXMinaJVjzdHzYi1E4mcFUQ8qYjQk',
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
    $display->panels['middle'][0] = 'new-294adc3b-66cb-47df-9ea4-853a95d751e5';
    $pane = new stdClass();
    $pane->pid = 'new-bb194754-bf97-4492-b2a1-ffa552cc2b9b';
    $pane->panel = 'middle';
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
          'value' => 'Chernigiv Oblpotrebsoyuz

14038, Chernigiv, Victory Avenue, 139, office 702 (04622) 7-89-22, (fax) 7-51-08, 27-14-04',
          'format' => 'filtered_html',
        ),
        'ru' => array(
          'value' => 'Черниговский облпотребсоюз

14038,     Чернигов,   проспект Победы, 139, офис 702 (04622)   7-89-22,   (факс)  7-51-08, 27-14-04',
          'format' => 'filtered_html',
        ),
        'uk' => array(
          'value' => 'Чернігівська облспоживспілка

14038,     Чернігів,   проспект Перемоги, 139, офіс 702 (04622)   7-89-22,   (факс)  7-51-08, 27-14-04',
          'format' => 'filtered_html',
        ),
      ),
      'form_build_id' => 'form-jZ2tcFs-xN5p1JPnkFf0b83LNp9dBoYQ6-t65n7ZiAo',
      'form_token' => 'iODV9cGlTyJRpAwXMinaJVjzdHzYi1E4mcFUQ8qYjQk',
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
    $display->panels['middle'][1] = 'new-bb194754-bf97-4492-b2a1-ffa552cc2b9b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['contacts'] = $page;

  return $pages;

}
