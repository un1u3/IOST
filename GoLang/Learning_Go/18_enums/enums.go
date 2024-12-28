package main

import "fmt"

// enumerated types

type OrderStatus string
const (
	Received OrderStatus = "received"
	Confirmed = "confiremed"
	Prepared  = "prepare"
	Delivered  = "Delivered"

)

func changeOrderStatus(status string){
	fmt.Println("Changing order status to ",status)

}
func main() {

	changeOrderStatus(string(Received))
	

}