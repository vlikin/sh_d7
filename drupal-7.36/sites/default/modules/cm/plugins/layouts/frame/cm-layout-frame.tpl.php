<?php
/**
 * @file General site frame.
 * 
 * It contains the base template. It helps lay out the content.
 *
 * Variables:
 *  - header
 *  - content
 *  - footer_block_1
 *  - footer_block_*
 *  - footer_block_4
 *  - copyright
 */
?>
<table id="cm_layout_frame">
  <tr>
    <td colspan="8"><?= $content['header'] ?></td>
  </tr>
  <tr>
    <td colspan="8"><?= $content['content'] ?></td></tr>
  <tr>
    <td colspan="2"><?= $content['footer_block_1'] ?></td>
    <td colspan="2"><?= $content['footer_block_2'] ?></td>
    <td colspan="2"><?= $content['footer_block_3'] ?></td>
    <td colspan="2"><?= $content['footer_block_4'] ?></td>
  </tr>
  <tr>
    <td colspan="8"><?= $content['copyright'] ?></td></tr>
  <tr>
</table>
