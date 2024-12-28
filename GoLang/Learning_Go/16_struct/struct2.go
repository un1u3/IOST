package main

import "fmt"

// Define the 'order' struct
type order struct {
	id     string  // ID of the order
	amount float32 // Amount of the order
	status string  // Status of the order
	customer customer // Nested 'customer' struct in the 'order' struct
}

// Define the 'customer' struct
type customer struct {
	name  string // Customer's name
	phone string // Customer's phone number
}

func main() {
	// Create a new 'customer' instance
	newCustomer := customer{
		name:  "Jane",   // Assign name
		phone: "9839",   // Assign phone number
	}

	// Create a new 'order' instance, including the 'customer' struct
	newOrder := order{
		id:      "1",           // Order ID
		amount:  30,            // Order amount
		status:  "received",    // Order status
		customer: newCustomer,  // Assign 'customer' to the order
	}

	// Access and print the order details
	fmt.Println("Order ID:", newOrder.id)
	fmt.Println("Order Amount:", newOrder.amount)
	fmt.Println("Order Status:", newOrder.status)
	fmt.Println("Customer Name:", newOrder.customer.name)  // Access the 'customer' name
	fmt.Println("Customer Phone:", newOrder.customer.phone) // Access the 'customer' phone
}
