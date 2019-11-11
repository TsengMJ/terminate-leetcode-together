package main

func main() {

}

func Intersection(nums1 []int, nums2 []int) []int {
	// Version 1
	result := []int{}
	tmp := make(map[int]bool)
	nums1Set := []int{}

	for _, num := range nums1 {
		if _, ok := tmp[num]; !ok {
			tmp[num] = false
			nums1Set = append(nums1Set, num)
		}
	}

	for _, num := range nums2 {
		if _, ok := tmp[num]; ok {
			tmp[num] = true
		}
	}

	for _, num := range nums1Set {
		if value, _ := tmp[num]; value {
			result = append(result, num)
		}
	}

	return result
}
