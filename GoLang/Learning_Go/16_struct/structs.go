package main

import (
	"fmt"
	"time"
)

type order struct {
	id        string
	amount    float32
	status    string
	createdAt time.Time //nanosecond precision

	
}

func main() {
	myorder := order{
		id: "1",
		amount: 50,
		status: "received",
		
	}

	fmt.Println("Order Struct ",myorder)

}
