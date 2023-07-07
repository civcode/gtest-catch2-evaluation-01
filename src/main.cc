#include "my_class.h"

#include <iostream>

using std::cout;
using std::endl;

int main() {

  MyClass my_class;

  for (int i=0; i<10; i++) {
    cout << "fact(" << i << ") = " << my_class.FactorialRecursive(i) << endl;
    cout << "fact(" << i << ") = " << my_class.FactorialIterative(i) << endl;
    cout << endl;
  }

  return 0;
}