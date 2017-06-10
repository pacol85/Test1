//var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");
var hikes = require("hikes");

var hike = this.Parameter;//Observable();
var name = hike.map(function(x) { return x.name; });//Observable("");
var loc = hike.map(function(x) { return x.loc; });//Observable("");
var dist = hike.map(function(x) { return x.dist; });//Observable("0.0");
var rating = hike.map(function(x) { return x.rating; });//Observable("0");

var comments = hike.map(function(x) { return x.comments; });//Observable("...");

//aquí se guardarán los items para el arreglo general
/*var someItems = [];
getItems()
  .then(function(items){
    someItems = items;
  })
  .catch(function(error){
    console.log("Couldn't get the items: " + error);
  });

/*
//actualiza uno de los items de manera asíncrona
updateItem(args)
  .catch(function(error){
    console.log("Couldn't update item: " + error);
  });

  // Returns a Promise that represents an array of item objects
  function getItems() {
    //TODO
  }
  // Returns a Promise that will be fulfilled when the item is updated in the backend
  function updateItem(args) {
    //TODO
  }
*/
module.exports = {
   name: name,
   loc: loc,
   dist: dist,
   rating: rating,
   comments: comments,

   save: save,
   cancel: cancel
};


function chooseHike(arg){
   hike.value = arg.data;
}

function save(){
   Context.updateHike(hike.value.id, name.value, loc.value, dist.value, rating.value, comments.value);
   router.goBack();
}

function cancel(){
  //refresh hike value to reset dependent Observables values
  hike.value = hike.value;
  router.goBack();
}
