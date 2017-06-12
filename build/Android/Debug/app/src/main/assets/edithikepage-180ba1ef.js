//var Observable = require("FuseJS/Observable");
var Context = require("Modules/Context");

var hike = this.Parameter;//Observable();
var name = hike.map(function(x) { return x.name; });//Observable("");
var loc = hike.map(function(x) { return x.loc; });//Observable("");
var dist = hike.map(function(x) { return x.dist; });//Observable("0.0");
var rating = hike.map(function(x) { return x.rating; });//Observable("0");

var comments = hike.map(function(x) { return x.comments; });//Observable("...");

module.exports = {
   name: name,
   loc: loc,
   dist: dist,
   rating: rating,
   comments: comments,

   save: save,
   cancel: cancel
};

function save(){
   Context.updateHike(hike.value.id, name.value, loc.value, dist.value, rating.value, comments.value);
   router.goBack();
}

function cancel(){
  //refresh hike value to reset dependent Observables values
  hike.value = hike.value;
  router.goBack();
}
