
(function ($) {

  Drupal.behaviors.brands = {
    attach: function (context, settings) {

      // classement des actus en fonction de la date
      var container_actus = $("#linked-news-frame");
      var actus = container_actus.children(".node-news");

      actus.sort(function(a,b){
        var an = $(".date-display-single",a).attr("content"),
          bn = $(".date-display-single",b).attr("content");
        console.log(an);
        if(an < bn) {
          return 1;
        }
        if(an > bn) {
          return -1;
        }
        return 0;
      });

      actus.detach().appendTo(container_actus);

    }
  };
}(jQuery))