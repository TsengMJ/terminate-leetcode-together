package main

import "testing"

import "fmt"

func TestGenerateParenthesis(t *testing.T) {
	tests := []int{0, 1, 2, 3}
	ans := [][]string{
		{""},
		{"()"},
		{"(())", "()()"},
		{"((()))", "(()())", "(())()", "()(())", "()()()"}}

	for index, test := range tests {
		if fmt.Sprint(GenerateParenthesis(test)) != fmt.Sprint(ans[index]) {
			t.Error("Test:", test, "(", GenerateParenthesis(test), ")", "Ans:", ans[index])
		}
	}
}
