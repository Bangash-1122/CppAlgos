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
    vector<int> findMissingAndRepeated(vector<vector<int>>& grid) {
        int n = grid.size();
        int total_elements = n * n;
        int xorAll = 0;

        // Count occurrences of each number in the grid
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                xorAll ^= grid[i][j];
            }
        }

        // Identify the repeated and missing numbers
        for(int i = 1; i <= total_elements; ++i) {
            xorAll ^= i;
        }
        int mask = xorAll & -xorAll; // Get the rightmost set bit

        int first = 0, second = 0;
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                if(grid[i][j] & mask) {
                    first ^= grid[i][j];
                } else {
                    second ^= grid[i][j];
                }
            }
        }

        for (int i = 1; i <= total_elements; ++i) {
            if((i & mask) == 1) {
                first ^= i;
            } else {
                second ^= i;
            }
        }

        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                if(grid[i][j] == first) {
                    return {first, second};
                }
            }
        }
        return {first, second};
    }
};


int main() {

    return 0;
}
