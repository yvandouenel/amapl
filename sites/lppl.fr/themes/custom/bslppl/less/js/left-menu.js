jQuery(function($) {
  $("#block-menu-block-3 div.menu-block-wrapper > ul > li.expanded:not(.active-trail)").each(function(index) {
   $("> ul", $(this)).hide(800);
   $("> a", $(this)).after('<div class="custom-dropdown-icon custom-dropdown-icon-close"></div>');
   $(" > .custom-dropdown-icon", $(this)).click(function(){
     $(this).toggleClass('custom-dropdown-icon-close custom-dropdown-icon-open');
     $(this).next("ul").slideToggle(800);
     return false;
   });
  });

});