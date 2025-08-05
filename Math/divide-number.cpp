// Problem: Divide Two Integers
// Platform: LeetCode
// Source: LeetCode
// Topic: Math / Bit Manipulation
// Approach: Use bit shifting to optimize subtraction to O(log N) time.

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;

        // Convert to long to avoid overflow
        long long a = abs((long long)dividend);
        long long b = abs((long long)divisor);
        long long res = 0;

        // Keep subtracting the largest shifted divisor possible
        while (a >= b) {
            long long temp = b, multiple = 1;
            while ((temp << 1) <= a) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            res += multiple;
        }

        // Apply sign
        res = ((dividend < 0) ^ (divisor < 0)) ? -res : res;

        // Clamp result to 32-bit int range
        return res > INT_MAX ? INT_MAX : res;
    }
};
