(function($) {
  Drupal.behaviors.trainingFull = {
    attach: function(context, settings) {
      // on efface tous les labels des boutons radios
      $(".form-item-field-training-free-value > label").next().text("");
      let free_checked = $("#edit-field-training-free-value-1").is(":checked")
        ? true
        : false;

      /**
       * si "gratuit" est coché, on ne laisse que "tout"
       * et on remet le label "Gratuit et payant ?"
      */
      if (free_checked) {
        //console.log("gratuit coché");
        $(".form-item-field-training-free-value").each(function(index) {
          if (index == 1 || index == 2) {
            $(this).hide();
          }
        });
        $("#edit-field-training-free-value-wrapper > label").text("Tous tarifs ?");
      }
      /**
       * si "tout" est coché, on ne laisse que "free"
       * et on remet le label "gratuit ?"
       */
      else if ($("#edit-field-training-free-value-0").is(":checked")) {
        //console.log("Tout coché");
        // Attention : important de cocher "all" sinon, la recherche est erronnée
        $("#edit-field-training-free-value-all").prop("checked", true);
        $(".form-item-field-training-free-value").each(function(index) {
          if (index == 0 || index == 1) {
            $(this).hide();
          }
        });
        $("#edit-field-training-free-value-wrapper > label").text("Gratuit ?");

      }

    }
  };
})(jQuery);
