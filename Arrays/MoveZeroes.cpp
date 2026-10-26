// ****
// Leet Code Problem: Move Zeroes #283, 'easy'
// Given an array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.
// Note  that you must do this in-place without making a copy of the array.
// Example: inputs: [0,1,0,3,12]
// Output: [1,3,12,0,0]
// *****

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        // i keeps track of the position where
        // the next non-zero element should be placed.
        int i = 0;

        // Step 1: Traverse the entire array.
        for (int j = 0; j < nums.size(); j++) {

            // Check whether the current element is non-zero.
            if (nums[j] != 0) {

                // Move the non-zero element to position i.
                nums[i] = nums[j];

                // Move i to the next available position.
                i++;
            }
        }

        // Step 2: Fill all remaining positions with zeros.
        for (; i < nums.size(); i++) {

            // Replace each remaining element with zero.
            nums[i] = 0;
        }
    }
};

int main() {

    // Create an object of the Solution class.
    Solution solution;

    // Initialize the input array.
    vector<int> nums = {0, 1, 0, 3, 12};

    // Call the function to move all zeros to the end.
    solution.moveZeroes(nums);

    // Print the updated array.
    cout << "Output: ";

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}

// Output: [1 3 12 0 0]

// Explanation
// Input: [0, 1, 0, 3, 12]
// Step	Operation	Array
// 1	Start with the original array	[0, 1, 0, 3, 12]
// 2	Move non-zero elements to the front	[1, 3, 12, 3, 12]
// 3	Fill the remaining positions with zeros	[1, 3, 12, 0, 0]
// Time and Space Complexity
// - Time Complexity: O(n) — The algorithm uses two loops, but each element is processed at most twice.
// - Space Complexity: O(1) — No additional array is created.
// - In-place: Yes.
// - Relative order preserved: Yes.
// Final verdict:  Correct solution


// Your algorithm satisfies all the requirements of LeetCode Problem 283.
