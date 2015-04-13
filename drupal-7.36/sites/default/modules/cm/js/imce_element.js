(function ($) {
  Drupal.behaviors.imce_element = {
    attach: function (context, settings) {
      var element = $('.cm_imce_element', context);
      $('.form-submit', element).click(function() {
        var el = $(this);
        var title = el.attr('data-title');
        var id = el.attr('data-id');
        window.open("/imce?app=" + title + "|url@" + id, "", "width=760,height=560,resizable=1");
      });
    }
  };
}) (jQuery);
