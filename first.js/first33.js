//  changing properties in object 


let person = {
    name: "Mayank",
    age: 21,
    country: "India"
};

// Adding a property
person.isSleeping = false;

// Modifying a property
person.age = 22;

// Deleting a property
delete person.country;

console.log(person);

// Output : { name: 'Mayank', age: 22, isSleeping: false }