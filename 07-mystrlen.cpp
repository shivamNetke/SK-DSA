
#include<iostream>
#include<string.h>
using namespace std;

int mystrlen(char arr[])
{
    int i = 0;

    while (arr[i] != '\0')
    {
        i++;
    }
    
    return i;
}

int main(void)
{
    char name[] = "shivam";

    cout<<"name length by strlen = "<<strlen(name)<<endl;
    cout<<"name length by mystrlen = "<<mystrlen(name)<<endl;

    return 0;
}

// --OUTPUT-- 
// name length by strlen = 6
// name length by mystrlen = 6