<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//RU" "http://www.w3.org/TR/html4/loose.dtd">
<html>
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8">
<title><?php print $head_title;?></title>
</head>
<body>
  <div
    id="ct-body-lock-shadow"
    style="
      background-color: #111;
      opacity: 0.65;
      *background: none;
      position: fixed;
      z-index: 9001;
      top: 0px;
      left: 0px;
      width: 100%;
      height: 100vh;
  "></div>
  <img
    id="ct-body-lock"
    src="<?= path_to_theme()  ?>/images/hourglass.svg"
    style="
      position: absolute;
      z-index: 9002;
      top: 50vh;
      left: 50%;
      width: 120px;
      height: 120px;
    "
  />
  <?php print $page_top;?>
  <?php print $page;?>
  <?php print $page_bottom;?>
</body>
<?php print $styles;?>
<?php print $scripts;?>
<script type="text/javascript">
  jQuery(document).ready(function() {
    jQuery('#ct-body-lock-shadow, #ct-body-lock').remove();
  });
</script>
