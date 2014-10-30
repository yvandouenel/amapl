jQuery(function($) {
  $('#block-menu-block-3 div.menu-block-3 > ul.menu > li.expanded:not(.active-trail)')
  .css({cursor: "pointer"})
  .addClass("close")
  .click(function(){
    
    if($(this).hasClass('close')){
      $(this)
              .addClass("open")
              .removeClass("close")
              .find('ul').show();
    
    }else{
       $(this)
              .addClass("close")
              .removeClass("open");
      var sousmenus = $("ul",this);
      setTimeout(function(){ sousmenus.hide(); }, 1000);
      
    }
  });
  $('#block-menu-block-3 div.menu-block-3 > ul.menu > li.expanded > a').click(function(e) {
        e.preventDefault();
  });
});





