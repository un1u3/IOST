//? Functions in JavaScript

// Function Declaration
function greet(name) {
  return `Hello, ${name}`;
}

console.log(greet("Alice")); // Output: Hello, Alice

// Function Expression
const add = function (a, b) {
  return a + b;
};

console.log(add(5, 10)); // Output: 15

// Arrow Function
const multiply = (x, y) => x * y;
console.log(multiply(3, 5)); // Output: 15