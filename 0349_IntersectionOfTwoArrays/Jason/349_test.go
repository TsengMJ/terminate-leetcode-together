package main

import (
	"testing"
)

func TestIntersection(t *testing.T) {
	tests := [][][]int{{{1, 2, 2, 1}, {2, 2}}, {{4, 9, 5}, {9, 4, 9, 8, 4}}}
	ans := [][]int{{2}, {4, 9}}
	for i := 0; i < len(tests); i++ {
		for j := 0; j < len(ans[i]); j++ {
			if Intersection(tests[i][0], tests[i][1])[j] != ans[i][j] {
				t.Error("GG")
			}
		}
	}
}
