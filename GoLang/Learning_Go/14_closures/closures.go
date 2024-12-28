package main

import "fmt"

func main() {
	// Outer variable
	message := "Hello"

	// Closure function capturing `message`
	sayMessage := func() {
		fmt.Println(message) // Access `message` from the outer scope
	}

	sayMessage() // Output: Hello
		
}
