// Problem: Two Sum II - Input Array Is Sorted
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Two Pointers
// Approach: Use two pointers starting from both ends of the array and move them
//           inward based on the sum comparison with the target.

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int right = 0;
        int left = numbers.size() - 1;
        std::vector<int> ans;
        while(right < left) {
            int sum = numbers[right] + numbers[left];
            if(sum < target) {
                right++;
            }
            else if(sum > target) {
                left--;
            }
            else {
                ans.push_back(right + 1);
                ans.push_back(left + 1);
                return ans;
            }
        }
        ans.push_back(-1); // fallback (should not occur in valid inputs)
        return ans;
    }
};
