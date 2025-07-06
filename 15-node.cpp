#include <iostream>
using namespace std;

struct Node {
  int data;
  struct Node *nextAdd;
};

int main() {
  struct Node n;

  cout << "data = " << n.data << endl;
  cout << "next add = " << n.nextAdd << endl;

  n.data = 10;
  n.nextAdd = 0;
  cout << "data = " << n.data << endl;
  cout << "next add = " << n.nextAdd << endl;
  return 0;
}