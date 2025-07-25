// function calling sequence

#include <iostream>
using namespace std;

void fun1();
void fun2();
void fun3();

void fun1() {
  cout << " in fun1  -> ";
  fun2();
  cout << " out fun1  -> ";
}

void fun2() {
  cout << " in fun2  -> ";
  fun3();
  cout << " out fun2  -> ";
}

void fun3() {
  cout << " in fun3  -> ";
  cout << " out fun3  -> ";
}

int main(void) {
  cout << "" << endl;
  cout << "in main  -> ";
  fun1();
  cout << "out main" << endl;
  cout << "" << endl;
  return 0;
}