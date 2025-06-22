//  search in array

#include <iostream>
using namespace std;

int SearchInArray(int arr[], int iSize, int iKey) {
  for (int iCnt = 0; iCnt < iSize; iCnt++) {
    if (arr[iCnt] == iKey) {
      return iCnt;
    }
  }
  return -1;
}

int main(void) {
  int iArr[5] = {10, 20, 30, 40, 50};
  int iKey = 10;
  int iSize = 5;

  int iResult = SearchInArray(iArr, iSize, iKey);

  if (iResult != -1) {
    cout << "Element fount at Index " << iResult;
  } else {
    cout << "Element not fount at Index ";
  }
}