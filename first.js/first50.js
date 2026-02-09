// Stack(Primitive) and Heap(Non-Primitive) memory in JS : -


let myYoutubename = "hiteshchoudharydotcom"
let anothername = myYoutubename
anothername = "chai aur code"
console.log(myYoutubename);  // hiteshchoudharydotcom
console.log(anothername);  // chai aur code

let user1 = {
    email : "user1234@gmail.com",
    upi: "qwre34@ybl"
}



let user2 = user1

user2.email = "qwertyuiop@yahoo.com" ;

console.log(user1);
console.log(user2);






