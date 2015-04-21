jQuery(document).ready(function() {
  var width = jQuery(window).width();
  if (width > 520 && width < 700) {
    var zoom = width * 100 / 1000;
    console.log(zoom);
    if (jQuery.browser.mozilla){
      jQuery('body').css('MozTransform','scale(' + zoom + ')');
    } else {
      jQuery('body').css('zoom', ' ' + 100 + '%');
    }
  }
});