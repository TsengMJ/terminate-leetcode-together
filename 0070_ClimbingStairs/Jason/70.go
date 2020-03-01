package main

import "fmt"

func main() {
	fmt.Println(climbStairs(45))
}

func climbStairs(n int) int {
	// Map
	tmp := make(map[int]int)
	return climb(n, tmp)
	// Recursive -> Time Limit Exceeded
	// if n < 4 {
	// 	return n
	// }
    
    // return climbStairs(n-1) + climbStairs(n-2)
}

func climb(n int, tmp map[int]int) int {
	if num, ok := tmp[n]; ok {
		return num
	}

	if n < 4 {
		return n
	}

	result := climb(n-1, tmp) + climb(n-2, tmp)
	tmp[n] = result
	return result
}
