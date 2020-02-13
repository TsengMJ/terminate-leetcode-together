#first solution
#result:
#Runtime Error
#use two for loops to cal the ma benefit
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max = 0
        for i in range(len(prices)):
           for j in range(i + 1, len(prices)):
              if prices[j] > prices[i]:
                    if max < prices[j] - prices[i]:
                        max = prices[j] - prices[i]
        return max

    

#second solution
#result:
#Runtime: 56 ms, faster than 94.88% of Python3 online submissions for Best Time to Buy and Sell Stock.
#Memory Usage: 13.9 MB, less than 62.07% of Python3 online submissions for Best Time to Buy and Sell Stock.
#use one for loop to record the smallest number and cal maximum benefit at the same time, 
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        if len(prices) == 0:
            return 0
        minPrice = prices[0]
        benefit = 0
        for i in prices:
            if i < minPrice:
                minPrice = i
            elif i - minPrice > benefit:
                benefit = i - minPrice
        return benefit


#third solution
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        benefit = 0
        minPrice = float('inf')
        for i in prices:
            if minPrice > i:
                minPrice = i
            else:
                benefit = max(benefit, i - minPrice)
        return benefit

