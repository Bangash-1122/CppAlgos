// ****
// Leet Code problem : Spiral Matrix #54  'medium'
// Given an m x n matrix, return all elements of the matrix in spiral order.
// ****


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;

        // Handle an empty matrix
        if (matrix.empty()) {
            return result;
        }

        // Initialize four boundaries
        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        // Continue until all boundaries are crossed
        while (top <= bottom && left <= right) {

            // Step 1: Traverse from LEFT to RIGHT
            // Process the top row
            for (int col = left; col <= right; ++col) {
                result.push_back(matrix[top][col]);
            }
            top++; // Move top boundary downward

            // Step 2: Traverse from TOP to BOTTOM
            // Process the rightmost column
            for (int row = top; row <= bottom; ++row) {
                result.push_back(matrix[row][right]);
            }
            right--; // Move right boundary leftward

            // Step 3: Traverse from RIGHT to LEFT
            // Process the bottom row if it still exists
            if (top <= bottom) {
                for (int col = right; col >= left; --col) {
                    result.push_back(matrix[bottom][col]);
                }
                bottom--; // Move bottom boundary upward
            }

            // Step 4: Traverse from BOTTOM to TOP
            // Process the leftmost column if it still exists
            if (left <= right) {
                for (int row = bottom; row >= top; --row) {
                    result.push_back(matrix[row][left]);
                }
                left++; // Move left boundary rightward
            }
        }

        return result; // Return elements in spiral order
    }
};

int main() {
    Solution solution;
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> result = solution.spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
};

// Example Input:
// matrix = [
//     [1, 2, 3],
//     [4, 5, 6],
//     [7, 8, 9]
// ]
// Expected Output: [1, 2, 3, 6, 9, 8, 7, 4, 5]
