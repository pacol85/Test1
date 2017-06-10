var hikes = [
   {
      id: 0,
      name: "Tricky Trails",
      loc: "Lakebed, Utah",
      dist: 10.4,
      rating: 4,
      comments: "This hike was nice and hike-like. Glad I didn't bring a bike."
   },
   {
      id: 1,
      name: "Mondo Mountains",
      loc: "Black Hills, South Dakota",
      dist: 20.86,
      rating: 3,
      comments: "Not the best, but would probably do again. Note to self: don't forget the sandwiches next time."
   },
   {
      id: 2,
      name: "Pesky Peaks",
      loc: "Bergenhagen, Norway",
      dist: 8.2,
      rating: 5,
      comments: "Short but SO sweet!!"
   },
   {
      id: 3,
      name: "Rad Rivers",
      loc: "Moriyama, Japan",
      dist: 12.3,
      rating: 4,
      comments: "Took my time with this one. Great view!"
   },
   {
      id: 4,
      name: "Dangerous Dirt",
      loc: "Cactus, Arizona",
      dist: 19.34,
      rating: 2,
      comments: "Too long, too hot. Also that snakebite wasn't very fun."
   }
   ];



function getHikes(){
  return new Promise(function(resolve, reject){
    setTimeout(function(){
      resolve(hikes);
    }, 0); //instead of 500 for the test
  });
}

function updateHike(id, name, loc, dist, rating, comments){
  return new Promise(function(resolve, reject){
    setTimeout(function(){
      for (var i = 0; i < hikes.length; i++) {
        var hike = hikes[i];
        if(hike.id == id){
          hike.name = name;
          hike.loc = loc;
          hike.dist = dist;
          hike.rating = rating;
          hike.comments = comments;
          break;
        }
      }

      resolve();
    }, 0);
  });
}


module.exports = {
  getHikes: getHikes,
  updateHike: updateHike
}
