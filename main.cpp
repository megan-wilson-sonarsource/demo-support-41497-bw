#include <cstdio>
#include <iostream>
using namespace std;

int main() {
  cout  << "Hello World \n";

  char buffer[100];
  int age = 23;

  // print "My age is " and age variable to buffer variable
  sprintf(buffer, "My age is %d", age);

  // print buffer variable
  cout << buffer;
  cout << "\n";

  return 0;
}
