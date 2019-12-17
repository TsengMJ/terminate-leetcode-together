package main

import (
	"fmt"
)

func main() {
	test := []int{1, 5, 2, 3, 7, 9, 55, 32, 4}
	fmt.Println(FindKthLargest(test, 5))
}

func FindKthLargest(nums []int, k int) int {
	// Version 3
	length := len(nums)
	for i := len(nums)/2 - 1; i >= 0; i-- {
		MaxHeapifyV2(nums, i, length)
	}

	for i := length - 1; i > length-k; i-- {
		nums[0], nums[i] = nums[i], nums[0]
		MaxHeapifyV2(nums, 0, i)
	}
	return nums[0]

	// Version 2
	// lastIndex := len(nums) - 1
	// var KthLargestNum int
	// for i := 0; i < k; i++ {
	// 	MaxHeapifyV1(nums, lastIndex)
	// 	KthLargestNum = nums[0]
	// 	nums[0], nums[lastIndex] = nums[lastIndex], nums[0]
	// 	lastIndex--
	// }

	// return KthLargestNum

	// Version 1
	// sort.Ints(nums)

	// return nums[len(nums)-k]
}

func MaxHeapifyV2(nums []int, index int, length int) {
	// Version 3
	largetNumIndex := index
	leftIndex := index*2 + 1
	rightIndex := index*2 + 2

	if leftIndex < length && nums[leftIndex] > nums[index] {
		largetNumIndex = leftIndex
	}

	if rightIndex < length && nums[rightIndex] > nums[largetNumIndex] {
		largetNumIndex = rightIndex
	}

	if largetNumIndex != index {
		nums[index], nums[largetNumIndex] = nums[largetNumIndex], nums[index]

		MaxHeapifyV2(nums, largetNumIndex, length)
	}
}

// func MaxHeapifyV1(nums []int, lastIndex int) []int {
// 	// Version 2
// 	for {
// 		parentIndex := (lastIndex - 1) / 2
// 		if parentIndex < 0 {
// 			return nums
// 		}

// 		if nums[parentIndex] < nums[lastIndex] {
// 			nums[parentIndex], nums[lastIndex] = nums[lastIndex], nums[parentIndex]
// 		}

// 		lastIndex--
// 	}

// 	return nums
// }
