//---2019.10.21----------------------------

package main

import (
	"fmt"
	"time"
)

func main() {
	start := time.Now()

	input := "(("
	fmt.Println(isValid(input))

	fmt.Println(time.Since(start))
}

func isValid(s string) bool {
	if len(s) == 1 {
		return false
	}
	var preString = []string{}
	var sample = map[string]string{
		")": "(",
		"]": "[",
		"}": "{",
	}

	for _, word := range s {
		value, ok := sample[string(word)]
		if !ok {
			preString = append(preString, string(word))
		} else if len(preString) == 0 {
			return false
		} else if value != preString[len(preString)-1] {
			return false
		} else {
			preString = preString[:len(preString)-1]
		}
	}

	if len(preString) != 0 {
		return false
	}

	return true
}
