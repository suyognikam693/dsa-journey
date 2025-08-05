// Problem: Container With Most Water
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Two Pointers, Greedy
// Approach: Use two pointers from both ends, move the shorter line inward to maximize area

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size() - 1;
        int max = 0;
        int min = 0;

        while (l < r) {
            min = heights[l] < heights[r] ? heights[l] : heights[r];
            if (min * (r - l) > max) {
                max = min * (r - l);
            }
            if (heights[l] < heights[r]) {
                l++;
            } else {
                r--;
            }
        }
        return max;
    }
};
