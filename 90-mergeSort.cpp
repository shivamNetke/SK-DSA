#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
    cout << "\n\nin printArray" << endl;
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
    cout << "out printArray" << endl;
}

void merge(int arr[], int left, int mid, int right) {
    cout << "\n\nin merge: left=" << left << " mid=" << mid << " right=" << right << endl;

    int i, j, k;
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    cout << "Left array: ";
    for (i = 0; i < n1; i++) cout << L[i] << " ";
    cout << endl;

    cout << "Right array: ";
    for (j = 0; j < n2; j++) cout << R[j] << " ";
    cout << endl;

    i = 0;
    j = 0;
    k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j])
            arr[k++] = L[i++];
        else
            arr[k++] = R[j++];
    }

    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    cout << "Merged array after merge: ";
    for (int x = left; x <= right; x++) cout << arr[x] << " ";
    cout << endl;

    cout << "out merge" << endl;
}

void mergeSort(int arr[], int left, int right) {
    cout << "\n\nin mergeSort: left=" << left << " right=" << right << endl;
    if (left < right) {
        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
    cout << "out mergeSort: left=" << left << " right=" << right << endl;
}

int main() {
    int arr[] = {38, 27, 43, 3, 9, 82, 10};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array:" << endl;
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    cout << "Sorted array:" << endl;
    printArray(arr, size);

    return 0;
}

/*
Original array:


in printArray
38 27 43 3 9 82 10
out printArray


in mergeSort: left=0 right=6 


in mergeSort: left=0 right=3 


in mergeSort: left=0 right=1 


in mergeSort: left=0 right=0 
out mergeSort: left=0 right=0


in mergeSort: left=1 right=1 
out mergeSort: left=1 right=1   


in merge: left=0 mid=0 right=1  
Left array: 38
Right array: 27
Merged array after merge: 27 38 
out merge
out mergeSort: left=0 right=1   


in mergeSort: left=2 right=3    


in mergeSort: left=2 right=2
out mergeSort: left=2 right=2


in mergeSort: left=3 right=3
out mergeSort: left=3 right=3


in merge: left=2 mid=2 right=3
Left array: 43
Right array: 3
Merged array after merge: 3 43
out merge
out mergeSort: left=2 right=3


in merge: left=0 mid=1 right=3
Left array: 27 38
Right array: 3 43 
Merged array after merge: 3 27 38 43
out merge
out mergeSort: left=0 right=3


in mergeSort: left=4 right=6


in mergeSort: left=4 right=5


in mergeSort: left=4 right=4
out mergeSort: left=4 right=4







in mergeSort: left=5 right=5

in mergeSort: left=5 right=5

in mergeSort: left=5 right=5
in mergeSort: left=5 right=5
out mergeSort: left=5 right=5
in mergeSort: left=5 right=5
out mergeSort: left=5 right=5
in mergeSort: left=5 right=5
out mergeSort: left=5 right=5
in mergeSort: left=5 right=5
out mergeSort: left=5 right=5

in mergeSort: left=5 right=5
out mergeSort: left=5 right=5

in mergeSort: left=5 right=5
out mergeSort: left=5 right=5


in merge: left=4 mid=4 right=5
Left array: 9
Right array: 82
Merged array after merge: 9 82
out merge
out mergeSort: left=4 right=5


in mergeSort: left=6 right=6
out mergeSort: left=6 right=6


in merge: left=4 mid=5 right=6
Left array: 9 82
Right array: 10
Merged array after merge: 9 10 82
out merge
out mergeSort: left=4 right=6


in merge: left=0 mid=3 right=6
Left array: 3 27 38 43
Right array: 9 10 82
Merged array after merge: 3 9 10 27 38 43 82
out merge
out mergeSort: left=0 right=6
Sorted array:


in printArray
3 9 10 27 38 43 82
out printArray
*/