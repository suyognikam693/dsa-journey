// Problem: Best Time to Buy and Sell Stock
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Array, Greedy
// Approach: Track the minimum price so far and compute the max profit at each step

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0;
        int min = prices[0];
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < min) {
                min = prices[i];
            }
            if (prices[i] - min > max) {
                max = prices[i] - min;
            }
        }
        return max;
    }
};
