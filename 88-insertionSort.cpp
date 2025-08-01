// insertion sort

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

void insertionSort(int arr[], int size)
{
    int i, j, current;
    for (i = 1; i < size; i++)
    {
      current = arr[i];
      j = i-1;

      while (j >= 0 && arr[j] > current)
      {
        arr[j + 1] = arr[j];
        j--;
      }

      arr[j+1] = current;
    }
}

int main(void)
{
  int arr1[] = {12, 11, 13, 5, 6};

  printArray(arr1, 5);

  insertionSort(arr1, 5);

  printArray(arr1, 5);

  return 0;
}
/*
 
*/