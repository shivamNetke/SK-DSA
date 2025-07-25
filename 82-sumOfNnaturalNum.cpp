// sum of n natural numbers

// Sum of First 10 Natural Numbers

#include <iostream>
using namespace std;

int SumOfFirstNN(int n)
{
  if (n == 0)
  {
    return 0;
  }

  cout << "n = " <<n << endl;
  
  return n + SumOfFirstNN(n - 1);
}

int main()
{
  cout << SumOfFirstNN(10) << endl;

  return 0;
}