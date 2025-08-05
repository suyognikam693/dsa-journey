// Problem: Top K Frequent Elements
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Hash Map, Sorting, Heap
// Approach: Count frequencies using an unordered_map, then sort the frequency map and extract the top K frequent elements.

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int,int> freq;
        for(int n : nums){
            freq[n]++;
        }
        std::vector<std::pair<int,int>> vec(freq.begin(), freq.end());
        std::sort(vec.begin(), vec.end(), [](const auto &a, const auto &b) {
            return a.second < b.second;
        });
        int temp = vec.size()-1;
        std::vector<int> ans;
        for(int i = temp;i>temp-k;i--){
            std::cout << i << ' ' << vec[i].first << '\n';
            ans.push_back(vec[i].first);
        }
        return ans;
    }
};
