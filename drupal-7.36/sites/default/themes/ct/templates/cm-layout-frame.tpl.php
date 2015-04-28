<?php
/**
 * @file It overrides a base template
 */
?>
<meta name=viewport content="width=device-width, initial-scale=1">
<div id="<?= $css_id ?>">
  <header>
    <div colspan="8"><?= $content['header'] ?></div>
  </header>
  <main><?= $content['content'] ?></main>
  <footer>
    <div class="col"><?= $content['footer_block_1'] ?></div>
    <div class="col"><?= $content['footer_block_2'] ?></div>
    <div class="col"><?= $content['footer_block_3'] ?></div>
    <div class="col"><?= $content['footer_block_4'] ?></div>
  </footer>
  <div class="copyright"><?= $content['copyright'] ?></div>
</div>
