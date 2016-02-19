/**
 * Created by yvan on 19/02/16.
 */
jQuery(function($){
  // gestion du click sur les ancres
  $('a[href^="#"]').click(function(event) {
    //console.log("entrée sur click d'ancre");

    var target = $(this.hash);
    if (target.length == 0) target = $('a[name="' + this.hash.substr(1) + '"]');
    if (target.length == 0) target = $('html');


    $('html, body').animate({ scrollTop: target.offset().top }, 500);
    return false;

  });

  // Gestion du positionnement de la flèche "retour haut de page"

  if ($( ".link-anchor-top-vigipl" ).length) {
    console.log('ici');
    var position = $('.view-liste-articles .view-content .views-row-first').offset();
    var width_main_col = $('.col-sm-9').width() + 20 + position.left;

    if(navigator.userAgent.search("mobile")>0 ){
      console.log('mobile');
      $( ".link-anchor-top-vigipl" ).css({position: 'fixed', right: '0', top: '10%'});
    }

    $( ".link-anchor-top-vigipl" ).css({position: 'fixed', left: width_main_col+'px', top: position.top+120+'px'});
  }

});


