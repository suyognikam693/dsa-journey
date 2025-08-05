// Problem: Convert Binary Number in Linked List to Integer
// Platform: LeetCode
// Source: LeetCode Daily Challenge - 14 July 2025
// Topic: Linked List
// Approach: Store bits in vector, traverse in reverse, apply power of 2.

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        std::vector<int> stack;
        ListNode* temp = head;
        while(temp!= nullptr){
            stack.push_back(temp->val);
            temp = temp->next;
        }
        int j = 0;
        int sum = 0;
        for(int i = stack.size()-1;i>=0;i--){
            sum += stack[i]*pow(2,j);
            j++;
        }
        return sum;

    }
};