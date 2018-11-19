(function ($) {
  Drupal.behaviors.trainingFull = {
    attach: function (context, settings) {
      var free_checked = ($("#edit-field-training-free-value-1").is(':checked')) ? true : false;
      $(".form-item-field-training-free-value").each(function (index) {
        if (index == 0 || index == 1) {
          $(this).hide();
        } else {
          $("label",$(this)).hide();
        }
      });
      $("#edit-field-training-free-value-1").click(function() {
        if (free_checked) {
          $("#edit-field-training-free-value-all").prop("checked", true);
          free_checked = false;
        } else {
          free_checked = true;
        }
      });
    }
  };
}(jQuery));
