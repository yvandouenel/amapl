jQuery(function($) {
  if($(".title-drop-down").length) {
    $(".title-drop-down").each(function(){
      // on cache le paragraphe suivant
      $(this).next(".txt-drop-down").hide();
      $(this).click(function (e) {
        $(this).next(".txt-drop-down").slideToggle(600);
      });

    })
  }
});