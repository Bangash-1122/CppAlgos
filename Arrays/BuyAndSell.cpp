// *****
// LeetCode # 121: Best Time to Buy and Sell Stock
// *****

// You are given an array prices where prices[i] is the price of a given stock on the ith day.
// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
// Time O(n) space O(1)

#include <iostream>
#include <vector>
#include <climits>  // Provides INT_MAX

class Solution {
public:
    int maxProfit(const std::vector<int>& prices) {
        // Lowest stock price encountered so far.
        int minPrice = INT_MAX;

        // Best profit found. Zero means no profitable trade exists.
        int bestProfit = 0;

        for (int price : prices) {
            if (price < minPrice) {
                // A cheaper buying opportunity has been found.
                minPrice = price;
            } else if (price - minPrice > bestProfit) {
                // Selling today after buying at the earlier minimum
                // gives a better profit than any previous transaction.
                bestProfit = price - minPrice;
            }
        }

        return bestProfit;
    }
};

int main() {
    Solution solution;
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Buy at 1, sell later at 6: maximum profit = 5.
    std::cout << solution.maxProfit(prices) << '\n';

    return 0;
};

// example of output:
// Input: prices = [7,1,5,3,6,4]
// Output: 5
// Explanation: Buy on day 2 (price = 1) and sell on day 5 (price = 6), profit = 6-1 = 5.
