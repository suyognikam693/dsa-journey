// Problem: Valid Palindrome
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Two Pointers, String Manipulation
// Approach: Clean the string by keeping only alphanumeric characters in lowercase,
//           then use two pointers to check if it's a palindrome.

class Solution {
public:
    bool isPalindrome(string s) {
        std::vector<char> a;
        for(int i = 0; i < s.size(); i++) {
            if(isalnum(s[i])) {
                a.push_back(tolower(s[i]));
            }
        }
        int x = 0;
        int y = a.size() - 1;
        while(x < y) {
            if(a[x] != a[y]) {
                return false;
            }
            x++;
            y--;
        }
        return true;
    }
};
