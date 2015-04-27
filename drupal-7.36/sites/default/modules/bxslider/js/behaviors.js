(function ($) {
  Drupal.behaviors.bxslider = {
    attach: function (context, settings) {
      $('.bxslider:not(.bxslider-processed)', context)
      .addClass('bxslider-processed')
      .each(function() {
        var dom = $(this);
        var ukey = dom.attr('data-ukey');
        var settings = Drupal.settings.bxslider.formatter[ukey];

        // Postprocess settings variables.
        var property_list = ['slideWidth', 'slideMargin']
        for (var index in property_list) {
          var key = property_list[index];
          settings[key] = parseInt(settings[key]);
        }
        dom.bxSlider(settings);
      });
    }
  };
}) (jQuery);