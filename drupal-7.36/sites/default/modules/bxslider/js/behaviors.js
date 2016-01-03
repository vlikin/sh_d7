Drupal.events = Drupal.events || {};

Drupal.events.bxslider_on_item_click = function(_this) {
  $this = jQuery(_this);
  var dom = $this.closest('.bxslider');
  var bxslider = dom.data('instance');
  var href = location.href;
  href = href + '?popup=1';
  Drupal.ct.popup({src: href});
};

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
