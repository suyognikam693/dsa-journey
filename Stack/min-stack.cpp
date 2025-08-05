// Problem: Min Stack
// Platform: NeetCode
// Source: Neetcode 150
// Topic: Stack, Design
// Approach: Use two stacks – one for all values and one for current minimums

class MinStack {
    std::stack<int> st;
    std::stack<int> minSt;

public:
    MinStack() {}

    void push(int val) {
        st.push(val);
        if(minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        if(st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};