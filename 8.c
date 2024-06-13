// You are given an integer array prices where prices[i] is the price of a given stock on the ith day.
// On each day, you may decide to buy and/or sell the stock. You can only hold at most one share of 
// the stock at any time. However, you can buy it then immediately sell it on the same day.
// Find and return the maximum profit you can achieve.

// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 7
// Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
// Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
// Total profit is 4 + 3 = 7.

#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int min_num = prices[0];
    int max_profit = 0;

    for(int i = 1; i < pricesSize; i++){
        if (prices[i] < min_num)
            min_num = prices[i];
        if (min_num < prices[i]) {
            max_profit = max_profit + prices[i] - min_num;
            min_num = prices[i];
        }
    }
    return (max_profit);
}

int main() {
    int nums[] = {7, 1, 4, 5, 3, 6, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = maxProfit(nums, numsSize);
    printf("Max profit is %d\n", result);

    return 0;
}
