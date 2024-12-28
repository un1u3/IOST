package main

import "fmt"

// Variadic function to calculate the sum of numbers
func sum(numbers ...int) int {
	total := 0
	// `numbers` is a slice; we can iterate over it
	for _, num := range numbers {
		total += num // Add each number to the total
	}
	return total // Return the total sum
}

func main() {
	// Calling the variadic function with different numbers of arguments
	fmt.Println(sum(1, 2, 3))    // Output: 6
	fmt.Println(sum(4, 5, 6, 7)) // Output: 22
	fmt.Println(sum())           // Output: 0 (no arguments)

	// Passing a slice to a variadic function
	nums := []int{8, 9, 10}
	fmt.Println(sum(nums...)) // Use `...` to unpack the slice as variadic arguments

	// Variadic function with fixed and variable parameters
	greet("Hello", "Alice", "Bob", "Charlie")

	// Using a variadic function for formatted messages
	log("File %s has size %d bytes", "example.txt", 1024)
}

// Variadic function with a fixed parameter
// `prefix` is fixed, `names` is variadic
func greet(prefix string, names ...string) {
	// `names` is a slice of strings
	for _, name := range names {
		fmt.Println(prefix, name) // Print the prefix and each name
	}
}

// Variadic function to log formatted messages
// Similar to `fmt.Printf`, uses `interface{}` for mixed types
func log(message string, args ...interface{}) {
	// `args` is a slice of empty interfaces
	fmt.Printf(message+"\n", args...) // Format and print the message
}
