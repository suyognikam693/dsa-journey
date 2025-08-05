// Problem: Group Anagrams
// Platform: Leetcode
// Source: Leetcode #49
// Topic: Hashing, Strings
// Approach: Use a hashmap with sorted string as key and group anagrams into vectors.

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> hash;
        std::string temp;
        std::string a;
        for (int i = 0; i < strs.size(); i++) {
            temp = "";
            for (int j = 0; j < strs[i].size(); j++) {
                temp += strs[i][j];
            }
            a = temp;
            std::sort(temp.begin(), temp.end());
            hash[temp].push_back(a);
        }
        vector<vector<string>> ans;
        for (const auto& pair : hash) {
            ans.push_back(pair.second);
        }
        return ans;
    }
};
