<?php 
/**
 * @file It containes a content type.
 */

/**
 * Plugins are described by creating a $plugin array which will be used
 * by the system that includes this file.
 */
$plugin = array (
  'title' => t('Menu'),
  'description' => t('This is a multilingual menu'),
  'single' => FALSE,
  'cct' => array('cm_cct_menu'),
  'render callback' => 'cm_cct_menu_render',
  'edit form' => 'cm_cct_menu_edit_form',
  'admin info' => 'cm_cct_menu_admin_info',
  'icon' => 'icon.png',
  'category' => 'Shelepen',
);

/**
 * It renders the content type.
 */
function cm_cct_menu_render($subtype, $conf, $args, $context) {
  global $language;
  $langcode = $language->language;

  $block = new stdClass();
  $block->content = [
    '#type' => 'container',
    '#attributes' => [
      'class' => ['cm_cct_menu'],
    ],
  ];
  foreach ($conf['items'] as $key => $item) {
    if (is_numeric($key) && $item['enabled']) {
      $block->content[]['#markup'] = l($item['title'][$langcode], $item['path']);
    }
  }

  return $block;
}

/**
 * 'admin info' callback for panel pane.
 */
function cm_cct_menu_admin_info($subtype, $conf, $contexts) {
  if (!empty($conf)) {
    $block = new stdClass;
    $block->title = $conf['block_title']['en'];

    return $block;
  }
}

/**
 * It is the config form of the content type.
 */
function cm_cct_menu_edit_form($form, &$form_state) {
  $values = $form_state['conf'];
  dpm($values);

  hide($form['override_title']);
  hide($form['override_title_text']);
  hide($form['override_title_heading']);
  hide($form['override_title_markup']);

  $item_limit = $values['item_limit'] ? $values['item_limit'] : 3;
  $form['#tree'] = TRUE;
  $form['item_limit'] = [
    '#title' => t('Item limit'),
    '#type' => 'textfield',
    '#default_value' => $item_limit,
  ];
  $form['items'] = array(
    '#type' => 'vertical_tabs',
  );
  for ($i = 0; $i < $item_limit; $i++) {
    $item = [
      '#type' => 'fieldset',
      '#title' => t('Menu item') . ' - ' . $i,
      '#tree' => TRUE,
      '#group' => 'vertical_tabs',
      'enabled' => [
        '#type' => 'checkbox',
        '#title' => t('Enabled'),
        '#default_value' => $values['items'][$i]['enabled'],
      ],
      'path' => [
        '#type' => 'textfield',
        '#title' => t('Path'),
        '#default_value' => $values['items'][$i]['path'],
      ],
      'title' => [
        '#type' => 'fieldset',
        '#title' => t('Title'),
      ],
      'weight' => [
        '#type' => 'weight',
        '#title' => t('Weight'),
        '#default_value' => $values['items'][$i]['weight'],
      ],
    ];
    foreach (language_list() as $langcode => $lang) {
      $item['title'][$langcode] = [
        '#type' => 'textfield',
        '#title' => $lang->name,
        '#default_value' => $values['items'][$i]['title'][$langcode],
      ];
    }
    $form['items'][] = $item;
  }

  return $form;
}

/**
 * It is the config form of the content type.
 */
function cm_cct_menu_edit_form_submit($form, &$form_state) {
  $form_state['conf'] = $form_state['values'];
}
