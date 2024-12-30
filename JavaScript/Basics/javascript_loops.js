//? Loops in JavaScript

// 1. for loop
for (let i = 0; i < 5; i++) {
  console.log(`i = ${i}`);
}

// 2. while loop
let count = 0;
while (count < 3) {
  console.log(`Count = ${count}`);
  count++;
}

// 3. do-while loop
let i = 0;
do {
  console.log(`i = ${i}`);
  i++;
} while (i < 3);

// 4. forEach (used with arrays)
const cities = ["New York", "London", "Paris"];
cities.forEach((city) => {
  console.log(city);
});