// indirect recursion

#include<iostream>
using namespace std;

void fun1(int n);
void fun2(int n);

void fun1(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "in fun1" << endl;
    cout << "n = "<<n << endl;
    fun2(n-1);
}

void fun2(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << "in fun2" << endl;
    cout << "n = "<<n << endl;
    fun1(n-1);
}

int main(void)
{
    fun1(5);
    cout << "" << endl;
    cout << "" << endl;
    fun2(5);
}