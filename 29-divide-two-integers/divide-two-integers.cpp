#include <climits>
#include <cmath>

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Handle overflow case: -2147483648 / -1 = 2147483648 (exceeds INT_MAX)
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX;
        }

        // Determine the sign of the result
        bool isNegative = (dividend < 0) ^ (divisor < 0);

        // Use long long to prevent overflow during absolute value conversion
        long long absDividend = labs(dividend);
        long long absDivisor = labs(divisor);
        long long quotient = 0;

        // Main logic: bit shifting
        while (absDividend >= absDivisor) {
            long long tempDivisor = absDivisor;
            long long multiple = 1;
            
            // Double the divisor until it's larger than the remaining dividend
            while (absDividend >= (tempDivisor << 1)) {
                tempDivisor <<= 1;
                multiple <<= 1;
            }

            absDividend -= tempDivisor;
            quotient += multiple;
        }

        return isNegative ? -quotient : quotient;
    }
};