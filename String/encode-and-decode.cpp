// Problem: Encode and Decode Strings
// Platform: LeetCode
// Source: NeetCode 150
// Topic: Strings
// Approach: Encode each string with a delimiter (",,") and decode by splitting using the same delimiter.

class Solution {
public:
    string encode(vector<string>& strs) {
        std::string ans;
        for(int i = 0;i<strs.size();i++){
            for(int j = 0;j<strs[i].size();j++){
                ans += strs[i][j];
            }
            ans += ",,";
        }
        return ans;
    }

    vector<string> decode(string s) {
        std::vector<string> a;
        std::string temp;
        for(int i = 0;i<s.length();i++){
            if(s[i] == ',' && s[i+1] == ','){
                a.push_back(temp);
                temp = "";
                i += 1;
            }
            else{
                temp += s[i];
            }
        }
        return a;
    }
};
