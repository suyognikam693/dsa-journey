// Problem: 3Sum
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Two Pointers, Hash Set, Sorting
// Approach: Fix one element and use a hash set to find two other elements that sum
//           to the negative of the fixed element. Use a set to store unique triplets.

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int temp;
        std::vector<int> ans;
        set<vector<int>> st;
        for(int i = 0; i < nums.size(); i++) {
            set<int> hashset;
            for(int j = i + 1; j < nums.size(); j++) {
                temp = -nums[i] - nums[j];
                if(hashset.find(temp) != hashset.end()) {
                    ans = {nums[i], nums[j], temp};
                    sort(ans.begin(), ans.end());
                    st.insert(ans);
                }
                hashset.insert(nums[j]);
            }
        }
        std::vector<vector<int>> a(st.begin(), st.end());
        return a;
    }
};
