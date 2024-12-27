package main

import "fmt"

// for -> only construct in Go for looping
func main() {
	// while-style loop
	i := 1
	for i <= 3 { // Acts like a while loop; continues until the condition (i <= 3) is false.
		fmt.Println(i) // Prints the current value of i.
		i = i + 1      // Increment i by 1.
	}

	// Infinite loop
	// Uncommenting the following block creates an infinite loop.
	// for {
	// }

	// Traditional for loop example
	for i := 0; i <= 3; i++ { // Initializes i, checks condition, and increments i.
		if i == 2 { // Skips the iteration when i equals 2.
			continue
		}
		fmt.Println(i) // Prints the current value of i (skipping 2 due to the continue statement).
	}

	// Range-based for loop example
	// Correct usage for iterating over a range of values:
	for i := 0; i < 3; i++ { // Corrected to simulate a range loop over integers 0 to 2.
		fmt.Println(i)
	}

	// Alternatively, if iterating over an array or slice:
	arr := []int{10, 20, 30}        // Example slice of integers.
	for index, value := range arr { // Uses range to iterate over the slice.
		fmt.Printf("Index: %d, Value: %d\n", index, value) // Prints index and value.
	}
}
