// selection sort

#include <iostream>
using namespace std;
void printArray(int arr[], int size);
int isSorted(int arr[], int size) {
  for (int i = 0; i < size - 1; i++) {
    
    if (arr[i] > arr[i + 1]) {
      cout <<"array is not sorted" << endl;
      return 0;
    }
  }
  cout <<"array is sorted" << endl;
  return 1;
}

void printArray(int arr[], int size) {
//   cout << "" << endl;
  cout << "in print array function" << endl;
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }
  cout << "\nout print array function" << endl;

  cout << "" << endl;
}

void selectionSort(int arr[], int size) {
      cout << "in selection sort function" << endl;
  if ((isSorted(arr, size)) == 1) {

    printArray(arr, size);
    return;
  }

  printArray(arr, size);



  int i, j, min, temp;
  for (int i = 0; i < size; i++) {

    min = i; // asuming 1st element as small

    for (int j = i + 1; j < size; j++) { // find element in minimum element in remaining array

      if (arr[j] < arr[min]) // checking is first index value is less than other one by one
      {
        min = j;
      }
    }

    if (min != i) { // if any remaining array value is less than first then swap
      temp = arr[i];
      arr[i] = arr[min];
      arr[min] = temp;
    }
  }

    cout << "\nout selection sort function" << endl;

}

int main() {
  int arr[] = {99, 34, 75, 12, 55};
  int arr2[] = {1, 2, 3, 4, 5};

  selectionSort(arr, 5);

  printArray(arr, 5);

  selectionSort(arr2, 5);

  return 0;
}
/*

in selection sort function
array is not sorted
in print array function
99 34 75 12 55
out print array function


out selection sort function
in print array function
12 34 55 75 99
out print array function


in selection sort function
array is sorted
in print array function
1 2 3 4 5
out print array function

*/
