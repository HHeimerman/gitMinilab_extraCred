#include "myclass.h"

MyClass::MyClass() {
}

MyClass::MyClass(int x_) { 
  x = x_;
  newX = x_*2; 
}

int MyClass::getX() { 
  return x; 
}
int MyClass::getNewX() { 
  return newX; 
}
