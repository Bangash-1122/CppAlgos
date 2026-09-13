#include <iostream>
using namespace std;

void swapMinMax(int arr[], int size) {
  //Assume first element is both minimum and maximum values
  int minIndex = 0;
  int maxIndex = 0;

  // Find index of minimum and maximum values
  for(int i = 1; i < size; i++){
    if(arr[i] < arr[minIndex]) {
      minIndex = i;
    }
    if(arr[i] > arr[maxIndex]) {
      maxIndex = i;
    }
  }

  //swap minimum and maximum values
  int temp = arr[minIndex];
  arr[minIndex] = arr[maxIndex];
  arr[maxIndex] = temp;
}


int main() {
  int arr[], {5, 2, 9, 1, 7};
  int size = 5;

  swapMinMax(arr, size);

  //print arry after awapping
  for(int i = 0; i < size; i++){
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}
// Output Minimum = 1 ; Maximum  = 9;
