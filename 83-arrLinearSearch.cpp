// linear search in array

// arr = {10, 20, 30, 40, 50}

// key = 50

#include <iostream>
using namespace std;

int arrlinearSearch(int arr[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
      if (key == arr[i])
      {
        cout << "key found" << endl;
        return 1;
      }
    }
    cout << "key not found" << endl;
    return 0;
}
int main()
{
  int arr[] = {10, 20, 30, 40, 50};
  cout << "" << arrlinearSearch(arr, 5, 510) << endl;
  return 0;
}