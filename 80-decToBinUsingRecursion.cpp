// Decimal To Binary using recursion
#include <iostream>
using namespace std;

void fun(int n) {
  if (n == 0) {
    return;
  }
  fun(n / 2);
  cout << n % 2;
}

int main() {
  cout << "" << endl;
  fun(5);
  cout << "" << endl;

  return 0;
}