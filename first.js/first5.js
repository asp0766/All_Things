// ARRAY 


const numbers = [1, 2, 3];
console.log(numbers);    // Output: [1, 2, 3]

// Modifying array elements is allowed
numbers.push(4);
console.log(numbers);    // Output: [1, 2, 3, 4]

// Attempting to reassign the variable will throw an error
numbers = []; // Throws TypeError: Assignment to constant variable.
