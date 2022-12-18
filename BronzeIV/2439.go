package main

import "fmt"

func main() {
	var n int
	fmt.Scanf("%d", &n)
	for i := 1; i <= n; i++ {
		for j := n - i; j > 0; j-- {
			fmt.Print(" ")
		}
		for k := 1; k <= i; k++ {
			fmt.Print("*")
		}
		fmt.Print("\n")
	}
}
