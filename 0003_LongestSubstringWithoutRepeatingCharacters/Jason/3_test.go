package main

import "testing"

func TestLengthOfLongestSubstring(t *testing.T) {
	tests := []string{"abcabcbb", "ab", "a", "", "aba", "abb", "aab", "ababcde", "bbbb", "dvdf", "abba", "ababsabababab"}
	ans := []int{3, 2, 1, 0, 2, 2, 2, 5, 1, 3, 2, 3}
	for i, test := range tests {
		if LengthOfLongestSubstring(test) != ans[i] {
			t.Errorf("Test: %s, Ans: %d(%d)\n", test, LengthOfLongestSubstring(test), ans[i])
		}
	}
}
