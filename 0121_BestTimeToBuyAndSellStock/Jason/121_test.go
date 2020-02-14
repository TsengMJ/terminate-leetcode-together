package main

import "testing"

func TestMaxProfit(t *testing.T) {
	tests := [][]int{{7, 1, 5, 3, 6, 4}, {7, 6, 4, 3, 1}, {1, 5, 2, 8}}
	ans := []int{5, 0, 7}
	for index, test := range tests {
		result := MaxProfit(test)
		if result != ans[index] {
			t.Error("[Fail]", test, result, "!=", ans[index])
		}
	}
}
