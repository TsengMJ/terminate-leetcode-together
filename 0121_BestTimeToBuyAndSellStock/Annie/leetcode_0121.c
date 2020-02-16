/**
 * 121. Best Time to Buy and Sell Stock
 * Say you have an array for which the ith element is the price of a given stock on day i.
 * If you were only permitted to complete at most one transaction
 * (i.e., buy one and sell one share of the stock),
 * design an algorithm to find the maximum profit.
 * Note that you cannot sell a stock before you buy one.
 * 
 * Input: [7,1,5,3,6,4]
 * Output: 5
 * Explanation: 
 * Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
 * Not 7-1 = 6, as selling price needs to be larger than buying price.
 *
 * Input: [7,6,4,3,1]
 * Output: 0
 * Explanation: In this case, no transaction is done, i.e. max profit = 0.
 *
 * Runtime: 4 ms, faster than 99.04% of C online submissions for Best Time to Buy and Sell Stock.
 * Memory Usage: 8 MB, less than 77.27% of C online submissions for Best Time to Buy and Sell Stock.
 *
 */

int maxProfit(int* prices, int pricesSize){
    
    int maxprofit = 0;
    int min_price = 0;
    
    for(int i=0;i<pricesSize;i++){
        if(prices[i]-prices[min_price] > maxprofit){
            maxprofit = prices[i] - prices[min_price];
        }
        else if(prices[i]-prices[min_price] <= 0){
            min_price = i;
        }
    }
    return maxprofit;
}