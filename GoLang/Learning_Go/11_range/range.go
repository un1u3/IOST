package main

import "fmt"

func main() {

	// 1. Using `range` with Arrays:
	// Arrays are fixed-size collections, and `range` returns the index and value of each element.
	arr := [3]int{10, 20, 30}
	fmt.Println("Iterating over array:")
	for index, value := range arr {
		fmt.Println("Index:", index, "Value:", value) // Prints index and value
	}

	// Output:
	// Index: 0 Value: 10
	// Index: 1 Value: 20
	// Index: 2 Value: 30

	// 2. Using `range` with Slices:
	// Slices are flexible and can grow or shrink. `range` works similarly to arrays.
	slice := []string{"apple", "banana", "cherry"}
	fmt.Println("\nIterating over slice:")
	for index, value := range slice {
		fmt.Println("Index:", index, "Value:", value) // Prints index and value
	}

	// Output:
	// Index: 0 Value: apple
	// Index: 1 Value: banana
	// Index: 2 Value: cherry

	// 3. Using `range` with Maps:
	// Maps are unordered key-value pairs. `range` provides both the key and value during iteration.
	m := map[string]int{
		"Alice": 25,
		"Bob":   30,
		"Eve":   22,
	}
	fmt.Println("\nIterating over map:")
	for key, value := range m {
		fmt.Println("Key:", key, "Value:", value) // Prints key and value
	}

	// Output (order is not guaranteed):
	// Key: Alice Value: 25
	// Key: Bob Value: 30
	// Key: Eve Value: 22

	// 4. Using `range` with Strings:
	// Iterating over a string using `range` gives you the index and the Unicode code point (rune) of each character.
	str := "hello"
	fmt.Println("\nIterating over string:")
	for index, char := range str {
		fmt.Printf("Index: %d, Char: %c\n", index, char) // Prints index and character
	}

	// Output:
	// Index: 0, Char: h
	// Index: 1, Char: e
	// Index: 2, Char: l
	// Index: 3, Char: l
	// Index: 4, Char: o

	// 5. Using `range` with Channels:
	// `range` can also be used to receive values from a channel until it's closed.
	ch := make(chan string)

	// Send data into the channel in a separate goroutine
	go func() {
		ch <- "Hello"
		ch <- "World"
		close(ch) // Close the channel after sending values
	}()

	fmt.Println("\nIterating over channel:")
	for message := range ch {
		fmt.Println(message) // Prints each message received from the channel
	}

	// Output:
	// Hello
	// World

	// 6. Using `range` with Blank Identifier:
	// If you only need the value or the key (but not both), you can use the blank identifier `_`.

	// Ignoring the index in arrays/slices:
	fmt.Println("\nIterating over slice and ignoring index:")
	for _, value := range slice {
		fmt.Println("Value:", value) // Only prints value, ignores index
	}

	// Output:
	// Value: apple
	// Value: banana
	// Value: cherry

	// Ignoring the value in maps:
	fmt.Println("\nIterating over map and ignoring value:")
	for key, _ := range m {
		fmt.Println("Key:", key) // Only prints key, ignores value
	}

	// Output:
	// Key: Alice
	// Key: Bob
	// Key: Eve

	// 7. Breaking and Continuing with `range`:
	// You can use `break` to exit the loop early, and `continue` to skip the current iteration.

	fmt.Println("\nUsing break and continue with range:")

	// Example using break:
	fmt.Println("Using break:")
	for index, value := range slice {
		if index == 1 {
			break // Exit the loop when the index is 1
		}
		fmt.Println("Index:", index, "Value:", value)
	}

	// Output:
	// Index: 0 Value: apple

	// Example using continue:
	fmt.Println("\nUsing continue:")
	for index, value := range slice {
		if index == 1 {
			continue // Skip when the index is 1
		}
		fmt.Println("Index:", index, "Value:", value)
	}

	// Output:
	// Index: 0 Value: apple
	// Index: 2 Value: cherry
}
