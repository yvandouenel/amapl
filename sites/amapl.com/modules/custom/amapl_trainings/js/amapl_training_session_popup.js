/**
 * Created by ubuntu on 13/10/17.
 */

(function ($) {

  Drupal.behaviors.trainingSessionPopup = {
    attach: function (context, settings) {

      $("input.form-submit").click(function(event){
        if($("#edit-field-amapl-form-rules-und--2:checked").length < 1 ||
          !$(".required").val()) {
          event.preventDefault();
          if (!$("#msg-error-registration-amapl").length) {
            $("<div></div>",{
              "id": "msg-error-registration-amapl",
              "text": "Vous devez remplir tous les champs précédés d'un astérisque rouge.",
              "style": "color:red",
            }).insertAfter(".field-name-field-amapl-form-rules");
          }
        }

      });
      $('.add-to-session-open-close').click(function () {
        $(this).hide();
        $('#session-switch-wrapper .user-details').slideDown(1000);
      });
    }
  };
}(jQuery));