// Immediately Invoked Function Expressions ( IIFE ) : -


function chai(){
    console.log(`DB CONNECTED`);
    
}
chai()  // DB CONNECTED


(function chai(){
    console.log(`DB CONNECTED`);
    
}) ();   // DB CONNECTED   , wrap the whole functio in parenthess blocks , semiclon after the code is very important






(  function aurcode()  {                         // Named IIFE 
    console.log("DB CONNECTED 2");               // DB CONNECTED 2
})()


((name) => {
    console.log(`DB CONNECTED ${name}`);    // Parametrized IIFE 
})("ASP")                                  // DB CONNECTED ASp
                                                 
 