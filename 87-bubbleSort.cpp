// bubble sort

#include <iostream>
using namespace std;

void printArray(int arr[], int size) {

  cout << "in print array function" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\nout print array function" << endl;

  cout << "" << endl;
}

int isSorted(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {

    if (arr[i] > arr[i + 1]) {
      cout << "array is not sorted" << endl;
      printArray(arr, size);
      return 0;
    }
  }
  cout << "array is sorted" << endl;
  return 1;
}

void bubbleSort(int arr[], int size) {
  cout << "\nin bubble sort function" << endl;
  if (isSorted(arr, size) == 0) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) // taking this size-1-i to avoid the last
                                   // elements because they are sorted
    {
      for (j = 0; j < size - 1 - i; j++) {
        // for (j = 0; j < size - 1; j++) {
        if (arr[j] > arr[j + 1]) {
          temp = arr[j];
          arr[j] = arr[j + 1];
          arr[j + 1] = temp;
        }
      }
    }
  }

  cout << "-bubble sort successful- " << endl;
  printArray(arr, size);
  cout << "out bubble sort function" << endl;
}

int main(void) {
  int arr1[] = {1, 5, 4, 2, 8};

  bubbleSort(arr1, 5);

  return 0;
}
/*

in bubble sort function
array is not sorted
in print array function
1 5 4 2 8
out print array function

-bubble sort successful-
in print array function
1 5 4 2 8
out print array function

out bubble sort function

*/