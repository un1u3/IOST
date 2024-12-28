package main

import "fmt"

type payment struct {
}

func (p payment) makePayment(amount float32) {
	// logic
	razorPaymentG2 := razorpay{}
	razorPaymentG2.pay(amount)

}

type razorPay struct{}

func (r razorPay) pay(amount float32) {
	// logic to make payment
	fmt.Println("PAYMENT USING RAZOR PAY ")
}



type stripe struct {}

func (s stripe) pay (amount float32){
	fmt.Println("AMount:"amoamount)
}
func main() {
	newPayment := payment{}
	newPayment.makePayment(100)


}