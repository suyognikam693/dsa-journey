// Problem: Longest Consecutive Sequence
// Platform: Leetcode
// Source: Leetcode #128
// Topic: Arrays, Hashing
// Approach: Use HashSet to store all numbers. For each number, start a streak only if num - 1 is not present.

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int longest = 0;

        for (int num : numSet) {
            // only start sequence if num - 1 is not in the set
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int streak = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentNum++;
                    streak++;
                }

                longest = max(longest, streak);
            }
        }

        return longest;
    }
};
