package main

import "fmt"

// Structs in Go are used to define complex data types.
// They can hold multiple fields with different data types.

// Define a struct named 'Person'
type Person struct {
    FirstName string  // String field for first name
    LastName  string  // String field for last name
    Age       int     // Integer field for age
    Email     string  // String field for email address
}

// Define a struct named 'Address' to represent an address
type Address struct {
    Street  string  // Street address
    City    string  // City name
    Country string  // Country name
    ZipCode string  // Postal code
}

// Define a struct named 'Employee' that includes 'Person' and 'Address' structs
type Employee struct {
    Person  // Embedded struct (inherits fields from Person)
    Address // Embedded struct (inherits fields from Address)
    JobTitle string  // String field for job title
    Salary   float64 // Float field for salary
}

func main() {
    // Create an instance of 'Person' struct
    person := Person{
        FirstName: "John",
        LastName:  "Doe",
        Age:       30,
        Email:     "john.doe@example.com",
    }

    // Create an instance of 'Address' struct
    address := Address{
        Street:  "123 Elm St",
        City:    "Somewhere",
        Country: "Wonderland",
        ZipCode: "12345",
    }

    // Create an instance of 'Employee' struct
    employee := Employee{
        Person:  person,      // Assign 'person' struct to 'Person' field
        Address: address,     // Assign 'address' struct to 'Address' field
        JobTitle: "Software Engineer",
        Salary:   100000.00,
    }

    // Access and print the fields of the 'Employee' struct
    fmt.Println("Employee Details:")
    fmt.Println("Name:", employee.FirstName, employee.LastName)
    fmt.Println("Age:", employee.Age)
    fmt.Println("Email:", employee.Email)
    fmt.Println("Address:", employee.Street, employee.City, employee.Country, employee.ZipCode)
    fmt.Println("Job Title:", employee.JobTitle)
    fmt.Println("Salary:", employee.Salary)
}
