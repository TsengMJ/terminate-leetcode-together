package main

import (
	"fmt"
	"strings"
	"time"
)

func main() {
	start := time.Now()

	test := "Let's take LeetCode contest"
	fmt.Println(ReverseWords(test))

	fmt.Println(time.Since(start))
}

func ReverseWords(s string) string {
	// v2 98.84%
	arr := strings.Split(s, " ")
	resultArr := []string{}

	for _, word := range arr {
		w := []byte(word)
		for i, j := 0, len(w)-1; i < j; i, j = i+1, j-1 {
			w[i], w[j] = w[j], w[i]
		}
		resultArr = append(resultArr, string(w))
	}

	var result string = strings.Join(resultArr, " ")
	if len(result) != 0 && string(result[len(result)-1]) == " " {
		return result[:len(result)-1]
	}

	return result

	// v1 11.56%
	/*result := ""
		eachWord := ""
		for _, word := range s {
			wordString := string(word)
			if wordString == " " {
				result += eachWord + " "
				eachWord = ""
				continue
			}

			eachWord = wordString + eachWord
		}

	    result += eachWord
	    if len(result) != 0 && string(result[len(result)-1]) == " " {
	        result = result[:len(result)-1]
	    }

		return result*/
}
