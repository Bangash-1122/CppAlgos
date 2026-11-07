// ****
// LeetCode Problem: Find Missing and Repeated Values #2965 'easy'
// You are given a 0-indexed 2D integer matrix grid of size n*n with  values in the range [1, n^2]. Each value in the matrix appears exactly once,
// except for one value that appears twice and one value that is missing.
// Return an array containing the value that appears twice and the value that is missing, The task is to find the repeated and missing numbers a and b.
// Return a 0-indexed array [a, b] of length 2, where a is the value that appears twice and b is the value that is missing.
// example 1:
// Input: grid = [[1,2],[2,4]]
// Output: [2,3]
// ****

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        int total_elements = n * n;
        int xorAll = 0;

        // Step 1: XOR all elements of the grid
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                xorAll ^= grid[i][j];
            }
        }

        // Step 2: XOR numbers from 1 to n*n
        // Result = repeated ^ missing
        for (int i = 1; i <= total_elements; ++i) {
            xorAll ^= i;
        }

        // Step 3: Find the rightmost set bit
        // to separate the two numbers
        int mask = xorAll & -xorAll;

        int first = 0, second = 0;

        // Step 4: Divide grid elements into two groups
        // based on the set bit and XOR them
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] & mask) {
                    first ^= grid[i][j];
                } else {
                    second ^= grid[i][j];
                }
            }
        }

        // Step 5: XOR numbers from 1 to n*n
        // using the same two groups
        for (int i = 1; i <= total_elements; ++i) {
            if (i & mask) {
                first ^= i;
            } else {
                second ^= i;
            }
        }

        // Step 6: Check which number is repeated
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == first) {
                    return {first, second};
                }
            }
        }

        // If first is missing, second is repeated
        return {second, first};
    }
};


int main() {
    Solution solution;
    vector<vector<int>> grid = {{1, 2}, {2, 4}};
    vector<int> result = solution.findMissingAndRepeatedValues(grid);
    cout << "[" << result[0] << ", " << result[1] << "]" << endl; // Output: [2, 3]
    return 0;
}


// Example Dry Run
// Input: grid = [[1,2],[2,4]]
// 1
// Present

// 2
// Repeated

// 2
// Repeated

// 4
// Present


// Missing number: 3
// Output: [2, 3]


// Time Complexity: \(O(n^2)\)
// - Traversing the grid to calculate XOR takes \(O(n^2)\).
// - XOR of numbers from 1 to n*n takes \(O(n^2)\).
// - Dividing elements into two groups takes \(O(n^2)\).
// - Finding the repeated number takes \(O(n^2)\).
// Therefore:
// \[
// \boxed{O(n^2)}
// \]

// Space Complexity: \(O(1)\)
// We use only a few integer variables:

// n, total_elements, xorAll, mask, first, second.

// No additional array or data structure is used.

// Therefore:
// \[
// \boxed{O(1)}
// \]

// Final Complexity:
// - Time: \(O(n^2)\)
// - Auxiliary Space: \(O(1)\)
// This solution uses XOR bit manipulation and is suitable for LeetCode Problem 2965.
