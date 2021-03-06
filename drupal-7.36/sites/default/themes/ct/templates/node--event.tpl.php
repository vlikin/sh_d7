<?php
/**
 * @file Overrides node--artcle.tpl.php
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix node-view-mode-<?= $view_mode ?>"<?php print $attributes; ?>>
  <?php if ($view_mode == 'teaser'): ?>
    <div class="image-container">
      <?= render($content['field_image']) ?>
    </div>
  <?php endif ?>
  <?php print render($title_prefix); ?>
    <h2<?php print $title_attributes; ?>>
      <a href="<?= $node_url ?>"><?= $title ?></a>
    </h2>
  <?php print render($title_suffix); ?>

  <?php if ($display_submitted): ?>
    <div class="submitted">
      <?php print $submitted; ?>
    </div>
  <?php endif; ?>

  <div class="content"<?php print $content_attributes; ?>>
    <?php
      // We hide the comments and links now so that we can render them later.
      hide($content['comments']);
      hide($content['links']);
      print render($content);
    ?>
    <?php print render($content['links']['node']); ?>
  </div>

</div>
