/*
 * LeetCode Problem #238: Product of Array Except Self
 * Difficulty: Medium
 *
 * Given an integer array nums, return an array answer
 * where answer[i] is the product of all elements
 * except nums[i].
 *
 * Requirements:
 * 1. Time Complexity: O(n)
 * 2. Do not use division.
 *
 * Example:
 * Input:  nums = [1, 2, 3, 4]
 * Output: [24, 12, 8, 6]
 *
 * Approach: Prefix and Suffix Products
 * Time Complexity: O(n)
 * Auxiliary Space Complexity: O(1)
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        // Get the total number of elements.
        int n = nums.size();

        // Initialize result array with 1.
        // It will first store prefix products.
        vector<int> result(n, 1);

        // STEP 1: Calculate prefix (left-side) products.
        // result[i] stores the product of all elements
        // strictly to the left of index i.
        //
        // Example: nums = [1, 2, 3, 4]
        // Prefix result = [1, 1, 2, 6]

        for (int i = 1; i < n; i++) {
            result[i] = result[i - 1] * nums[i - 1];
        }

        // STEP 2: Calculate suffix (right-side) products.
        // Start with suffix = 1 because there are no
        // elements to the right of the last element.
        int suffix = 1;

        // Traverse from right to left.
        // Multiply suffix by the next element, then
        // multiply the current prefix product by suffix.
        //
        // This produces the product of all elements
        // except the element at the current index.

        for (int i = n - 2; i >= 0; i--) {
            suffix *= nums[i + 1];
            result[i] *= suffix;
        }

        // Return the final product array.
        return result;
    }
};

int main() {

    // Create an object of the Solution class.
    Solution solution;

    // Initialize the input array.
    vector<int> nums = {1, 2, 3, 4};

    // Call the function to calculate the result.
    vector<int> result = solution.productExceptSelf(nums);

    // Display the output array.
    cout << "Output: [";

    for (size_t i = 0; i < result.size(); i++) {
        cout << result[i];

        // Add a comma between elements.
        if (i < result.size() - 1) {
            cout << ",";
        }
    }

    cout << "]" << endl;

    return 0;
}

/*
 * Output: [24,12,8,6]
 *
 * Time Complexity: O(n)
 * Two separate loops traverse the array.
 * O(n) + O(n) = O(n).
 *
 * Auxiliary Space Complexity: O(1)
 * Only a suffix variable and a few counters are used.
 * The output array is excluded from auxiliary space.
 *
 * Total Space Complexity: O(n)
 * The result array contains n elements.
 */
