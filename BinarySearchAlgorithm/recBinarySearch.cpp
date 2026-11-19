#include <iostream>
#include <vector>

using namespace std;

int recBinarySearch(const vector<int>& arr, int target, int st, int end) {
    if (st <= end) {
        int mid = st + (end - st) / 2;
        return -1;
    }
}


int main() {
   vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd
    int target = 12;
    int result1 = recBinarySearch(arr1, target, 0, arr1.size() - 1);
    cout << "Element found at index: " << result1 << endl;

    vector<int> arr2 = {-1, 0, 3, 4, 5, 9, 12}; // Even
    int target2 = 0;
    int result2 = recBinarySearch(arr2, target2, 0, arr2.size() - 1);
    cout << "Element found at index: " << result2 << endl;
  
  return 0;
}
