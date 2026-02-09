// Objects in JS :  -


// const tinderUser  = new Object()
const tinderUser = {}
console.log(tinderUser);  // {}

tinderUser.id = "1556eev" 
tinderUser.name = "ASP" 
tinderUser.isLoggedIn = false 
console.log(tinderUser)


const regularUser = {
    email : "asp0766@gmail.com" , 
    fullname : {
        userfullname : {
            firstname : "Anurag ",
            lastname : "Parmar"
        }
    }
}

console.log(regularUser.fullname?.userfullname.lastname);  // Parmar   // ? ternary Operator using if False


const obj1 = { 1 : "a" , 2 : "b"}
const obj2 = { 3 : "a" , 4 : "b"}
const obj3 = { 5 : "a" , 6 : "b"}
// const obj4 = {obj1 , obj2 }
// console.log(obj4);    // { obj1: { '1': 'a', '2': 'b' }, obj2: { '3': 'a', '4': 'b' } }


// const obj4 = Object.assign(obj1  , obj2)
// console.log(obj4);    //  { '1': 'a', '2': 'b', '3': 'a', '4': 'b' }

const obj5 = Object.assign({} , obj1 , obj2 , obj3)  // { '1': 'a', '2': 'b', '3': 'a', '4': 'b', '5': 'a', '6': 'b' }
console.log(obj5);

const obj6 = {... obj1, ...obj2}
console.log(obj6);    // { '1': 'a', '2': 'b', '3': 'a', '4': 'b' }








