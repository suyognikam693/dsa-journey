// Problem: Evaluate Reverse Polish Notation
// Platform: NeetCode
// Source: Neetcode 150
// Topic: Stack, Math
// Approach: Use a stack to simulate evaluation of postfix expressions

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        std::vector<int> ans;
        int a, b, temp;
        for(int i = 0; i < tokens.size(); i++) {
            if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/") {
                ans.push_back(stoi(tokens[i]));
                temp = ans.back();
            }
            else {
                a = ans.back();
                temp = a;
                ans.pop_back();
                b = ans.back();
                ans.pop_back();
                if(tokens[i] == "+") {
                    temp = b + a;
                }
                else if(tokens[i] == "-") {
                    temp = b - a;
                }
                else if(tokens[i] == "*") {
                    temp = b * a;
                }
                else if(tokens[i] == "/") {
                    temp = b / a;
                }
                ans.push_back(temp);
            }
        }
        return temp;
    }
};
