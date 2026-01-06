// Template Literals
// Template literals are a feature introduced in ECMAScript 2015 (ES6) that provides us more flexible and readable string formatting in JavaScript. Most of the times when we need to use some variable or an expression in a string there we use template literals. They are enclosed within backticks (``) instead of the single('') or double("") quotation marks. Template literals support multi-line strings and allow for easy interpolation of variables and expressions.

let number1 = 10;
let number2 = 20;

let sum = number1 + number2;

console.log(`The sum of ${number1} + ${number2} is equal to ${sum}`);




// Printing multi-line strings
let string1 = "Mai pal do pal ka shayar hoon";

let string2 = "Pal do pal meri kahani hai";

let multiLineString = `
    ${string1},
    ${string2}`

console.log(multiLineString);


