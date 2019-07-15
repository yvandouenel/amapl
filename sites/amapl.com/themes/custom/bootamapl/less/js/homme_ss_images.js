jQuery(function($){
  const images = [];

  // on stocke les images
  $("#home-ss-illustrations img").each(function(i) {
    images[i] = $(this);
  });

  const nb_img = images.length;

  // on cache toutes les images
  $("#home-ss-illustrations img").hide(0);

  // on choisit au hasard l'image par laquelle commencer
  let first_image_number = getRandomInt($("#home-ss-illustrations img").length);
  function getRandomInt(max) {
    return Math.floor(Math.random() * Math.floor(max));
  }

  // on affiche l'image sélectionnée
  dumNextImage(first_image_number);



  // fonction qui s'appelle de façon récursive pour afficher l'image suivante
  function dumNextImage(img_number) {
    // calcul de l'index de l'image précédente
    let num_img_prev = (img_number-1) >= 0 ? (img_number-1) % nb_img : nb_img - 1
    // cache l'image précédente
    images[num_img_prev].fadeOut(2000);
    // affiche l'image en question
    images[(img_number % nb_img)].fadeIn(2000);
    // rappel de la fonction avec l'image suivante
    setTimeout(function(){
      dumNextImage((img_number % nb_img) +1);
    }, 5000);

  }
});