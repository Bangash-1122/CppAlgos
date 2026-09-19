#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

// *********************************************
// LeetCode Problem #53 - Maximum Subarray
// *********************************************

// Given an integer array nums,
// find the contiguous subarray with the largest sum
// and return that sum.

class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // currSum stores the sum of the current subarray
        int currSum = 0;

        // maxSum stores the largest sum found so far
        // INT_MIN is used so negative arrays also work correctly
        int maxSum = INT_MIN;

        // Check every value in the array
        for (int val : nums) {

            // Add current value to the running sum
            currSum += val;

            // Compare current sum with maximum sum
            // and keep the larger value
            maxSum = max(currSum, maxSum);

            // If current sum becomes negative,
            // reset it because a negative sum will not help
            // the next subarray
            if (currSum < 0) {
                currSum = 0;
            }
        }

        // Return the largest subarray sum
        return maxSum;
    }
};

int main() {

    // Input array
    vector<int> nums = {3, -4, 5, 4, -1, 7, -8};

    // Create object of Solution class
    Solution obj;

    // Call maxSubArray function and print the answer
    cout << obj.maxSubArray(nums) << endl;

    return 0;
}

// OutPut  = 5 + 4 - 1 + 7 = 15

// brutele approch
// int n = 5;
//     int arr[5] = {1, 2, 3, 4, 5};

//     int maxSum = INT_MIN;

//     for(int st = 0; st < n; st++){
//         int CurrSum = 0;
//         for(int end = st; end < n; end++){
//             CurrSum += arr[end];
//             maxSum = max(CurrSum, maxSum);
//         }
//     }
//     cout << "Max subarray sum  = " << maxSum << endl;
