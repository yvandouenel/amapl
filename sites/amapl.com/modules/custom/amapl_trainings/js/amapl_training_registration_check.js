/**
 * Created by ubuntu on 10/04/18.
 */

(function($) {
  Drupal.behaviors.trainingList = {
    attach: function(context, settings) {
      let validate = true;
      let error_message = "";
      /**
       * Test des champs à la validation du formulaire
       */
      $("#registration-form--2").submit(function(event) {
        error_message = "";
        validate = true;
        // Gestion des champs recquis
        $("input.required").each(function() {
          // si vide
          if ($(this).val() == "") {
            error_message +=
              "<p>" +
              "Le champ " +
              $(this)
                .prev("label")
                .text() +
              " ne doit pas être vide" +
              "</p>";
            validate = false;
          }
          // gestion des checkbox si pas "checké"
          if ($(this).hasClass("form-checkbox") && !$(this).is(":checked")) {
            error_message +=
              '<p>Merci de cocher la case "' +
              $(this)
                .parent("label")
                .text() +
              '"';
            validate = false;
          }
          // Gestion du champ téléphone qui ne doit contenir que des chiffres
          if ($(this).attr("id") == "edit-field-amapl-form-tel-und-0-value--2" &&
          !$.isNumeric( $(this).val() )) {
            error_message +=
              "<p>" +
              "Le champ " +
              $(this)
                .prev("label")
                .text() +
              " ne doit contenir que des chiffres" +
              "</p>";
            validate = false;
          }
        });
        if (!validate) {
          if (!$("#div-error").length) {
            $("<div></div>", {
              id: "div-error",
              class: "alert alert-danger"
            }).appendTo("#registration-form--2");
          } else {
            $("#div-error").html("");
          }

          $("#div-error").html(error_message);

          let height = $("#cboxLoadedContent")[0].scrollHeight;
          $("#cboxLoadedContent").scrollTop(height);
          event.preventDefault();
          //console.log(error_message);
        }
        //console.log("validate" + validate);
      });
    }
  };
})(jQuery);
