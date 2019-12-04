package main

import (
	"math"
)

func main() {

}

func SortedSquares(A []int) []int {
	// Version 2 (Small -> Big)
	minIndex := 0
	for i := range A {
		if math.Abs(float64(A[i])) < math.Abs(float64(A[minIndex])) {
			minIndex = i
		}
	}

	var length int = len(A)
	i := minIndex - 1
	j := minIndex + 1
	result := []int{A[minIndex] * A[minIndex]}
	var left int
	var right int

	for i > -1 && j < length {
		left = A[i] * A[i]
		right = A[j] * A[j]
		if left < right {
			result = append(result, left)
			i--
		} else if right < left {
			result = append(result, right)
			j++
		} else {
			result = append(result, left, right)
			i--
			j++
		}
	}

	for ; j < length; j++ {
		result = append(result, A[j]*A[j])
	}
	for ; i >= 0; i-- {
		result = append(result, A[i]*A[i])
	}
	return result

	// Version 1 (Big -> Small)
	// i := 0
	// j := len(A) - 1
	// result := []int{}
	// var left int = A[i] * A[i]
	// var right int = A[j] * A[j]
	// for i < j {
	// 	if left > right {
	// 		result = append(result, left)
	// 		i++
	// 		left = A[i] * A[i]
	// 		continue
	// 	}

	// 	if right > left {
	// 		result = append(result, right)
	// 		j--
	// 		right = A[j] * A[j]
	// 		continue
	// 	}

	// 	result = append(result, left, right)
	// 	i++
	// 	j--
	// 	left = A[i] * A[i]
	// 	right = A[j] * A[j]
	// }

	// if i == j {
	// 	result = append(result, A[i]*A[i])
	// }

	// for i, j = 0, len(A)-1; i < j; i, j = i+1, j-1 {
	// 	result[i], result[j] = result[j], result[i]
	// }

	// return result
}
