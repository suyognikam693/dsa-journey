// Problem: Product of Array Except Self
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Arrays, Prefix Product
// Approach: Handle zero cases separately. If no zero, compute full product and divide by current element. If one zero, place product at that index.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int count = 0;
        int index;
        int prod = 1;
        int temp;
        std::vector<int> ans;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == 0){
                count += 1;
                index = i;
            }
        }
        if(count == 1){
            for(int i = 0;i<nums.size();i++){
                if(i != index){
                    prod *= nums[i];
                }
                ans.push_back(0);
            }
            ans[index] = prod;
        }
        else if(count > 1){
            for(int i = 0;i<nums.size();i++){
                ans.push_back(0);
            }
        }
        else if(count == 0){
            for(int i = 0;i<nums.size();i++){
                prod *= nums[i];
            }
            for(int i = 0;i<nums.size();i++){
                temp = prod/nums[i];
                ans.push_back(temp);
            }
        }
        return ans;
    }
};
