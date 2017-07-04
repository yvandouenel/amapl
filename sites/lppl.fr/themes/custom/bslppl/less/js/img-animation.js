jQuery(function ($) {

  console.log("animation image");
  var src_homme_jeune = $('#homme img').attr("src");
  var src_homme_vieux = $('#homme img').attr("src");
  var src_news_home = $('#news-home img').attr("src");

  $('#homme-jeune img').hover(function(){
    console.log("survol jeune");
    $('#homme-jeune img').attr("src", "/sites/lppl.fr/themes/custom/bslppl/less/images/homme_accueil_01_animated.gif");
  }, function(){
    $('#homme-jeune img').attr("src", src_homme_jeune);
  });
  $('#homme-vieux img').hover(function(){
    $('#homme-vieux img').attr("src", "/sites/lppl.fr/themes/custom/bslppl/less/images/homme_accueil_02_animated.gif");
  }, function(){
    $('#homme-vieux img').attr("src", src_homme_vieux);
  });
  $('#news-home img').hover(function(){
    $('#news-home img').attr("src", "/sites/lppl.fr/themes/custom/bslppl/less/images/news_accueil_animated.gif");
  }, function(){
    $('#news-home img').attr("src", src_news_home);
  });
});

