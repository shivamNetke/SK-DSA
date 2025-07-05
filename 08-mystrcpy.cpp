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

int main(void) {
  char str1[20] = "helloshivam";
  char str2[20] = {0};

  cout << "before\n";
  cout << "str1 = " << str1 << endl;
  cout << "str2 = " << str2 << endl;

  char *temp = mystrcpy(str2, str1);

  cout << "after\n";
  cout << "str1 = " << str1 << endl;
  cout << "str2 = " << str2 << endl;
  cout << "temp = " << temp << endl;

  return 0;
}
// --OUTPUT--
// before
// str1 = helloshivam
// str2 =
// after
// str1 = helloshivam
// str2 = helloshivam
// temp = helloshivam