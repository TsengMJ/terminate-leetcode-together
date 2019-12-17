package main

import "testing"

func TestFindKthLargest(t *testing.T) {
	tests := []Test{
		Test{Nums: []int{3, 2, 1, 5, 6, 4}, K: 2},
		Test{Nums: []int{3, 2, 3, 1, 2, 4, 5, 5, 6}, K: 4},
	}
	ans := []int{5, 4}
	if len(tests) != len(ans) {
		t.Fatal("Length Error")
	}

	for i, test := range tests {
		if FindKthLargest(test.Nums, test.K) != ans[i] {
			t.Error("[Fail] Test:", test, "(", FindKthLargest(test.Nums, test.K), ")", "Ans:", ans[i], "\n")
		}
	}
}

type Test struct {
	Nums []int
	K    int
}
