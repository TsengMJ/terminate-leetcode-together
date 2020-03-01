package main

import "testing"

func TestClimbStairs(t *testing.T) {
	tests := []int{2, 3, 45}
	ans := []int{2, 3, 1836311903}
	for i, test := range tests {
		actual := climbStairs(test)
		if actual != ans[i] {
			t.Error(actual, "!=", ans[i])
		}
	}
}
