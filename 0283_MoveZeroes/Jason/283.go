package main

func main() {
}

func MoveZeroes(nums []int) {
	// Version 2
	j := 0
	for i := 0; i < len(nums); i++ {
		if nums[i] != 0 {
			if i != j {
				nums[j] = nums[i]
			}
			j++
		}
	}

	for ; j < len(nums); j++ {
		nums[j] = 0
	}

	// Version 1
	// length := len(nums)
	// current := 0
	// for i := 0; i < length; i++ {
	//     if nums[i] != 0 {
	//         nums[current], nums[i] = nums[i], nums[current]
	//         current++
	//     }
	// }
}
