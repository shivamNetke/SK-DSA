// direct recursion

#include<iostream>
using namespace std;

void hello(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    hello(n-1);
}
int main(void)
{
    hello(5);
    return 0;
}