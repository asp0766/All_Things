// Object in JS : - 
// Singleton 

// Object literals 

const mySym = Symbol("key1")

const JsUser = {
    name : "Asp" , 
    "Other Name " : "Anurag Parmar ", 
    [mySym] : "key1" , 
    age : "18" , 
    location : "Roorkee" , 
    email : " xyz123@gmail.com" , 
    isLoggedIn : false , 
    lastLoginDays : ["Monday" , " Friday "]
}

console.log(JsUser.name);
console.log(JsUser["name"]); 
console.log(JsUser["Other Name"]) 
console.log(typeof JsUser.mySym)  // String but we want Symbol 

console.log(JsUser[mySym])

JsUser.email = "abc13546@gmail.com"

console.log(JsUser.email);    // abc13546@gmail.com

// Object.freeze(JsUser);   // Object.freeze(obj) makes an object immutable, preventing additions, deletions, or modifications to its propertie
console.log(JsUser);



JsUser.greeting = function(){
    console.log("Hi Welcome...!"); 
}

console.log(JsUser.greeting);  // [Function (anonymous)]
console.log(JsUser.greeting());  // Hi Welcome...!


JsUser.greetingTwo = function(){
    console.log(`Hi Welcome Once Again, ${this.name}...!`); 
}
console.log(JsUser.greetingTwo());  // Hi Welcome Once Again, Asp...!











