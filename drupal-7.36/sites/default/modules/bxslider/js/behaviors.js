(function ($) {
  Drupal.behaviors.bxslider = {
    attach: function (context, settings) {
      $('.bxslider:not(.bxslider-processed)', context)
      .addClass('bxslider-processed')
      .each(function() {
        var dom = $(this);
        var ukey = dom.attr('data-ukey');
        var settings = Drupal.settings.bxslider.formatter[ukey];
        dom.bxSlider(settings);
      });
    }
  };
}) (jQuery);