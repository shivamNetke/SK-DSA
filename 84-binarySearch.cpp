// binary search
// arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100}
// size = no. of element = 10
// start = 0                       arr[0] = 10
// mid = [start + end] \ 2 = 5     arr[mid] = 60
// end = size - 1 = 10 - 1 = 9     arr[end] = 100

#include <iostream>
using namespace std;

void arrBinarySearch(int arr[], int size, int key) {
  int start = 0;
  int end = size - 1;

  while (start <= end) {

    int mid = start + (end - start) / 2;

    cout << "\nkey = " << key << endl;
    cout << "array: ";
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " " ;
    }
    cout << "\nstart = "<< start << "\t arr["<<start<<"] = "<<arr[start];
    cout << "\nend = "<< end << "\t\t arr["<<end<<"] = "<<arr[end];
    cout << "\nmid = " << mid << "\t\t arr["<<mid<<"] = "<< arr[mid] << endl;

    if (key == arr[mid]) {
        cout << "key == arr[mid]" << endl;
      cout << "\nelement found\n" << endl;
      return;
    }

    if (key > arr[mid]) {
      cout << "key > arr[mid] \t start = mid + 1 \t function will run again" << endl;
      start = mid + 1;
    }

    if (key < arr[mid]) {
      cout << "key < arr[mid] \t end = mid - 1 \t\t function will run again" << endl;
      end = mid - 1;
    }
  }

}

int main() {
  int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
  cout << "----------------" << endl;

  arrBinarySearch(arr, 10, 10);
  cout << "----------------" << endl;

  arrBinarySearch(arr, 10, 20);
  cout << "----------------" << endl;

  arrBinarySearch(arr, 10, 30);
  cout << "----------------" << endl;

  arrBinarySearch(arr, 10, 40);
  cout << "----------------" << endl;

  arrBinarySearch(arr, 10, 50);
  cout << "----------------" << endl;

  arrBinarySearch(arr, 10, 60);
  cout << "----------------" << endl;

  arrBinarySearch(arr, 10, 70);
  cout << "----------------" << endl;

  arrBinarySearch(arr, 10, 80);
  cout << "----------------" << endl;

  arrBinarySearch(arr, 10, 90);
  cout << "----------------" << endl;

  arrBinarySearch(arr, 10, 100);
  cout << "----------------" << endl;
  return 0;
}

