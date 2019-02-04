(function ($) {
    Drupal.behaviors.training_first_session_date = {
      attach: function (context, settings) {
          /* 
          Pour une raison qui m'échappe, il faut que le champ session_begin soit vide afin que le remplacement 
          depuis la première date s'effectue (cf amapl_trainigs_module ligne 498 et 583)
          */
        $("#edit-field-session-begin-und-0-value-date").val("");
      }
    };
  }(jQuery));