#include <iostream>
#include <vector>

using namespace std;


int main() {
   vector<int> arr1 = {-1, 0, 3, 4, 5, 9, 12}; // Odd
    int target = 12;
    int result1 = recBinarySearch(arr1, target, 0, arr1.size() - 1);
    cout << "Element found at index: " << result1 << endl;
  
  return 0;
}
