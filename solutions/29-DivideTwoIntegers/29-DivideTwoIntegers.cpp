// Last updated: 9/23/2026, 12:22:03 AM
class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle edge case for overflow
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;  // Prevent overflow
        }
        
        // Determine if the result should be negative
        bool isNegative = (dividend < 0) ^ (divisor < 0);
        
        // Work with positive values for easier calculations
        long long absDividend = abs((long long)dividend);
        long long absDivisor = abs((long long)divisor);
        
        long long quotient = 0;
        
        // Main loop: Subtract divisor multiples from dividend
        while (absDividend >= absDivisor) {
            long long tempDivisor = absDivisor, multiple = 1;
            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1;
                multiple <<= 1;
            }
            
            absDividend -= tempDivisor;
            quotient += multiple;
        }
        
        // Apply the sign
        if (isNegative) {
            quotient = -quotient;
        }
        
        // Return the final quotient within the 32-bit integer limits
        if (quotient > INT_MAX) return INT_MAX;
        if (quotient < INT_MIN) return INT_MIN;
        
        return quotient;
    }
};
