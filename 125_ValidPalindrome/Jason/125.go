package main

import (
	"fmt"
	"strings"
)

func main() {
	test := "A1Z0za9"
	for i := 0; i<len(test);i++ {
		fmt.Println(test[i])
		}
	fmt.Println(isPalindrome(test))
}

func isPalindrome(s string) bool {
	s = strings.ToUpper(s)
	fmt.Println(s)
	i := 0
	j := len(s) - 1
	for i < j {
		if (s[i] < 65 || s[i] > 122) {
			i++
		}

		if (s[j] < 65 || s[j] > 122) {
			j--
		}

		if s[i] != s[j] {
			return false
		}

		i++
		j--
	}

	return true
}

func Abs(num int) int {
	if (num > 0) {
		return num
	}

	return -num
}
