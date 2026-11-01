// *****
// LeetCode problum #189 Rotate Array 'medium'
// Given an integar array nums, roteate the array to the right by k steps, where K is non-negative.
// input nums = [1,2,3,4,5,6,7],k=3
// output [5,6,7,1,2,3,4]

#include <iostream>
#include <vector>
#include <algorithm> // Required for reverse()
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        // Get the size of the array
        int n = nums.size();

        // Handle an empty array
        if (n == 0) {
            return;
        }

        // Handle cases where k is greater than n
        k = k % n;

        // Step 1: Reverse the entire array
        reverse(nums.begin(), nums.end());

        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Reverse the remaining n-k elements
        reverse(nums.begin() + k, nums.end());
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;

    // Rotate the array to the right by k steps
    solution.rotate(nums, k);

    // Print the rotated array
    cout << "Rotated array: ";

    for (int num : nums) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}

// Output: Rotated array: 5 6 7 1 2 3 4

// Final Complexity Summary
// Complexity	Result
// Time Complexity	O(n)
// Space Complexity	O(1)
// Algorithm	Three-Reversal
// In-place	Yes
// Extra Array	No

// Short Interview Answer
// Time Complexity: O(n) — We reverse the array three times, processing a total of O(n) elements.

// Space Complexity: O(1) — We modify the original array in-place without using additional memory proportional to the input size.

// ✅ Final Answer: Time O(n), Space O(1).
