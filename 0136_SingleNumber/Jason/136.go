package main

func main() {

}

func SingleNumber(nums []int) int {
	// Version 2
	var res int
    for _, num := range nums {
		res ^= num
	}

	return res

	// Version 1
	// tmp := make(map[int]int)
	// for _, num := range nums {
	// 	if _, ok := tmp[num]; !ok {
	// 		tmp[num] = 1
	// 		continue
	// 	}

	// 	delete(tmp, num)
	// }

	// var result int
	// for key := range tmp {
	// 	result = key
	// }

	// return result
}
