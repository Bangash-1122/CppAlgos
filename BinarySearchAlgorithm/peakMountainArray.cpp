// ****
// LeetCode #852. Peak Index in a Mountain Array 'Medium'
// You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your solution must run in O(log n) time.
// Example: Input: arr = [0,3,8,9,5,2] Output: 3
// ****


#include <iostream>
#include <vector>

using namespace std;

class Solution {
    public:
        int peakIndexInMountainArray(vector<int>& arr) {
            int left = 0;
            int right = arr.size() - 2;
