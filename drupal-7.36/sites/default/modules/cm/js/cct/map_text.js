(function ($) {
  Drupal.behaviors.cm_cct_map_text = {
    attach: function (context, settings) {
      var cct = $('.cm_cct_map_text:not(.processed)', context)
        .addClass('processed');
      if (cct.length == 0) {
        return;
      }

      cct.map(function(cct) {
        var element = $('.map', cct);
        var lat = element.attr('data-lat');
        var lng = element.attr('data-lng');
        var zoom = parseInt(element.attr('data-zoom'));
        var options = {
          center: new google.maps.LatLng(lat, lng),
          zoom: zoom,
          mapTypeId: google.maps.MapTypeId.ROADMAP
        };
        var map = new google.maps.Map(element[0], options);
        var markerLatLng = new google.maps.LatLng(lat, lng);
        var marker = new google.maps.Marker({
          position: markerLatLng,
          map: map,
          icon: element.attr('data-marker')
        });
      });
    }
  };
}) (jQuery);
