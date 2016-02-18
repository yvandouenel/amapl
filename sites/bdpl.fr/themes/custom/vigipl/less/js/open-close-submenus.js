jQuery(function($) {

  /* On cache les sous menus qui ne font pas partie d'un menu en cours de lecture*/
  $('#block-menu-block-3 div.menu-block-3 > ul.menu > li.expanded:not(.active-trail) ul').hide();

  /* Supprime l'écoute de l'événement click sur les liens de niveau 1 qui contiennent des sous-menus */
  $('#block-menu-block-3 div.menu-block-3 > ul.menu > li.expanded > a').unbind('click');

  /* on affiche ou on cache le ul qui se trouve dans le li de niveau 1 sur lequel on a cliqué */
  $('#block-menu-block-3 div.menu-block-3 > ul.menu > li.expanded').click(function(e) {

    $(this).toggleClass('vigipl-li-open');
    $(this).find('ul').slideToggle();

    // une fois le ul ouvert, on doit pouvoir cliquer sur les liens et il faut donc enlever la gestion
    // du click sur le ul en question
    $(this).unbind('click');

    (function(sous_menu){
      sous_menu.find('>a').click(function(){
        console.log("open-close sur le menu de niveau 1");
        sous_menu.find('ul').slideToggle();
        sous_menu.toggleClass('vigipl-li-open');
        return false;
      });
    })($(this));

    return false;
    e.preventDefault();
  });

  /* Supprime l'écoute de l'événement click sur le li de niveau 1 qui est ouvert */
  $('#block-menu-block-3 div.menu-block-3 > ul.menu > li.expanded.active-trail').unbind('click');

});





