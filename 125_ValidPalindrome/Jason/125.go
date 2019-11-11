package main

import (
	"fmt"
	"strings"
)

func main() {
	test := "Azza"
	fmt.Println(IsPalindrome(test))
}

func IsPalindrome(s string) bool {
	// Version 2
	s = strings.ToUpper(s)
	i := 0
	j := len(s) - 1
	for i < j {
		if (s[i] < '0' || s[i] > '9') && (s[i] < 'A' || s[i] > 'Z') {
			i++
			continue
		}

		if (s[j] < '0' || s[j] > '9') && (s[j] < 'A' || s[j] > 'Z') {
			j--
			continue
		}

		if s[i] != s[j] {
			return false
		}

		i++
		j--
	}

	return true

	// Version 1
	// sample := make(map[int]bool)

	// for i := 48; i < 58; i++ {
	// 	sample[i] = true
	// }

	// for i := 65; i < 91; i++ {
	// 	sample[i] = true
	// }

	// s = strings.ToUpper(s)
	// i := 0
	// j := len(s) - 1
	// for i < j {
	// 	number := int(s[i])
	// 	if _, ok := sample[number]; !ok {
	// 		i++
	//         continue
	// 	}

	// 	number = int(s[j])
	// 	if _, ok := sample[number]; !ok {
	// 		j--
	//         continue
	// 	}

	// 	if s[i] != s[j] {
	// 		return false
	// 	}

	// 	i++
	// 	j--
	// }

	// return true
}
