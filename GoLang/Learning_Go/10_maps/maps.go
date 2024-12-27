package main

import "fmt"

// Maps in Go (also known as hash, object, or dictionary in other languages) are key-value pairs
// They are useful for when you need to quickly look up data based on a unique key.
// Go maps have O(1) time complexity for lookups, insertions, and deletions (on average).

func main() {

	// Creating a map with string keys and string values
	m := make(map[string]string)
	// Alternative initialization: m := map[string]string{"key1": "value1", "key2": "value2"}

	// Inserting data into the map
	m["name"] = "golang"
	// Retrieving a value from the map using the key
	fmt.Println("Name:", m["name"]) // Output: golang

	// Accessing a key that doesn't exist in the map
	// If the key doesn't exist, it returns the zero value of the map's value type (empty string for string, 0 for int, etc.)
	// Here, "phone" does not exist, so it returns an empty string (the zero value for string)
	fmt.Println("Phone:", m["phone"]) // Output: (empty string)

	// Checking if a key exists in the map
	// The second value from a map lookup is a boolean that indicates if the key exists.
	phone, exists := m["phone"]
	fmt.Println("Phone exists:", exists, "Value:", phone) // Output: Phone exists: false Value:

	// Creating another map with string keys and integer values
	n := make(map[string]int)
	n["age"] = 30
	// Printing a value from the second map
	fmt.Println("Age:", n["age"]) // Output: 30

	// Deleting a key-value pair from the map using the delete() function
	// The delete function removes the key-value pair from the map if the key exists.
	delete(m, "name")
	// Printing the map after deletion
	fmt.Println("After deleting 'name' from map m:", m) // Output: map{}

	// Cleaning the second map using delete or other logic
	// Go doesn't have a direct way to "clean" a map, but you can delete keys or reinitialize the map.
	for key := range n {
		delete(n, key)
	}
	// Printing the map after cleaning it
	fmt.Println("After cleaning map n:", n) // Output: map{}

	// Adding more elements to the map
	m["language"] = "Go"
	m["version"] = "1.18"
	fmt.Println("Updated map m:", m)

	// Iterating over the map using a for loop
	// This will print all key-value pairs in the map
	for key, value := range m {
		fmt.Println(key, ":", value)
	}

	// Maps are not ordered, meaning the order of keys returned during iteration is not guaranteed.
	// However, you can access all key-value pairs this way.

	// Updating a value in the map by reassigning it using an existing key
	m["language"] = "Golang"                                   // Updates the value associated with the key "language"
	fmt.Println("Updated 'language' in map m:", m["language"]) // Output: Golang

	// Checking for key existence again after update
	updatedLanguage, exists := m["language"]
	fmt.Println("Updated language exists:", exists, "Value:", updatedLanguage) // Output: Updated language exists: true Value: Golang

}
