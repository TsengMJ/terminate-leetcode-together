package main

import "testing"

func TestIsPalindrome(t *testing.T) {
	tests := []string{"A man, a plan, a canal: Panama", "race a car", "", " ", "1a a1"}
	ans := []bool{true, false, true, true, true}
	for i := 0; i < len(tests); i++ {
		if IsPalindrome(tests[i]) != ans[i] {
			t.Errorf("test: '%t' != ans: '%t'", IsPalindrome(tests[i]), ans[i])
		}
	}
}
