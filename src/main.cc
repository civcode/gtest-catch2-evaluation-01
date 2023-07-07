#include "my_class.h"

#include <iostream>
#include <memory>

using std::cout;
using std::endl;

int main() {

  //MyClass my_class;

  auto my_class_ptr = std::shared_ptr<MyClass>(new MyClass());

  // for (int i=0; i<4; i++) {
  //   cout << "fact(" << i << ") = " << my_class.FactorialRecursive(i) << endl;
  //   cout << "fact(" << i << ") = " << my_class.FactorialIterative(i) << endl;
  //   cout << endl;
  // }

  cout << "pointer" << endl;
  for (int i=0; i<4; i++) {
    cout << "fact(" << i << ") = " << my_class_ptr->FactorialRecursive(i) << endl;
    cout << "fact(" << i << ") = " << my_class_ptr->FactorialIterative(i) << endl;
    cout << endl;
  }
  return 0;
}