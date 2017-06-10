var Observable = require("FuseJS/Observable");
var Backend = require("./Backend");

var hikes = Observable();

Backend.getHikes()
  .then(function(newHikes){
    hikes.replaceAll(newHikes);
  })
  .catch(function(error){
    console.log("Couldn't get hikes: " + error);
  });

function updateHike(id, name, loc, dist, rating, comments){
  for (var i = 0; i < hikes.length; i++) {
    var hike = hikes.getAt(i);
    if(hike.id == id){
      hike.name = name;
      hike.loc = loc;
      hike.dist = dist;
      hike.rating = rating;
      hike.comments = comments;
      hikes.replaceAt(i, hike);
      break;
    }
  }

  Backend.updateHike(id, name, loc, dist, rating, comments)
    .catch(function(error){
      console.log("Couldn't update Hike: " + error);
    });
}

module.exports = {
  hikes: hikes,
  updateHike: updateHike
}
