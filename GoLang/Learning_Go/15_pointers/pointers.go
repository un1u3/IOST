package main

import "fmt"

// Example 1: Basic Pointers
func main() {
	num := 42
	ptr := &num // Get the pointer to num

	fmt.Println("Address of num:", ptr)    // Memory address
	fmt.Println("Value at address:", *ptr) // Dereference to get the value

	*ptr = 100                                // Modify value through pointer
	fmt.Println("Updated value of num:", num) // Output: 100
}

// Example 2: Pointers in Functions
func modifyValue(numPtr *int) {
	*numPtr = *numPtr * 2 // Modify the value at the pointer
}

func functionWithPointer() {
	x := 10
	fmt.Println("Before:", x)
	modifyValue(&x)          // Pass address of x
	fmt.Println("After:", x) // Output: 20
}

// Example 3: Pointers to Structs
type Person struct {
	name string
	age  int
}

func structPointerExample() {
	p := Person{name: "Alice", age: 30}
	ptr := &p // Pointer to struct

	ptr.age = 31                       // Modify age via pointer
	fmt.Println("Updated age:", p.age) // Output: 31
}

// Example 4: Zero Value of Pointers
func zeroValuePointer() {
	var ptr *int                       // Nil pointer
	fmt.Println("Pointer value:", ptr) // Output: <nil>
}

// Example 5: Pointer Arrays
func pointerArrayExample() {
	numbers := [3]int{10, 20, 30}
	pointers := [3]*int{}

	for i := 0; i < len(numbers); i++ {
		pointers[i] = &numbers[i] // Store address of each element
	}

	for _, ptr := range pointers {
		fmt.Println(*ptr) // Dereference to access the value
	}
}

// Example 6: Pointer to Pointer
func pointerToPointerExample() {
	x := 10
	ptr1 := &x
	ptr2 := &ptr1 // Pointer to pointer

	fmt.Println("Value of x:", **ptr2) // Dereference twice to get x
}

// Example 7: Pointers with Slices
func modifySlice(s []int) {
	s[0] = 10 // Modify the slice directly
}

func slicePointerExample() {
	slice := []int{1, 2, 3}
	modifySlice(slice)                    // Modify slice in function
	fmt.Println("Modified slice:", slice) // Output: [10, 2, 3]
}

func main() {
	functionWithPointer()
	structPointerExample()
	zeroValuePointer()
	pointerArrayExample()
	pointerToPointerExample()
	slicePointerExample()
}
