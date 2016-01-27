jQuery(function($){
  console.log("connexion");
  var $_GET = $_GET();
  var login = $_GET['login'];
  var mdp = $_GET['mdp'];
  console.log(login);
  console.log(mdp);
  if(login && mdp){
    $('#edit-name').val(login);
    $('#edit-pass').val(mdp);
    $('#user-login-form').submit();
  }


  function $_GET(param) {
    var vars = {};
    window.location.href.replace(
      /[?&]+([^=&]+)=?([^&]*)?/gi, // regexp
      function( m, key, value ) { // callback
        vars[key] = value !== undefined ? value : '';
      }
    );

    if ( param ) {
      return vars[param] ? vars[param] : null;
    }
    return vars;
  }
});