package main

import "fmt"

func main() {
	// 1. Creating a slice from an array
	arr := [5]int{10, 20, 30, 40, 50}
	slice1 := arr[1:4] // Slice includes elements at index 1, 2, and 3 (20, 30, 40)
	fmt.Println("Slice1:", slice1)

	// 2. Creating a slice directly using make
	slice2 := make([]int, 3, 5) // Creates a slice of length 3 and capacity 5
	fmt.Println("Slice2:", slice2)

	// 3. Appending elements to a slice
	slice2 = append(slice2, 60, 70) // Adding two elements
	fmt.Println("Slice2 after append:", slice2)

	// 4. Slicing a slice
	subSlice := slice2[1:3] // Slice includes elements at index 1 and 2
	fmt.Println("SubSlice:", subSlice)

	// 5. Modifying underlying array through slices
	slice1[0] = 25 // Changes the element in the original array as well
	fmt.Println("Modified Slice1:", slice1)
	fmt.Println("Modified Array:", arr)

	// 6. Checking length and capacity of a slice
	fmt.Println("Length of Slice2:", len(slice2))
	fmt.Println("Capacity of Slice2:", cap(slice2))

	// 7. Iterating over a slice
	for i, v := range slice1 {
		fmt.Printf("Index: %d, Value: %d\n", i, v)
	}

	// 8. Copying a slice
	dest := make([]int, len(slice1)) // Destination slice with enough space
	copy(dest, slice1)               // Copy elements from slice1 to dest
	fmt.Println("Copied Slice:", dest)

	// 9. Slices of strings
	strSlice := []string{"apple", "banana", "cherry"}
	fmt.Println("String Slice:", strSlice)

	// 10. Zero-value of a slice
	var nilSlice []int // A nil slice has no elements and a capacity of 0
	fmt.Println("Nil Slice:", nilSlice, len(nilSlice), cap(nilSlice))

	// 11. Comparing slices
	// Slices cannot be compared directly, except to check if they're nil
	fmt.Println("Is nilSlice nil?", nilSlice == nil)

	// Example to illustrate capacity doubling
	slice3 := []int{}
	fmt.Println("\nInitial Capacity of slice3:", cap(slice3))
	for i := 0; i < 10; i++ {
		slice3 = append(slice3, i)
		fmt.Printf("After appending %d: Length = %d, Capacity = %d\n", i, len(slice3), cap(slice3))
	}
}
