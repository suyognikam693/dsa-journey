// Problem: Valid Anagram
// Platform: LeetCode
// Source: NeetCode 150 (Question 2)
// Topic: Strings / Hashing
// Approach: Use a hash map to count character frequencies in the first string,
//           then decrement for each character in the second string.
//           If all frequencies are zero, the strings are anagrams.

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }
        std::unordered_map<char,int> hash;

        for(char c : s) hash[c]++;
        for(char c : t) hash[c]--;

        for(const auto& pair : hash){
            if(pair.second != 0){
                return false;
            }
        }
        return true;
    }
};
