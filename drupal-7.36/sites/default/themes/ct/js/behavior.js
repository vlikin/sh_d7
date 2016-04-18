(function ($) {
  Drupal.ct = Drupal.ct || {};
  Drupal.ct.popup = function(options) {
    var _this = this;
    this.dom = {
      blanket: $('<div />', {class: 'ct-popup-blanket'}),
      box_out: $('<div />', {class: 'ct-popup-box-out'}),
      box: $('<div />', {class: 'box'}),
      iframe: $('<iframe />', {src: options.src, class: 'frame'}),
      closeButton: $('<div />', {class: 'close-button'})
    };
    this.dom.blanket.prependTo('body');
    this.dom.box_out.prependTo('body');
    this.dom.box
      .append(this.dom.closeButton)
      .append(this.dom.iframe)
      .prependTo(this.dom.box_out);

    this.removeThis = function () {
      this.dom.box_out.remove();
      this.dom.blanket.remove();
      delete this;
    };

    this.dom.closeButton
      .bind('click', function() {
        _this.removeThis();
      });

  }

  Drupal.events = Drupal.events || {};
  Drupal.events.bxslider_on_item_click = function(_this) {
    $this = jQuery(_this);
    var dom = $this.closest('.bxslider');
    var bxslider = dom.data('instance');
    var href = location.href;
    var index = $this.data('index');
    href = href + '?popup=1' + '&imageIndex=' + index;

    Drupal.ct.popup({src: href});
  };

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
      $('.cm_cct_menu', context).add('.language-switcher-locale-url').each(function(index, menu) {
        var $menu = $(menu);
        if ($('a.active', $menu).length == 0) {
          $('<a>', {href: '#', class: 'active'})
            .html('Menu')
            .prependTo($menu);
        }
        $('a.active', $menu).click(function(event) {
          event.preventDefault();
        });
        $menu.click(function(event) {
          var $this = $(this);
          if ($this.hasClass('show')) {
            $menu.removeClass('show');
            $('.cm_cct_menu.show,.language-switcher-locale-url').removeClass('hide');
            return;
          }
          $('.cm_cct_menu.show,.language-switcher-locale-url').removeClass('show').addClass('hide');
          $(this).removeClass('hide').addClass('show');
        });
      });
    }
  };

  Drupal.behaviors.ct_back_to_top = {
    attach: function (context, settings) {
      var back_to_top = jQuery('<div />')
        .addClass('back_to_top')
        .click(function () {
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
