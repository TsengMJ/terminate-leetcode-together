package main

func main() {
}

func MaxProfit(prices []int) int {
	start := 0
	max := 0
	for index, price := range prices {
		if price - prices[start] > max {
			max = price - prices[start]
		} else if price < prices[start] {
			start = index
		}
	}

	return max
}
