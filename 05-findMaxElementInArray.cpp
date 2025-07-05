#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
  int max = arr[0];
  for (int i = 1; i < size; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  return max;
}

int main(void) {
  int arr[5] = {10, 20, 99, 40, 50};
  int max = findMax(arr, 5);
  cout << "max = " << max << endl;
  return 0;
}

// --OUTPUT--
// max = 99
