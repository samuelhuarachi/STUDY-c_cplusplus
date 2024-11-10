#include "Mystring.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  Mystring a{"Hello"};
  Mystring b;

  b = a;

  b = "This is a test";
}
