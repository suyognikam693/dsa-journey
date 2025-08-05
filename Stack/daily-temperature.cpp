// Problem: Daily Temperatures
// Platform: NeetCode
// Source: NeetCode 150
// Topic: Monotonic Stack
// Approach: Use a stack to keep indices of decreasing temperatures. For each temperature,
// pop from the stack until a higher temperature is found and update the result with the day difference.

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        std::stack<int> stack;
        std::vector<int> ans(n, 0);

        for (int i = 0; i < n; i++) {
            while (!stack.empty() && temperatures[i] > temperatures[stack.top()]) {
                int prev = stack.top();
                stack.pop();
                ans[prev] = i - prev;
            }
            stack.push(i);
        }

        return ans;
    }
};
