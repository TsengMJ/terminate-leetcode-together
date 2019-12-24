package main

import "testing"

func TestSingleNumber(t *testing.T) {
	tests := [][]int{{2, 2, 1}, {4, 1, 2, 1, 2}}
	ans := []int{1, 4}
	for index, test := range tests {
		if SingleNumber(test) != ans[index] {
			t.Error("Test:", test, "(", SingleNumber(test), ")", ", Ans:", ans[index])
		}
	}
}
