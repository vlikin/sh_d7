(function ($) {
  Drupal.behaviors.imce_element = {
    attach: function (context, settings) {
      $('.language-switcher-locale-url, .cm_cct_menu', context).click(function(event) {
        $(this).toggleClass('show');
      });
      $('.language-switcher-locale-url li.active a, .cm_cct_menu a.active', context).click(function(event) {
        event.preventDefault();
      });

    }
  };
}) (jQuery);
