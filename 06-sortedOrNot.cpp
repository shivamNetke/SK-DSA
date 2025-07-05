#include <iostream>
using namespace std;

int isSorted(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    if (arr[i] > arr[i + 1]) {
      return -1;
    }
  }
}
int main() {
  int arr[5] = {10, 20, 35, 40, 11};
  if (isSorted(arr, 5) == 0) {
    cout << "array is sorted ";
  } else {
    cout << "array is not sorted";
  }

  return 0;
}

// --OUTPUT--
// array is not sorted