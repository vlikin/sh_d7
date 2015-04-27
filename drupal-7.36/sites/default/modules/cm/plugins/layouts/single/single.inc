<?php

/**
 * implementation of hook_panels_layouts()
 */
// Plugin definition
$plugin = array(
  'title' => t('Single'),
  'category' => t('Shelepen'),
  'icon' => 'icon.png',
  'theme' => 'cm_layout_single',
  'regions' => array(
    'content' => t('Content'),
  ),
);
