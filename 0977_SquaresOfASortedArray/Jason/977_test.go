package main

import (
	"fmt"
	"log"
	"testing"
)

func TestSortedSquares(t *testing.T) {
	tests := [][]int{{-4, -1, 0, 3, 10}, {-7, -3, 2, 3, 11}, {-1, 0, 1}, {0}, {-1, 1}, {-4, -1, 1, 3}}
	ans := [][]int{{0, 1, 9, 16, 100}, {4, 9, 9, 49, 121}, {0, 1, 1}, {0}, {1, 1}, {1, 1, 9, 16}}
	if len(tests) != len(ans) {
		log.Fatalln("Length don't match")
	}

	for i, test := range tests {
		testString := fmt.Sprint(SortedSquares(test))
		ansString := fmt.Sprint(ans[i])
		if testString != ansString {
			t.Error("[Error]", test, "(", SortedSquares(test), ")", ans[i])
		}
	}
}
