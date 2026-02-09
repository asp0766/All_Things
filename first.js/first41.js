// Filter Method on Array of Objects
const products = [
    {
        id: 1,
        name: "Product A",
        price: 10 
    },
    {
        id: 2,
        name: "Product B",
        price: 20 
    },
    {
        id: 3,
        name: "Product C",
        price: 30
    },
];

const expensiveProducts = products.filter((product) => product.price > 15);

console.log(expensiveProducts);



/////////////////////////////////////////////////
const words = ["apple", "banana", "orange", "grapefruit"];

const longWords = words.filter((word) => word.length > 6);

console.log(longWords); // Output: ["banana", "grapefruit"]