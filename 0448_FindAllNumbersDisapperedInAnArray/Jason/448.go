package main

func main() {

}

func FindDisappearedNumbers(nums []int) []int {
	// Version 1
	for _, num := range nums {
		if num < 0 {
			num *= -1
		}

		if nums[num-1] > 0 {
			nums[num-1] *= -1
		}
	}

	result := []int{}
	for i, num := range nums {
		if num > 0 {
			result = append(result, i+1)
		}
	}

	return result
}
