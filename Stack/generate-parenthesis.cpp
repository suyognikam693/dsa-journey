// Problem: Generate Parentheses
// Platform: NeetCode
// Source: NeetCode 150
// Topic: Backtracking
// Approach: Use recursive backtracking by adding '(' if open < n and ')' if close < open. 
// When both open and close are equal to n, the string is complete and added to the result.

class Solution {
public:
    void backtrack(int open, int close, int n, string current, vector<string>& ans) {
        if (open == n && close == n) {
            ans.push_back(current);
            return;
        }

        if (open < n) {
            backtrack(open + 1, close, n, current + "(", ans);
        }

        if (close < open) {
            backtrack(open, close + 1, n, current + ")", ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtrack(0, 0, n, "", ans);
        return ans;
    }
};
