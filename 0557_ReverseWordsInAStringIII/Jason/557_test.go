package main

import "testing"

func TestReverseWords(t *testing.T) {
	tests := []string{"Let's take LeetCode contest", "", " ", "hello world ", "ab", "a"}
	ans := []string{"s'teL ekat edoCteeL tsetnoc", "", "", "olleh dlrow", "ba", "a"}
	for i := 0; i < len(tests); i++ {
		if ReverseWords(tests[i]) != ans[i] {
			t.Errorf("test: '%s' != ans: '%s'", ReverseWords(tests[i]), ans[i])
		}
	}
}
