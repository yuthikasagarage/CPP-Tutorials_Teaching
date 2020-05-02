#include <iostream>
#include "Entity.h"
int main() {


  int a = 2; // statically in stack

  int *ptr = new int; // now it's allocated in heap,

  int *ptr1 = new int [50]; // dynamically allocate the memory array in heap, array of int objects

  Entity *entity1 = new Entity(); // default constructor object is made in the heap

  Entity *e1 = new Entity[21]; // array of entity objects,
  // this is allocated using the array operator delete needs to be also specific. operator new [] is a different overload


  Entity *e2 = new(e1) Entity(); // this is also correct, we are allocating the memory and calling constructor and
  // also give a specific memory chunk in memory inside new() parenthesis


	delete entity1;

	delete []e1;











  std::cout << "Hello, World!" << std::endl;
  return 0;
}
