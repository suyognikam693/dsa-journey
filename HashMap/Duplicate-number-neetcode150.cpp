// Problem: Find the Duplicate Number
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Arrays / Hashing
// Approach: Count the frequency of each number using an unordered_map.
//           Return the number with a frequency >= 2.
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> hash;
        for(int i : nums){
            hash[i]++;a
        }

        for(const auto& pair : hash){
            if(pair.second >= 2){
                return pair.first;
            }
        }
        return -1;
    }
};
