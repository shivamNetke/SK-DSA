#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int deleteAtIndex(int arr[], int size, int index)
{
    int i;
    for ( i = index; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[i-1] = 0;

    size --;
    return size;
}

int main()
{
    int arr[5] =  {10, 20, 30, 40, 50};
    int index = 2;
    int size = 5;

    printArray(arr, 5);
    deleteAtIndex(arr, size, index);
    printArray(arr, 5);

    index = 1;
    deleteAtIndex(arr, size, index);
    printArray(arr, 5);
    return 0;
}

// --OUTPUT-- 
// 10 20 30 40 50
// 10 20 40 50 0
// 10 40 50 0 0