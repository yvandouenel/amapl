jQuery(function($) {
  $('#block-menu-block-3 div.menu-block-3 > ul.menu > li:not(.active-trail)')
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
              .removeClass("open")
              .find('ul').hide();
    }
  });
  $('#block-menu-block-3 div.menu-block-3 > ul.menu > li > a').click(function(e) {
        e.preventDefault();
  });
});





