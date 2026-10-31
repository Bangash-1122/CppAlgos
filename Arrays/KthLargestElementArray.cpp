// *****
// LeetCode Problem: 215. Kth Largest Element in an Array 'medium'
// Given an integer array nums and an integer k, return the kth largest element in the array.
// Note that it is the kth largest element in the sorted order, not the kth distinct element
// can you solve it without sorting?
// input: nums = [3,2,1,5,6,4], k = 2
// output: 5
// *****

#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        // Create a min heap
        priority_queue<int, vector<int>, greater<int>> min_heap;

        // Traverse all elements
        for (int num : nums) {
            min_heap.push(num);

            // Keep only the k largest elements
            if (min_heap.size() > k) {
                min_heap.pop();
            }
        }

        // The smallest element in the heap
        // is the kth largest element in the array
        return min_heap.top();
    }
};


int main() {
    Solution solution;
    vector<int> nums = {3, 2, 1, 5, 6, 4};
    int k = 2;
    int result = solution.findKthLargest(nums, k);
    cout << "The " << k << "th largest element is: " << result << endl; // Output: 5
    return 0;
};


// 5. Final Complexity Summary
// Complexity	Result
// Time Complexity	O(n log k)
// Space Complexity	O(k)
// Algorithm	Min Heap
// Sorting Required	No

// Interview explanation:

// "I use a min heap of size k to maintain the k largest elements. For every element, I insert it into the heap and remove the smallest if the heap size exceeds k. At the end, the heap's top element is the kth largest. The time complexity is O(n log k), and the space complexity is O(k)."
