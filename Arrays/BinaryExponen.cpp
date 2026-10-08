// *****
// Leet Code 50.power(x,n) Binary Exponentiation
// *****
// Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double myPow(double x, int n) {

        // Handle special cases
        if (n == 0) return 1.0;
        if (x == 0) return 0.0;
        if (x == 1) return 1.0;
        if (x == -1 && n % 2 == 0) return 1.0;
        if (x == -1 && n % 2 != 0) return -1.0;

    long binForm = n;

        // Handle negative powers
        if (binForm < 0) {
            x = 1 / x;
            binForm = -binForm;
        }

        double ans = 1.0;

        // Binary exponentiation
        while (binForm > 0) {

            // Multiply when power is odd
            if (binForm % 2 == 1) {
                ans *= x;
            }

            // Square the base and halve the power
            x *= x;
            binForm /= 2;
        }

        return ans;
    }
};

int main() {
    Solution solution;

    double x = 2.0;
    int n = 10;

    // Calculate 2^10
    cout << solution.myPow(x, n) << '\n';

    return 0;
}

// example of output:
// Input: x = 2.0, n = 10
// Output: 1024

// Time Complexity: \(O(\log |n|)\) — the exponent is divided by 2 during each iteration.
// Space Complexity: \(O(1)\) — only a few variables are used.
