// functions in object


let person = {
    name: "Mayank",
    age: 21,
    country : "India",
    message: function() {
        console.log("Hello, my name is " + this.name);
    }
};

person.message(); 

// Output: Hello, my name is John