// Data Types of JavaScript Summary : -
// Primitive 
// 7 types : String , Number , Boolean , null , undefined , Symbol , BigInt

const score = 100
const scoreValue = 100.2

const isLoggedIn = false
const outsideTemp = null
let userEmail;  // undefined

const id = Symbol('123')
const anotherid = Symbol('123')

console.log(id == anotherid);  //false

const bigNumber  = 33545566764342335467n


// Reference Type / Non-Primotive 
// Arrays , Objects , Functions 

const heros = ["shaktiman" , "naagraj" , "doga"]

let myObj = {
    name : "asp",
    age : 18 
}

const myfunction() = function(){
    console.log("Hello World!");
    
}

console.log(typeof bigNumber);  // bigint


