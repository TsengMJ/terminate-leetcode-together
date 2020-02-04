package main

import (
	"fmt"
	"testing"
)

func TestFindDisappearedNumbers(t *testing.T) {
	tests := [][]int{{1, 2, 3, 3, 4}, {4, 3, 2, 7, 8, 2, 3, 1}}
	ans := [][]int{{5}, {5, 6}}
	for i, test := range tests {
		actual := FindDisappearedNumbers(test)
		s := fmt.Sprint(actual)
		r := fmt.Sprint(ans[i])
		if s != r {
			t.Error("Test:", test, ", Actual:", actual, ", Ans:", ans[i])
		}
	}
}
