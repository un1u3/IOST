//? Objects in JavaScript

// Object Declaration
let person = {
  firstName: "John",
  lastName: "Doe",
  age: 30,
  greet: function () {
    console.log(`Hello, ${this.firstName} ${this.lastName}`);
  },
};

// Access Object Properties
console.log(person.firstName); // Output: John
console.log(person["lastName"]); // Output: Doe

// Add/Modify Properties
person.age = 31;
console.log(person.age);

// Call Object Method
person.greet(); // Output: Hello, John Doe