(function ($) {
  Drupal.behaviors.form_amapl = {
    attach: function (context, settings) {
      $( "<a></a>", {
        "id": "modify-subscribe-form",
        text: "> Modifier ou vérifier mes informations avant paiement",
        "href": "/adherer/formulaire",
      }).appendTo( ".group-header" );

      $( "<h3></h3>", {
        "id": "h3-subscribed-datas",
        text: 'Résumé des principales informations que vous venez de nous communiquer :',

      }).appendTo( ".group-header" );


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
