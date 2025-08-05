// Problem: Sliding Window Maximum
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Sliding Window
// Approach: Maintain the maximum of the current window. If the max element slides out of the window, 
//           recompute the maximum by scanning the window again. Otherwise, reuse the previous max.

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int max = 0;
        std::vector<int> ans;
        int j;
        int a;
        for(int i = 0;i<k;i++){
            if(nums[i] > max){
                max = nums[i];
                j = i;
            }
        }
        ans.push_back(max);
        for(int i = k;i<nums.size();i++){
            if(nums[i] > max){
                max = nums[i];
                j = i;
                ans.push_back(max);
            }
            else if(j >= i-k+1){
                ans.push_back(max);
            }
            else {
                max = nums[i-k+1];
                for(int a = i-k+1;a<=i;a++){
                    std::cout << i-k+1 << " " << i;
                    if(nums[a] > max){
                        max = nums[a];
                        j = a;
                    }
                }
                ans.push_back(max);
            }
        }
        return ans;
    }
};
