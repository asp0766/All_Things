// Filter Method on Array of Numbers
const numbers = [-1, 0, -20, 45, 3, 74, -5, 6];

// Filtering positive numbers
const positiveNumbers = numbers.filter(function(number) {
  return number > 0;
});

console.log(positiveNumbers); // Output: [ 45, 3, 74, 6 ]