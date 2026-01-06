// Global and Local scope in JS : - 


// var c = 300
let a = 300

if (true) {
    let a = 10 
    const b = 20 
    console.log("INNER A :" , a);   // 10
    
}

console.log(a);  // not defined  , 300
// console.log(b);  // not defined
// console.log(c);     // 30 


