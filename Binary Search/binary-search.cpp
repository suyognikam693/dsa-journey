// Problem: Binary Search
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Binary Search
// Approach: Use classic binary search on a sorted array by checking the middle element and narrowing the search range accordingly.

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (low <= high) {
            int mid = low + (high - low) / 2;
            
            if (nums[mid] == target) {
                return mid;
            } 
            else if (nums[mid] < target) {
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }
        return -1;
    }
};
