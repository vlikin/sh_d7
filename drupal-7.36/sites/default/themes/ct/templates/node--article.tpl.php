<?php

/**
 * @file Overrides node--artcle.tpl.php
 */
?>
<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
  <div class="image-container">
    <?= render($content['field_image']) ?>
  </div>
  <div class="text-container">
    <?php print render($title_prefix); ?>
      <h2<?php print $title_attributes; ?>>
        <?= l($title, $node_url) ?>
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
    </div>
  </div>
</div>