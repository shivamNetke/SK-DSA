// head and tail recursion

#include <iostream>
using namespace std;

void fun1(int n) {
  if (n == 0) {
    return;
  }

  // head recursion
  fun1(n - 1);
  cout << n << endl;
}

void fun2(int n)
{
    if (n == 0)
    {
        return;
    }

    cout << n << endl;
    fun2(n-1);
}

int main() {
  cout << "head recursion" << endl;
  fun1(5);
  cout << "\ntail recursion" << endl;
  fun2(5);
  return 0;
}