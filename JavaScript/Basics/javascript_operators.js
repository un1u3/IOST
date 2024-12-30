//? Operators in JavaScript

// 1. Arithmetic Operators
let sum = 10 + 5;    // Addition
let diff = 10 - 5;   // Subtraction
let product = 10 * 2; // Multiplication
let division = 10 / 2; // Division
let remainder = 10 % 3; // Modulo
console.log(sum, diff, product, division, remainder);

// 2. Comparison Operators
console.log(10 > 5);  // true (greater than)
console.log(10 == "10"); // true (loose comparison)
console.log(10 === "10"); // false (strict comparison)

// 3. Logical Operators
console.log(true && false); // false (AND)
console.log(true || false); // true (OR)
console.log(!true);          // false (NOT)

// 4. Assignment Operators
let x = 10;
x += 5; // x = x + 5
console.log(x); // Output: 15