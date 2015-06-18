(function ($) {
  Drupal.behaviors.ct_resize = {
    attach: function (context, settings) {
      var resize_div = function() {
        $('.ct_resize').each(function(index, object) {
          var div = $(object);
          var ratios = $(object).attr('data-ct_resize').split('x');
          var ratio = ratios[1] / ratios[0];
          div.height(div.width() * ratio )
        });
      };
      resize_div();

      $(window).resize(function() {
        resize_div();
      });
    }
  };

  Drupal.behaviors.ct_menus = {
    attach: function (context, settings) {
      if ($('.cm_cct_menu a.active', context).length == 0) {
        $('.cm_cct_menu a', context).first().show();
      }
      $('.language-switcher-locale-url, .cm_cct_menu', context).click(function(event) {
        $(this).toggleClass('show');
      });
      $('.language-switcher-locale-url li.active a, .cm_cct_menu a.active', context).click(function(event) {
        event.preventDefault();
      });

    }
  };

  Drupal.behaviors.ct_back_to_top = {
    attach: function (context, settings) {
      var back_to_top = jQuery('<div />')
        .addClass('back_to_top')
        .click(function () {
          console.log('click');
          $('html, body').animate({
            scrollTop: 0
          }, 2000);
        });
      jQuery('body').append(back_to_top);
      $(document).bind('scroll', function() {
        if ($(window).scrollTop() > 100) {
          back_to_top.show();
        }
        else {
          back_to_top.hide();
        }
      });
    }
  };

}) (jQuery);
