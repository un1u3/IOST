package main

import "fmt"

func main() {
	// Declare and initialize a single-dimensional array
	var nums = [5]int{10, 20, 30, 40, 50} // Declare an array of size 5 and initialize it with values.
	fmt.Println("Array nums:", nums)      // Prints the entire array.

	// Access and modify array elements using an index
	fmt.Println("First element:", nums[0]) // Access the first element (index 0).
	nums[0] = 100                          // Modify the first element.
	fmt.Println("Modified nums:", nums)    // Prints the updated array.

	// Get the length of the array
	fmt.Println("Length of nums:", len(nums)) // The `len` function returns the size of the array.

	// Iterate over the array using a traditional for loop
	fmt.Println("Iterating with for loop:")
	for i := 0; i < len(nums); i++ { // Loop through the array using indices.
		fmt.Printf("nums[%d] = %d\n", i, nums[i])
	}

	// Iterate over the array using range
	fmt.Println("Iterating with range:")
	for index, value := range nums { // Range provides both index and value.
		fmt.Printf("Index: %d, Value: %d\n", index, value)
	}

	// Multidimensional arrays
	var matrix = [2][3]int{
		{1, 2, 3}, // First row
		{4, 5, 6}, // Second row
	}
	fmt.Println("Matrix:", matrix) // Prints the 2D array.

	// Access and modify elements in a 2D array
	fmt.Println("Element at [1][2]:", matrix[1][2]) // Access the element in the second row, third column.
	matrix[1][2] = 9                                // Modify the element in the second row, third column.
	fmt.Println("Modified Matrix:", matrix)

	// Iterate over a 2D array
	fmt.Println("Iterating over 2D array:")
	for i := 0; i < len(matrix); i++ { // Outer loop for rows.
		for j := 0; j < len(matrix[i]); j++ { // Inner loop for columns.
			fmt.Printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j])
		}
	}
}
