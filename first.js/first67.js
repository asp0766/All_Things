// For Loop With Break And Continue In JS : -


// For Loop : -

for (let index = 0; index < 10; index++) {
    const element = index;
    if (element == 5  ) {
        console.log("Five is Best");
        // break     // stop th loop when loop reaches at 5 and 5 is not print
        continue    // skip 5 and print all numbers
    }
    console.log(element);   
}


for (let i = 0; i <=10; i++) {
    console.log(`Outer Loop Value :${i}`);
    for (let j = 0; j <=10;  j++) {
        console.log(`Inner Loop value ${j} and Inner Loop ${i}`);    
        
        console.log(i + " X " + j + " = " + i*j);
        
    }   
}


let myarr = ["Anurag", "is " , "a" , "good ","boy"];
for (let  i = 0; i < myarr.length; i++) {
    const element = myarr[i];
    console.log(element);
    
    
}