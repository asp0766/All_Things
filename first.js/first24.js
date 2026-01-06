//  If else statements

let speed = 87;

if(speed > 90){
    console.log("OverSpeeding");
}

if(speed > 50 && speed <=90){
    console.log("Normal");
}

if(speed <= 50){
    console.log("Slow");
}



// Another example

let myAge = 15;

if(myAge >= 18){
    console.log("I can Drive");
}else{
    console.log("Cannot Drive");
}




// Elif statements
let weight = 65;

if (weight > 70) {
    console.log("You are Overweight");
} else if (weight > 50 && weight <= 70) {
    console.log("You are Fit");
} else {
    console.log("You are Underweight");
}

