// Problem: Merge Sorted Array
// Platform: LeetCode
// Source: Leetcode
// Topic: Arrays / Two Pointers
// Approach: Start from the end of both arrays using two pointers. Compare and place the larger value at the end of nums1.
//           Continue until all elements from nums2 are merged into nums1.

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m - 1;
        int b = n - 1;
        int k = m + n - 1;
        while (a >= 0 && b >= 0) {
            if (nums1[a] > nums2[b]) {
                nums1[k--] = nums1[a--];
            } else {
                nums1[k--] = nums2[b--];
            }
        }
        while (b >= 0) {
            nums1[k--] = nums2[b--];
        }
    }
};
