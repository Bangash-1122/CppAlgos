// ***
// LeetCode Two Sum Problem #1  'easy'
// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
// Example 1:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// ***


#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Hash map to store value -> index
        // Example: for nums[0] = 2, it will store {2, 0}
        unordered_map<int, int> num_map;

        // Loop through the array once
        for (int i = 0; i < nums.size(); i++) {

            // The number we need to find
            int complement = target - nums[i];

            // Check if complement already exists in map
            // .find() returns .end() if not found
            if (num_map.find(complement) != num_map.end()) {
                // Found! Return index of complement + current index
                return {num_map[complement], i};
            }

            // Not found, so store current number and its index
            // for future lookups
            num_map[nums[i]] = i;
        }

        // As per problem, one solution always exists.
        // This return is just for safety if no solution found.
        return {};
    }
};

int main() {
    Solution solution;
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> result = solution.twoSum(nums, target);

    cout << "Indices of the two numbers that add up to " << target << ": ";
    for (int index : result) {
        cout << index << " ";
    }
    cout << endl;

    return 0;
};

// Output:
// Indices of the two numbers that add up to 9: 0 1

// Dry run for nums = [2,7,11,15], target = 9
// i=0, nums[0]=2, complement = 9-2=7. Map is empty -> not found. Store {2:0}. Map = {2:0}
// i=1, nums[1]=7, complement = 9-7=2. Map has 2 at index 0 -> found! Return [0, 1].
// Complexity Analysis
// Time Complexity: O(n)
// We traverse the array exactly once. Each unordered_map lookup/insert is O(1) on average.

// Space Complexity: O(n)
// In the worst case, we store n-1 elements in the hash map before finding the answer.

// This is much better than the brute force approach which is O(n²) time and O(1) space.
