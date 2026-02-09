// Functions with Objects and Array in JS : - 


function calculateCartPrice(...num1){
    return num1;
}
console.log(calculateCartPrice(2 , 4 , 68 , 7, 9 , 89));   // [ 2, 4, 68, 7, 9, 89 ]


const user = {
    username : "Hitesh",
    price : 199
}

function handleObject(anyObject){
    console.log(`Username is ${anyObject.username} and Price is ${anyObject.price}`);
}
 
handleObject(user)   // Username is Hitesh and Price is 199