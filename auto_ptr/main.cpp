#include <iostream>
#include "integer.h"
#include <memory>

using namespace std;

int main() {

  //integer *X = new integer(7); // <----- the way we dynamically made the pointer to an object X, before

  cout << "creating an unique_ptr" << endl;
  unique_ptr<integer> ptrToInteger(new integer(7)); // new will return a pointer of type integer and it will stored in the ptrToInteger object
// constructor is call inside the name ptrToInteger(new integer(7) <------ this part is the constructor)

  // now this ptrToInteger is an pointer to the object of class integer

  ptrToInteger->setInteger(10);
  cout << ptrToInteger->getInteger() << endl;

  (*ptrToInteger).setInteger(20);
  cout << (*ptrToInteger).getInteger() << endl;

  return 0;
}
