// Let, const and var ki kahani | chai aur javascript : - 


const accountId = 14453 
let accountEmail = "np6582637@gmail.com"
var accountPassword = "Qwerty@123"  
accountCity = "Jaipur"   
let accountState;  //undefined

// accountId = 2  -  not allowed

accountEmail = "sder332GMAIL.COM"
accountPassword = "456733"
accountCity = "Delhi"
// console.log(accountId)
// console.log(accountEmail)
// console.log(accountPassword)
// console.log(accountCity)

console.table([ accountId , accountEmail , accountPassword , accountCity , accountState ])

/*
prefer not to use var 
because of issue in block scope and  functional scope
*/ 