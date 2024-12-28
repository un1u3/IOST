package main // Declares the main package, which serves as the entry point for the Go program.

import "fmt" // Imports the "fmt" package for formatted input/output operations.

func main() { // The main function, where the execution starts.

	age := 18 // Declares and initializes the variable `age` with the value 18.

	// if-else block to check adulthood
	if age >= 18 { // Checks if `age` is 18 or older.
		fmt.Println("Person is adult") // Executes if the condition is true.
	} else { // Executes when the `if` condition is false.
		fmt.Println("Person is not adult")
	}

	// Note: In Go, the `if` and `else` blocks must be connected. The `else` must immediately follow the closing brace of the `if` block.

	var role = "admin"         // Declares and initializes the variable `role` with the value "admin".
	var hasPermisssions = true // Declares and initializes the variable `hasPermisssions` with the value `true`.

	// if block with logical operators
	if role == "admin" || hasPermisssions { // Checks if the user is an admin OR has permissions.
		fmt.Println("yes") // Executes if either condition is true.
	}

	// Note: The logical operator `||` represents OR in Go.
}
