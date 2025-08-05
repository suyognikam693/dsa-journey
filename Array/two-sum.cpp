// Problem: Two Sum
// Platform: LeetCode
// Source: Neetcode 150 (Question 3)
// Topic: Hashing
// Approach: Use a hashmap to store (value -> index) while iterating. 
//           Check if target - current element exists in the map.class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int,int> map;
        std::vector<int> ans;
        int temp;
        for(int i = 0;i<nums.size();i++){
            temp = target - nums[i];
            if(map.count(temp)){
                ans.push_back(map[temp]);
                ans.push_back(i);
                return ans;
            }
            map[nums[i]] = i;
        }
        return ans;
    }
};