/*
----------------

key = 10
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9          arr[9] = 100
mid = 4          arr[4] = 50
key < arr[mid]   end = mid - 1           function will run again

key = 10
array: 10 20 30 40
start = 0        arr[0] = 10
end = 3          arr[3] = 40
mid = 1          arr[1] = 20
key < arr[mid]   end = mid - 1           function will run again

key = 10
array: 10
start = 0        arr[0] = 10
end = 0          arr[0] = 10
mid = 0          arr[0] = 10
key == arr[mid]

element found

----------------

key = 20
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9          arr[9] = 100
mid = 4          arr[4] = 50
key < arr[mid]   end = mid - 1           function will run again

key = 20
array: 10 20 30 40
start = 0        arr[0] = 10
end = 3          arr[3] = 40
mid = 1          arr[1] = 20
key == arr[mid]

element found

----------------

key = 30
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9          arr[9] = 100
mid = 4          arr[4] = 50
key < arr[mid]   end = mid - 1           function will run again

key = 30
array: 10 20 30 40 
start = 0        arr[0] = 10
end = 3          arr[3] = 40
mid = 1          arr[1] = 20
key > arr[mid]   start = mid + 1         function will run again

key = 30
array: 30 40
start = 2        arr[2] = 30
end = 3          arr[3] = 40
mid = 2          arr[2] = 30
key == arr[mid]

element found

----------------

key = 40
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9          arr[9] = 100
mid = 4          arr[4] = 50
key < arr[mid]   end = mid - 1           function will run again

key = 40
array: 10 20 30 40
start = 0        arr[0] = 10
end = 3          arr[3] = 40
mid = 1          arr[1] = 20
key > arr[mid]   start = mid + 1         function will run again

key = 40
array: 30 40
start = 2        arr[2] = 30
end = 3          arr[3] = 40
mid = 2          arr[2] = 30
key > arr[mid]   start = mid + 1         function will run again

key = 40
array: 40
start = 3        arr[3] = 40
end = 3          arr[3] = 40
mid = 3          arr[3] = 40
key == arr[mid]

element found

----------------

key = 50
array: 10 20 30 40 50 60 70 80 90 100 
start = 0        arr[0] = 10
end = 9          arr[9] = 100
mid = 4          arr[4] = 50
key == arr[mid]

element found

----------------

key = 60
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9          arr[9] = 100
mid = 4          arr[4] = 50
key > arr[mid]   start = mid + 1         function will run again

key = 60
array: 60 70 80 90 100
start = 5        arr[5] = 60
end = 9          arr[9] = 100
mid = 7          arr[7] = 80
key < arr[mid]   end = mid - 1           function will run again

key = 60
array: 60 70
start = 5        arr[5] = 60
end = 6          arr[6] = 70
mid = 5          arr[5] = 60
key == arr[mid]

element found

----------------

key = 70
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9          arr[9] = 100
mid = 4          arr[4] = 50
key > arr[mid]   start = mid + 1         function will run again

key = 70
array: 60 70 80 90 100
start = 5        arr[5] = 60
end = 9          arr[9] = 100
mid = 7          arr[7] = 80
key < arr[mid]   end = mid - 1           function will run again

key = 70
array: 60 70
start = 5        arr[5] = 60
end = 6          arr[6] = 70
mid = 5          arr[5] = 60
key > arr[mid]   start = mid + 1         function will run again

key = 70
array: 70
start = 6        arr[6] = 70
end = 6          arr[6] = 70
mid = 6          arr[6] = 70
key == arr[mid]

element found

----------------

key = 80
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9          arr[9] = 100
mid = 4          arr[4] = 50
key > arr[mid]   start = mid + 1         function will run again

key = 80
array: 60 70 80 90 100
start = 5        arr[5] = 60
end = 9          arr[9] = 100
mid = 7          arr[7] = 80
key == arr[mid]

element found

----------------

key = 90
array: 10 20 30 40 50 60 70 80 90 100 
start = 0        arr[0] = 10
end = 9          arr[9] = 100
mid = 4          arr[4] = 50
key > arr[mid]   start = mid + 1         function will run again

key = 90
array: 60 70 80 90 100
start = 5        arr[5] = 60
end = 9          arr[9] = 100
mid = 7          arr[7] = 80
key > arr[mid]   start = mid + 1         function will run again

key = 90
array: 90 100
start = 8        arr[8] = 90
end = 9          arr[9] = 100
mid = 8          arr[8] = 90
key == arr[mid]

element found

----------------

key = 100
array: 10 20 30 40 50 60 70 80 90 100
start = 0        arr[0] = 10
end = 9          arr[9] = 100
mid = 4          arr[4] = 50
key > arr[mid]   start = mid + 1         function will run again

key = 100
array: 60 70 80 90 100
start = 5        arr[5] = 60
end = 9          arr[9] = 100
mid = 7          arr[7] = 80
key > arr[mid]   start = mid + 1         function will run again

key = 100
array: 90 100
start = 8        arr[8] = 90
end = 9          arr[9] = 100
mid = 8          arr[8] = 90
key > arr[mid]   start = mid + 1         function will run again

key = 100
array: 100
start = 9        arr[9] = 100
end = 9          arr[9] = 100
mid = 9          arr[9] = 100
key == arr[mid]

element found

----------------
*/

#include <iostream>
using namespace std;

int main()
{
  
  return 0;
}
/*
 
*/