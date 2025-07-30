#include <iostream>
using namespace std;

void arrBinarySearchRec(int arr[], int start, int end, int key) {
  if (start > end) {
    cout << "\nElement not found\n";
    return;
  }

  int mid = start + (end - start) / 2;

  cout << "\nkey = " << key << endl;
  cout << "array: ";
  for (int i = start; i <= end; i++) {
    cout << arr[i] << " ";
  }

  cout << "\nstart = " << start << "\t arr[" << start << "] = " << arr[start];
  cout << "\nend = " << end << "\t arr[" << end << "] = " << arr[end];
  cout << "\nmid = " << mid << "\t arr[" << mid << "] = " << arr[mid] << endl;

  if (key == arr[mid]) {
    cout << "key == arr[mid]";
    cout << "\nElement found at index " << mid << "\n";
    cout << "\n------------------------------------------------------------" << endl;
    return;
  }

  if (key > arr[mid]) {
    cout << "key > arr[mid] \t start = mid + 1 \t function will run again\n";
    arrBinarySearchRec(arr, mid + 1, end, key);
  } else {
    cout << "key < arr[mid] \t end = mid - 1 \t\t function will run again\n";
    arrBinarySearchRec(arr, start, mid - 1, key);
  }
}

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  int size = sizeof(arr) / sizeof(arr[0]);

  cout << "Recursive Binary Search:\n";
  arrBinarySearchRec(arr, 0, size - 1, 10);
  arrBinarySearchRec(arr, 0, size - 1, 20);
  arrBinarySearchRec(arr, 0, size - 1, 30);
  arrBinarySearchRec(arr, 0, size - 1, 40);
  arrBinarySearchRec(arr, 0, size - 1, 50);
  arrBinarySearchRec(arr, 0, size - 1, 60);
  arrBinarySearchRec(arr, 0, size - 1, 70);
  arrBinarySearchRec(arr, 0, size - 1, 80);
  arrBinarySearchRec(arr, 0, size - 1, 90);
  arrBinarySearchRec(arr, 0, size - 1, 100);

  return 0;
}

/*
Recursive Binary Search:

key = 10
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9  arr[9] = 100
mid = 4  arr[4] = 50
key < arr[mid]   end = mid - 1           function will run again

key = 10
array: 10 20 30 40
start = 0        arr[0] = 10
end = 3  arr[3] = 40
mid = 1  arr[1] = 20
key < arr[mid]   end = mid - 1           function will run again

key = 10
array: 10
start = 0        arr[0] = 10
end = 0  arr[0] = 10
mid = 0  arr[0] = 10
key == arr[mid]
Element found at index 0

------------------------------------------------------------

key = 20
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9  arr[9] = 100
mid = 4  arr[4] = 50
key < arr[mid]   end = mid - 1           function will run again

key = 20
array: 10 20 30 40 
start = 0        arr[0] = 10
end = 3  arr[3] = 40
mid = 1  arr[1] = 20
key == arr[mid]
Element found at index 1

------------------------------------------------------------

key = 30
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9  arr[9] = 100
mid = 4  arr[4] = 50
key < arr[mid]   end = mid - 1           function will run again

key = 30
array: 10 20 30 40
start = 0        arr[0] = 10
end = 3  arr[3] = 40
mid = 1  arr[1] = 20
key > arr[mid]   start = mid + 1         function will run again

key = 30
array: 30 40
start = 2        arr[2] = 30
end = 3  arr[3] = 40
mid = 2  arr[2] = 30
key == arr[mid]
Element found at index 2

------------------------------------------------------------

key = 40
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9  arr[9] = 100
mid = 4  arr[4] = 50
key < arr[mid]   end = mid - 1           function will run again

key = 40
array: 10 20 30 40
start = 0        arr[0] = 10
end = 3  arr[3] = 40
mid = 1  arr[1] = 20
key > arr[mid]   start = mid + 1         function will run again

key = 40
array: 30 40 
start = 2        arr[2] = 30
end = 3  arr[3] = 40
mid = 2  arr[2] = 30
key > arr[mid]   start = mid + 1         function will run again

key = 40
array: 40
start = 3        arr[3] = 40
end = 3  arr[3] = 40
mid = 3  arr[3] = 40
key == arr[mid]
Element found at index 3

------------------------------------------------------------

key = 50
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9  arr[9] = 100
mid = 4  arr[4] = 50
key == arr[mid]
Element found at index 4

------------------------------------------------------------

key = 60
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9  arr[9] = 100
mid = 4  arr[4] = 50
key > arr[mid]   start = mid + 1         function will run again

key = 60
array: 60 70 80 90 100
start = 5        arr[5] = 60
end = 9  arr[9] = 100
mid = 7  arr[7] = 80
key < arr[mid]   end = mid - 1           function will run again

key = 60
array: 60 70
start = 5        arr[5] = 60
end = 6  arr[6] = 70
mid = 5  arr[5] = 60
key == arr[mid]
Element found at index 5

------------------------------------------------------------

key = 70
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9  arr[9] = 100
mid = 4  arr[4] = 50
key > arr[mid]   start = mid + 1         function will run again

key = 70
array: 60 70 80 90 100 
start = 5        arr[5] = 60
end = 9  arr[9] = 100
mid = 7  arr[7] = 80
key < arr[mid]   end = mid - 1           function will run again

key = 70
array: 60 70
start = 5        arr[5] = 60
end = 6  arr[6] = 70
mid = 5  arr[5] = 60
key > arr[mid]   start = mid + 1         function will run again

key = 70
array: 70
start = 6        arr[6] = 70
end = 6  arr[6] = 70
mid = 6  arr[6] = 70
key == arr[mid]
Element found at index 6

------------------------------------------------------------

key = 80
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9  arr[9] = 100
mid = 4  arr[4] = 50
key > arr[mid]   start = mid + 1         function will run again

key = 80
array: 60 70 80 90 100
start = 5        arr[5] = 60
end = 9  arr[9] = 100
mid = 7  arr[7] = 80
key == arr[mid]
Element found at index 7

------------------------------------------------------------

key = 90
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9  arr[9] = 100
mid = 4  arr[4] = 50
key > arr[mid]   start = mid + 1         function will run again

key = 90
array: 60 70 80 90 100 
start = 5        arr[5] = 60
end = 9  arr[9] = 100
mid = 7  arr[7] = 80
key > arr[mid]   start = mid + 1         function will run again

key = 90
array: 90 100
start = 8        arr[8] = 90
end = 9  arr[9] = 100
mid = 8  arr[8] = 90
key == arr[mid]
Element found at index 8

------------------------------------------------------------

key = 100
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9  arr[9] = 100
mid = 4  arr[4] = 50
key > arr[mid]   start = mid + 1         function will run again

key = 100
array: 60 70 80 90 100
start = 5        arr[5] = 60
end = 9  arr[9] = 100
mid = 7  arr[7] = 80
key > arr[mid]   start = mid + 1         function will run again

key = 100
array: 90 100
start = 8        arr[8] = 90
end = 9  arr[9] = 100
mid = 8  arr[8] = 90
key > arr[mid]   start = mid + 1         function will run again

key = 100
array: 100
start = 9        arr[9] = 100
end = 9  arr[9] = 100
mid = 9  arr[9] = 100
key == arr[mid]
Element found at index 9

------------------------------------------------------------
*/