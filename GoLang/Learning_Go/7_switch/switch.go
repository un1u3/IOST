package main

import (
	"fmt"
	"time"
)

func main() {
	// Simple Switch

	i := 5
	switch i {
	case 1:
		fmt.Println("ONe")
	case 2:
		fmt.Println("Two")
	case 3:
		fmt.Println("Three")
	default:
		fmt.Println("Three")
	}

	// Multiple condition switch

	switch time.Now().Weekday() {
	case time.Saturday, time.Sunday:
		fmt.Println("Its weekend")
	default:
		fmt.Println("Its Workday")
	}

	// Type Switch

	whoAmI := func(i interface{}) {
		switch t := i.(type) {
		case int:
			fmt.Println("Integer")
		case string:
			fmt.Println("String")
		case bool:
			fmt.Println("A boolean ")
		default:
			fmt.Println("Other", t)
		}
	}
	whoAmI(55.55)

}
