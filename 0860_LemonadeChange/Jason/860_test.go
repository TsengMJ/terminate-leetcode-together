package main

import "testing"

func TestLemonadeChange(t *testing.T) {
	tests := [][]int{{5, 5, 5}, {5, 5, 10, 20}, {5, 5, 5, 20, 5}, {5, 5, 20, 5}}
	ans := []bool{true, true, true, false}
	for i, test := range tests {
		if LemonadeChange(test) != ans[i] {
			t.Errorf("Error")
		}
	}
}