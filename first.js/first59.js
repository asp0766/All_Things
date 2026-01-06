// Functions And Parameter in JS : - 





function sayMyName(){
        console.log("H");
        console.log("I");
        console.log("T");
        console.log("E");
        console.log("S");
        console.log("H");
}

// sayMyName();



// function addTwoNumbers( number1 , number2 ){
//     console.log(number1 + number2); 
// }
// addTwoNumbers(3,67);


function addTwoNumbers( number1 , number2 ){
        // let result = number1 + number2 ;
        // return result ;

        return number1+number2;
    }

    const result = addTwoNumbers(3,6);
    console.log(result);    


function LoginUser(username){
    if( username === undefined ){
        console.log("give a proper name");
        return   
    }

    return `${username} just logged in `
}
// console.log(LoginUser());   // give a proper name
console.log(LoginUser("Anurag"));   // Anurag just logged in


    