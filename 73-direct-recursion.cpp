// direct recursion
#include <iostream>
using namespace std;

void print(int n) {
  if (n == 0) // base case / termination condition
  {
    return;
  }

cout << "n = "<< n << endl;
print(n - 1);

}

int main(void) {
  print(5);

  return 0;
}