package main

import "fmt"

// 1. Basic Function
// A simple function that adds two integers and returns the result.
func add(a int, b int) int {
	return a + b // Return the sum of a and b
}

// 2. Function with Multiple Parameters
// Function with multiple parameters of the same type (type specified once).
func subtract(a, b int) int {
	return a - b // Return the difference
}

// 3. Function with Multiple Return Values
// This function divides two integers and returns the quotient and remainder.
func divide(a, b int) (int, int) {
	return a / b, a % b // Quotient and remainder
}

// 4. Named Return Values
// Named return values allow for implicit returns.
func divideNamed(a, b int) (quotient, remainder int) {
	quotient = a / b
	remainder = a % b
	return // Implicit return of named values
}

// 5. Variadic Function
// A variadic function accepts a variable number of arguments.
func sum(nums ...int) int {
	total := 0
	for _, num := range nums {
		total += num // Accumulate the sum
	}
	return total
}

// 6. Anonymous Function
// Anonymous functions are functions without a name.
func demonstrateAnonymous() {
	add := func(a, b int) int {
		return a + b // Anonymous function for addition
	}
	fmt.Println(add(3, 5)) // Call the anonymous function
}

// 7. Higher-Order Functions
// Functions can accept other functions as arguments or return functions.
func applyOperation(a, b int, operation func(int, int) int) int {
	return operation(a, b) // Call the passed function
}

// Function that returns another function
func makeMultiplier(factor int) func(int) int {
	return func(x int) int {
		return x * factor // Multiplies input by factor
	}
}

// 8. Defer
// Defer postpones the execution of a function until the surrounding function returns.
func demonstrateDefer() {
	defer fmt.Println("This will execute last") // Deferred statement
	fmt.Println("This will execute first")      // Regular statement
}

// 9. Closures
// Functions can capture and use variables from their surrounding scope.
func demonstrateClosure() {
	base := 10
	increment := func(x int) int {
		return base + x // Use variable from surrounding scope
	}
	fmt.Println(increment(5)) // Outputs 15
}

func main() {
	// Call basic functions
	fmt.Println("Add:", add(10, 5))           // Output: 15
	fmt.Println("Subtract:", subtract(10, 5)) // Output: 5

	// Call a function with multiple returns
	q, r := divide(10, 3)
	fmt.Println("Quotient:", q, "Remainder:", r) // Output: Quotient: 3 Remainder: 1

	// Variadic function example
	fmt.Println("Sum:", sum(1, 2, 3, 4, 5)) // Output: 15

	// Demonstrate anonymous functions
	demonstrateAnonymous()

	// Higher-order function example
	multiply := func(a, b int) int {
		return a * b // Multiply function
	}
	fmt.Println("Product:", applyOperation(3, 4, multiply)) // Output: 12

	// Function returning another function
	double := makeMultiplier(2)
	fmt.Println("Double 5:", double(5)) // Output: 10

	// Demonstrate defer
	demonstrateDefer()

	// Demonstrate closure
	demonstrateClosure()
}
