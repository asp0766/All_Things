// THIS And Arrow Function In JS : -


const user = {
    username : "hitesh",
    price : 999 ,


    welcomeMessage : function() {
        console.log(`${this.username}, welcome to website`);
        console.log(this);    // print the current values 
   
    }

}

user.welcomeMessage()  // hitesh, welcome to website

user.username = "asp";
user.welcomeMessage()  // asp, welcome to website

console.log(this);  // {}



function chai(){
    let username = "asp"
    console.log(this.username); 
}
chai()   // undefined




const chai1 = function(){
    let username = "asp"
    console.log(this.username);  
}
chai1()  // undefined


// Arrow Function  : - 
const chai2 = () => {
    let usename = "Anurag Parmar"
    console.log(this);             // {}
    console.log(this.username);
}
chai2()  // undefined



const add2 = ( num1 , num2 )  => {
    return num1 + num2 
}
console.log(add2(2,3));  // 5




// Implicit Statement : 
const Add2 = ( num1 , num2 ) => num1 + num2 
console.log(Add2(23,12));  //35


const ADDtwo = ( num1 , num2 ) => { username: "ASP" }
console.log(ADDtwo(23,56));  //undefined
console.log(ADDtwo());  //undefined

const ADDTwo = ( num1 , num2 ) => ({ username: "ASP" })
console.log(ADDTwo(23,56));  // { username: 'ASP' }












