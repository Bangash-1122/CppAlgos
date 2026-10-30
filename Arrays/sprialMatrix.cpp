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

        if (matrix.empty()) {
            return result;
        }
