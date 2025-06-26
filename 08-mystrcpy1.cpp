#include <iostream>
#include <string.h>
using namespace std;

char *mystrcpy(char *dest, const char *src) {
  int i = 0;
  while (src[i] != '\0') {
    dest[i] = src[i];
    i++;
  }

  dest[i] = '\0';

  return dest;
}

int main() {
  char str1[20] = "HelloWorld";
  char str2[20] = {0};

  cout << "Before" << endl;
  cout << "str1 = " << str1 << endl;
  cout << "str2 = " << str2 << endl;

  // char *temp = strcpy(str2, str1);
  char *temp = mystrcpy(str2, str1);

  cout << "After" << endl;
  cout << "str1 = " << str1 << endl;
  cout << "str2 = " << str2 << endl;
  cout << "temp = " << temp << endl;

  return 0;
}