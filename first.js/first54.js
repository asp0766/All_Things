// Array in JS : -


const myArr = [1,2,3,4,5]
const myHeros = ["shaktiman","naagraj"]

const myArr2 = new Array(1,3,4,5,6,7)
console.log(myArr[0])  // 1


myArr.push(6)
console.log(myArr)            // [ 1, 2, 3, 4, 5, 6 ]

myArr.pop()
console.log(myArr);         // [ 1, 2, 3, 4, 5 ]

myArr.unshift(78)
console.log(myArr);     // [ 78, 1, 2, 3, 4, 5 ]

myArr.shift()
console.log(myArr);   // [ 1, 2, 3, 4, 5 ]

console.log(myArr.includes(8));    // false
console.log(myArr.indexOf(2));    // 1 

const arr1 = [1, 2, 3, 4, 5];
console.log(arr1.slice(1, 4)); // [2, 3, 4]
console.log(arr1); // [1, 2, 3, 4, 5] (unchanged)


const arr = [1, 2, 3, 4, 5];
arr.splice(2, 1); // Removes 1 item at index 2, adds 9 & 10
console.log(arr); // [ 1, 2, 4, 5 ]









