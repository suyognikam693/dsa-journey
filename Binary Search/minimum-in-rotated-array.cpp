// Problem: Find Minimum in Rotated Sorted Array
// Platform: LeetCode
// Source: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
// Topic: Binary Search, Arrays
// Approach: Use binary search to find the inflection point (smallest element)

class Solution {
public:
    int findMin(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Minimum must be in the left half
            if (nums[mid] > nums[high]) {
                low = mid + 1;
            }
            // Minimum is in the left including mid
            else {
                high = mid;
            }
        }

        return nums[low]; // or nums[high], both point to min
    }
};
