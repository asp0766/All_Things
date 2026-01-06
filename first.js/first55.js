// Array Part 2 : - 


const marvel_heroes = ["thor","ironman","spiderman"]
const dc_heroes = ["superman","flash","batman"]

marvel_heroes.push(dc_heroes);
console.log(marvel_heroes);          // [ 'thor', 'ironman', 'spiderman', [ 'superman', 'flash', 'batman' ] ]
console.log(marvel_heroes[3][1]);   // flash


const all_heroes = marvel_heroes.concat(dc_heroes)
console.log(all_heroes);       // [ 'thor', 'ironman', 'spiderman', 'superman', 'flash', 'batman' ] 


const all_new_heroes = [...marvel_heroes , ...dc_heroes]
console.log(all_new_heroes);     // [ 'thor', 'ironman', 'spiderman', 'superman', 'flash', 'batman' ]









