package main

import "testing"

func TestMajorityElement(t *testing.T) {
	tests := [][]int{{3, 2, 3}, {2, 2, 2, 1, 1, 1, 2, 2}, {1, 1}, {2}}
	ans := []int{3, 2, 1, 2}
	for index, test := range tests {
		if MajorityElement(test) != ans[index] {
			t.Error(MajorityElement(test), "!=", ans[index])
		}
	}
}
