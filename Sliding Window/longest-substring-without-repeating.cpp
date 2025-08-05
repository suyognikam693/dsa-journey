// Problem: Longest Substring Without Repeating Characters
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Sliding Window, Hashing
// Approach: Use sliding window and a set to track unique characters in the current window

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        std::unordered_set<char> st;
        int count = 0;
        int l = 0;
        for (int i = 0; i < s.length(); i++) {
            while (st.count(s[i])) {
                st.erase(s[l]);
                l++;
            }
            st.insert(s[i]);
            count = max(count, i - l + 1);
        }
        return count;
    }
};
