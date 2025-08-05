// Problem: Valid Parentheses
// Platform: NeetCode
// Source: Neetcode 150
// Topic: Stack, String
// Approach: Use a stack to check for balanced brackets

class Solution {
public:
    bool isValid(string s) {
        if(s.length() < 2) return false;
        std::vector<char> output;
        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
                output.push_back(s[i]);
            }
            else if (output.empty()) {
                return false;
            }
            else if(s[i] == ')' && output.back() == '(' || 
                    s[i] == ']' && output.back() == '[' || 
                    s[i] == '}' && output.back() == '{') {
                output.pop_back();
            }
            else {
                output.push_back(s[i]);
            }
        }
        if(output.size() == 0) {
            return true;
        }
        return false;
    }
};
