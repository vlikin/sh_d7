Drupal.events = Drupal.events || {};

(function ($) {
  Drupal.behaviors.bxslider = {
    attach: function (context, settings) {
      Drupal.settings.bxslider.instances = Drupal.settings.bxslider.instances || [];
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
        var instance = dom.bxSlider(settings);
        Drupal.settings.bxslider.instances.push(instance);
        dom.data('instance', instance);
      });
    }
  };
}) (jQuery);
