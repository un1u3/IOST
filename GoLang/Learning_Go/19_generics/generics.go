package main

import "fmt"

func printSlice(items []string) {
	for _, item := range items {
		fmt.Println(item)

	}
}


type Stack struct {
	element []int



}


func main() {

	myStack := Stack{
		element: : []int{1,2,3},
	} 




	names := []string("folang","TS")
	printSlice(names)

}