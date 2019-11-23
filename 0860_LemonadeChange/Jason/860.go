package main

func LemonadeChange(bills []int) bool {
	// Version 2
	five := 0
	ten := 0
	for _, bill := range bills {
		if bill == 5 {
			five++
		} else if bill == 10 {
			five--
			ten++
		} else {
			if ten > 0 {
				ten--
				five--
			} else {
				five -= 3
			}
		}

		if five < 0 {
			return false
		}
	}

	return true

	// Version 1
	// changes := []int{0, 0, 0}
	// for _, bill := range bills {
	// 	switch bill {
	// 	case 5:
	// 		changes[0]++

	// 	case 10:
	// 		if changes[0] == 0 {
	// 			return false
	// 		}
	// 		changes[1]++
	// 		changes[0]--

	// 	case 20:
	// 		if changes[1] != 0 && changes[0] != 0 {
	// 			changes[1]--
	// 			changes[0]--
	// 			continue
	// 		} else if changes[0] >= 3 {
	// 			changes[0] -= 3
	// 			continue
	// 		}

	// 		return false
	// 	}
	// }

	// return true
}
