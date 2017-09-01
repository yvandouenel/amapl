(function ($) {
  Drupal.behaviors.form_amapl = {
    attach: function (context, settings) {
      $( "<h3></h3>", {
        "id": "h3-payment-online",
        text: 'Paiement en ligne :',

      }).prependTo( ".group-footer" );

      /*$( "<h3></h3>", {
        "id": "h3-subscribed-datas",
        text: 'Résumé des principales informations que vous nous avez communiquées :',

      }).appendTo( ".group-header" );*/

      $( "<a></a>", {
        "id": "modify-subscribe-form",
        text: "> Modifier mes informations avant paiement",
        "href": "/adherer/formulaire",
      }).appendTo( ".group-right" );


      if ($('#title-payment-history').length) {
        $("#payment-form-standalone").hide();
        $( "<button></button>", {
          "id": "view-payment",
          text: 'Effecturer un nouveau payement',
          click: function( event ) {
              console.log("qsdqsdfqsdaa")
              $("#payment-form-standalone").show();
            }

        }).insertAfter( ".field-name-field-historique-paiement" );
      }

    }
  };
}(jQuery))
