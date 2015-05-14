(function ($) {
  Drupal.behaviors.cm_cct_map_text = {
    attach: function (context, settings) {
      var cct = $('.cm_cct_map_text', context);
      var element = $('.map', cct);
      var lat = cct.attr('data-lat');
      var lng = cct.attr('data-lng');
      var options = {
        center: new google.maps.LatLng(lat, lng),
        zoom: 8,
        mapTypeId: google.maps.MapTypeId.ROADMAP
      };
      var map = new google.maps.Map(element[0], options);

      var markerLatLng = new google.maps.LatLng(lat, lng);
      console.log(cct.attr('data-marker'));
      var marker = new google.maps.Marker({
        position: markerLatLng,
        map: map,
        icon: cct.attr('data-marker')
      });
      console.log(element);
      console.log(google);
    }
  };
}) (jQuery);
