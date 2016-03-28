<?php
/**
 * @file
 * feature_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function feature_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function feature_content_type_node_info() {
  $items = array(
    'article' => array(
      'name' => t('Статья'),
      'base' => 'node_content',
      'description' => t('Статья — это документ, который обычно используется для новостей, анонсов и любых других сообщений, для которых не задействованы другие типы документов. Этот тип документа также используют для ведения персонального блога. По умолчанию, документы этого типа выводятся на первую страницу сайта и их разрешено комментировать.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'event' => array(
      'name' => t('Событие'),
      'base' => 'node_content',
      'description' => t('Какое-нибудь событие, которое проходило в опрделенное время в определённом месте, которое можно отметить фотографиями и описанием.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Основная страница'),
      'base' => 'node_content',
      'description' => t('Используйте <em>основная страница</em>для статичного контента с редко изменяемой информацией, например страницы \'О сайте\'.'),
      'has_title' => '1',
      'title_label' => t('Заголовок'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
