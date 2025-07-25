// fibonacci using recursion
// 0, 1, 1, 2, 3, 5, 8, 13, 21, ....

#include <iostream>
using namespace std;

int fib(int n)
{
  if (n == 0)
  {
    return 0;
  }

  if (n == 1)
  {
    return 1;
  }
  return fib(n - 1) + fib(n - 2);
}

void PrintFibonacciSeries(int n)
{
  for (int i = 0; i <= n; i++)
  {
    // 0,1,2,3,4
    cout << fib(i) << endl;
  }
  
}
int main()
{
  PrintFibonacciSeries(40);
  return 0;
}