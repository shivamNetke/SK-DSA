#include <iostream>
using namespace std;

int InsertAtIndex(int arr[], int size, int n, int key, int index) {
  if (size == n)
    return -1; // Array is Full

  for (int i = n; i > index; i--) {
    arr[i] = arr[i - 1];
  }

  arr[index] = key;
  return 0;
}

void PrintArray(int arr[], int size) {
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int iArr[5] = {10, 20, 30, 40};
  int iSize = 5;
  int n = 4;
  int iKey = 99;
  int iIndexAt = 2;

  PrintArray(iArr, 5); // 10,20,30,40
  InsertAtIndex(iArr, 5, 4, 99, 2);
  PrintArray(iArr, 5); // 10,20,99,30,40

  return 0;
}

// output
// 10 20 30 40 0
// 10 20 99 30 40