// *****
LeetCode problum #189 Rotate Array 'medium'
// Given an integar array nums, roteate the array to the right by k steps, where K is non-negative.
// input nums = [1,2,3,4,5,6,7],k=3
// output [5,6,7,1,2,3,4]

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // In case k is greater than n
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
