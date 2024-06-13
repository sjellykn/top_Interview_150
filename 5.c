// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a 
// different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any 
// profit, return 0.

// Example 1:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
// Note that buying on day 2 and selling on day 1 is not allowed because you must buy before you sell.

// Example 2:
// Input: prices = [7,6,4,3,1]
// Output: 0
// Explanation: In this case, no transactions are done and the max profit = 0.

#include <stdio.h>

int maxProfit(int* prices, int pricesSize) {
    int min_num = prices[0];
    int max_profit = 0;

    for(int i = 1; i < pricesSize; i++){
        if (prices[i] < min_num)
            min_num = prices[i];
        else if (prices[i] - min_num > max_profit)
            max_profit = prices[i] - min_num;
    }
    return (max_profit);
}

int main() {
    int nums[] = {7, 5, 2, 6, 5, 1, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    int result = maxProfit(nums, numsSize);
    printf("Max profit is %d\n", result);

    return 0;
}