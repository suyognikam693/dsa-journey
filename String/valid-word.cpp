// Problem: Check Valid Word
// Platform: LeetCode
// Source: Custom / Assumed LeetCode
// Topic: Strings / Character Counting / Validation
// Approach: Traverse each character and count vowels, consonants, and digits.
//           Reject if any special character is found.
//           A word is valid if it has at least 1 vowel, 1 consonant, and total length ≥ 3.


class Solution {
public:
    bool isValid(string word) {
        int v = 0;
        int c = 0;
        int n = 0;
        for(int i = 0;i<word.length();i++){
            if(isalpha(word[i])){
                word[i] = tolower(word[i]);
                if(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u'){
                    v++;
                }
                else {
                    c++;
                }
            }
            else if(!isalpha(word[i]) && !isdigit(word[i])){
                return false;
            }
            else if(isdigit(word[i])){
                n++;
            }
        }
        if(v >= 1 && c >= 1 && (v+c+n) >= 3){
            return true;
        }
        return false;
    }
};
