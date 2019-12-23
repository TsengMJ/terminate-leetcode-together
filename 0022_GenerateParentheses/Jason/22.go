package main

import "fmt"

func main() {
	fmt.Println(GenerateParenthesis(53))
}

func GenerateParenthesis(n int) []string {
	// Version 2
	return generate(n, n, n, "")

	// Version 1
	// if n == 0 {
	// 	return []string{""}
	// }

	// result := []string{}
	// str := "("
	// testParenthesis(str, n, &result)

	// return result
}

// Version 2
func generate(n int, leftNum int, rightNum int, str string) []string {
	if leftNum == 0 && rightNum == 0 {
		return []string{str}
	}

	res := []string{}
	if leftNum != 0 {
		res = append(res, generate(n, leftNum-1, rightNum, str+"(")...)
	}

	if leftNum < rightNum {
		res = append(res, generate(n, leftNum, rightNum-1, str+")")...)
	}

	return res
}

// Version 1
func isValid(str string) int {
	count := 0
	for _, word := range str {
		if string(word) == "(" {
			count++
		} else {
			count--
		}

		if count < 0 {
			return count
		}
	}

	return count
}

func testParenthesis(str string, n int, result *[]string) {
	length := len(str)
	if length == n*2 {
		if isValid(str) == 0 {
			*result = append(*result, str)
		}
		return
	}

	tmp := str + "("
	count := isValid(tmp)
	if count >= 0 && count <= n {
		testParenthesis(tmp, n, result)
	}

	tmp2 := str + ")"
	count = isValid(tmp2)
	if count >= 0 && count <= n {
		testParenthesis(tmp2, n, result)
	}
}
