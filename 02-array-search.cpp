// insert at position / index
#include <iostream>
using namespace std;
int searchInArray(int arr[], int iSize, int iKey)
{
    for (int i = 0; i < iSize; i++)
    {
        if (arr[i] == iKey)
        {
            return i;
        }
    }
    return -1;
}

void printArray(int arr[], int iSize)
{
    cout<<"\narray : \n";
    for (int i = 0; i != iSize; i ++)
    {
        cout<<arr[i]<<endl;
    }
}

int main(void) 
{
   int iArr[5] = {10, 20, 30, 40, 50};
   int iKey;
   int iSize = sizeof(iArr) / sizeof(iArr[0]);

   cout<<"enter the key which you want to find : ";
   cin>>iKey;

   int iResult = searchInArray(iArr, iSize, iKey);

   if (iResult != -1)
   {
    cout<<"element found at index : "<<iResult<<endl;
   }
   else
   {
    cout<<"element didnt found"<<endl;
   }

   printArray(iArr, iSize);
}


