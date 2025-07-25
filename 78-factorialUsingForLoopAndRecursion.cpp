// factorial using for loop and recursion

#include <iostream>
using namespace std;

void factorialLoop(int n) {
  int fact = 1;
  for (int i = n; i > 0; i--) {
    fact = fact * i;
  }
  cout << endl << "factorial of " << n << " is " << fact << endl;
}

int factorialRecursion(int n) {
  int fact;
  if (n == 1) {
    return 1;
  }

  return n * factorialRecursion(n - 1);
}

int main(void) {
  factorialLoop(5);
  int result = factorialRecursion(5);
  cout << "factorial of is "<< result << endl;
}