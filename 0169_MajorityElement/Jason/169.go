package main

func main() {
}

func MajorityElement(nums []int) int {
	length := len(nums)
	var max int

	dict := make(map[int]int)
	for _, num := range nums {
		if _, ok := dict[num]; !ok {
			dict[num] = 1
		} else {
			dict[num]++
		}

		if dict[num] > length / 2 {
			max = num
			break
		}
	}

	return max
}
