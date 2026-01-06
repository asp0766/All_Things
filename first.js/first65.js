// How Does JS Execute Code + Call Stack : -


/* Types :- 1. Global Execution Context 
            2. Function Execution Context 
            3. Eval Execution Context 
            
*/


function one(){
    console.log("ONE");
    two();
}
one();


function two(){
    console.log("ONE");
    two();
}
two();


function three(){
    console.log("ONE");
    two();
}