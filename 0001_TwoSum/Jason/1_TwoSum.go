package main

import "fmt"

func main() {
	nums := []int{2, 7, 11, 15}
	target := 9
	fmt.Println(twoSum(nums, target))
}

func twoSum(nums []int, target int) []int {
	aMap := make(map[int]int, len(nums))

	for index, num := range nums {
		if value, ok := aMap[target-num]; ok {
			return []int{value, index}
		}
		aMap[num] = index
	}

	return []int{}
}