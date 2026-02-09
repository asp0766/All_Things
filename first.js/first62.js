// Scope Level And Mini Hosting in JS : -


function one(){
    const username = "hitesh"

    function two(){
        const website = "youtube"
        console.log(username);
    }
    // console.log(website);  // agar is line me error aata h to agli line execute nhi hogi 

    two()  // hitesh    
    
}

one()






if (true) {
    const username = "asp"

    if (username === "asp") {
        const website = " youtube"
        console.log(username+website);   // asp youtube
    
    }

    // console.log(website);   // line by line code run ho rha h isliye error aayega because website scope level variable h 
    
}

// console.log(username);     // line by line code run ho rha h isliye error aayega because website scope level variable h 



console.log(addone(5))   // 6  
function addone(num){
    return num + 1
}


addtwo(5)  // not print because call but not print  , Cannot access 'addtwo' before initialization
const addtwo = function(num){
    return num + 2
}


