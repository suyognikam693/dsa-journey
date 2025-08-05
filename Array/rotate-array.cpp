// Problem: Rotate Array
// Platform: LeetCode
// Source: LeetCode
// Topic: Arrays / Two Pointers
// Approach: Rotate the array in-place by reversing the whole array first,
//           then reverse the first k elements, and finally reverse the remaining elements.


#include <iostream>
#include <vector>
#include <algorithm>
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int m = nums.size();
        k = k%m;
        std::reverse(nums.begin(),nums.end());
        std::reverse(nums.begin(),nums.begin() + k);
        std::reverse(nums.begin() + k,nums.end());
        

    }
};