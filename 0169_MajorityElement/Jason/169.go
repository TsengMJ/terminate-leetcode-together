package main

func main() {
}

func MajorityElement(nums []int) int {
	dict := make(map[int]int)
	for _, num := range nums {
		if _, ok := dict[num]; !ok {
			dict[num] = 1
		} else {
			dict[num++]
		}
	}

	var max int
	for key, value := range dict {
		if value > len(nums) / 2 {
			max = key
			break
		}
	}

	return max
}
