<?php
/**
 * @file It renders a list to be processed by bxSlider library.
 */
?>
<ul class="bxslider" data-ukey="<?= $element['#ukey'] ?>">
  <? foreach($element['items'] as $item): ?>
    <li><?= render($item) ?></li>
  <? endforeach ?>
</ul>