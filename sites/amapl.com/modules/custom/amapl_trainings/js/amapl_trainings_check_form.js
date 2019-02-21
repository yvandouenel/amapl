(function($) {
  Drupal.behaviors.trainingFull = {
    attach: function(context, settings) {
      $("a.colorbox-node").click(function() {
        setTimeout(function() {
          // J'ai attendu  pour gérer le contrôle des champs
          $("input.form-submit").click(function() {
            //alert("numéro de téléphone doit être au format numérique");
            let tel = $("#edit-field-amapl-form-tel-und-0-value--2").val();
            let mail = false;
            let error_msg = "";

            if (!$.isNumeric(tel)) {
              error_msg +=
                "Le numéro de téléphone doit être au format numérique : uniquement des chiffres sans espace.\n\n";
              $("#edit-field-amapl-form-tel-und-0-value--2").css(
                "border",
                "3px solid red"
              );
            }

            if ($("#edit-anon-mail--2").length) {
              mail = $("#edit-anon-mail--2").val();
              var testEmail = /^[A-Z0-9._%+-]+@([A-Z0-9-]+\.)+[A-Z]{2,4}$/i;
              if (!testEmail.test(mail)) {
                error_msg += "Votre email n'est pas valide.\n";
                $("#edit-anon-mail--2").css("border", "3px solid red");
              }
            }
            if (error_msg) {
              alert(error_msg);
              return false;
            }
          });
        }, 1000);
      });
    }
  };
})(jQuery);
