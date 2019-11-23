package main

import (
	"fmt"
)

func main() {
	fmt.Println(LengthOfLongestSubstring("abba"))
}

func LengthOfLongestSubstring(s string) int {
	if len(s) < 2 {
		return len(s)
	}

	tmp := make(map[rune]int)
	var startIndex int = 0
	var max int = 0
	var i int = 0
	var char rune
	for i, char = range s {
		if _, ok := tmp[char]; !ok {
			tmp[char] = i
		} else {
			if max < i-startIndex {
				max = i - startIndex
			}

			if startIndex < tmp[char]+1 {
				startIndex = tmp[char] + 1
			}

			tmp[char] = i
		}
	}

	if max < i-startIndex+1 {
		max = i - startIndex + 1
	}

	return max
}
