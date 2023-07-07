#include "my_class.h"

MyClass::MyClass()
{
  
}

int MyClass::FactorialRecursive(int n) {
  if ((n == 0) || (n == 1))
    return 1;
  else 
    return n*FactorialRecursive(n-1);
}

int MyClass::FactorialIterative(int n) {
  int factorial = 1;
  for (int i=1; i<=n; i++) {
    factorial *= i;
  }
  return factorial;
}

