// Left Shift (<<)


// Left shift operator is denoted by '<<'. It shifts the bits of the left operand to the left, by a number of positions specified by the right operand. 0 comes in the place of the least significant bit after each shifting is done.

let num1 = 5;
// Binary representation of 5 : 0 0 0 0 1 0 1

let num2 = 8;
// Binary representation of 7 : 0 0 0 1 0 0 0

console.log(num1 << 3);     // 40
console.log(num2 << 2);     // 32