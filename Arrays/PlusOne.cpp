// *****
// Leet Code problem: #66. 'easy' Plus One
// ****
// you are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.
// You need to increment the large integer by one and return the resulting array of digits.

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:

    // Function to add 1 to the number represented by the digits
    vector<int> plusOne(vector<int>& digits) {

        // Get the number of digits in the array
        int n = digits.size();

        // Start from the last digit and move toward the first digit
        for (int i = n - 1; i >= 0; --i) {

            // If the current digit is less than 9,
            // simply add 1 and return the result
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            // If the digit is 9, it becomes 0
            // and the carry moves to the next digit
            digits[i] = 0;
        }

        // If all digits were 9,
        // add 1 at the beginning
        digits.insert(digits.begin(), 1);

        // Return the updated array
        return digits;
    }
};

int main() {

    // Create an array representing the number 999
    vector<int> digits = {9, 9, 9};

    // Create an object of the Solution class
    Solution solution;

    // Call plusOne() to add 1 to the number
    vector<int> result = solution.plusOne(digits);

    // Display the resulting array
    cout << "Resulting array after adding one: ";

    // Print each digit
    for (int digit : result) {
        cout << digit << " ";
    }

    cout << endl;

    return 0;
}

// Output:
// Resulting array after adding one: 1 0 0 0
