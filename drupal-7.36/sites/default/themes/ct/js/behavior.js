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

  Drupal.behaviors.back_to_top = {
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
