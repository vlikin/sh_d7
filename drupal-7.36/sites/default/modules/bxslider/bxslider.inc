<?php
/**
 * @file Contains helpers.
 */

function _bxslider_get_increment_key() {
  static $index = 0;

  return 'bxslider-key-' . $index++;
}

function _bxslider_settings_form($values) {
  $form = array();

  $form['slideWidth'] = array(
    '#title' => t('Slide width'),
    '#type' => 'textfield',
    '#default_value' => $values['slideWidth'] ? $values['slideWidth'] : 0,
    '#min' => 0,
    '#required' => TRUE,
  );
  $form['minSlides'] = array(
    '#title' => t('Min slides'),
    '#type' => 'textfield',
    '#default_value' => $values['minSlides'] ? $values['minSlides'] : 1,
    '#min' => 1,
    '#required' => TRUE,
  );
  $form['maxSlides'] = array(
    '#title' => t('Max slides'),
    '#type' => 'textfield',
    '#default_value' => $values['maxSlides'] ? $values['maxSlides'] : 1,
    '#min' => 1,
    '#required' => TRUE,
  );
  $form['slideMargin'] = array(
    '#title' => t('Slide margin'),
    '#type' => 'textfield',
    '#default_value' => $values['slideMargin'] ? $values['slideMargin'] : 0,
    '#min' => 0,
    '#required' => TRUE,
  );
  $form['pager'] = array(
    '#title' => t('Show pager'),
    '#type' => 'checkbox',
    '#default_value' => $values['pager'] ? $values['pager'] : FALSE,
  );
  $form['js_settings'] = array(
    '#title' => t('JS settings'),
    '#type' => 'textarea',
    '#default_value' => $values['js_settings'] ? $values['js_settings'] : '',
  );

  return $form;
}

/**
 * Prepares a renderable array ro theme bxslider.
 */
function _bxslider_get_render_source($items, $settings, $ukey='ukey') {
  $text_settings = $settings['js_settings'];
  unset($settings['js_settings']);
  if (!empty($text_settings)) {
    $js_settings = json_decode($text_settings, TRUE);
    $settings = array_merge($js_settings, $settings);
  }
  $source = array (
    '#theme' => 'bxslider_wrapper',
    'items' => $items,
    '#ukey' => $ukey,
    '#attached' => array (
      'library' => array (
        array ('bxslider', 'bxslider'),
      ),
      'css' => [
        [
          'data' => drupal_get_path('module', 'bxslider') . '/css/style.css',
          'type' => 'file',
        ],
      ],
      'js' => array (
        array (
          'data' => drupal_get_path('module', 'bxslider') . '/js/behaviors.js',
          'type' => 'file',
        ),
        array (
          'data' => array (
            'bxslider' => array (
              'formatter' => array (
                $ukey => $settings,
              ),
            ),
          ),
          'type' => 'setting',
        ),
      ),
    ),
  );

  return $source;
}
