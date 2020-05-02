#include <iostream>
#include <cstdlib>
#include <stdexcept>

// c++ doesn't provide the garbage collection
// can overload new and delete operators not the key word


//student *x = new student(); this is how we usually do the dynamic memory allocation
using namespace std;

class student {
  string name;
  int age;
 public:
  student() {
	name = "no name ";
	age = 0;

  }

  student(string y, int x) {
	this->name = y;
	this->age = x;
  }

  void who() {
	cout << "hi hi" << endl;
  }
//new returns a type of a void pointer, any pointer can be returned by the void pointer anyway
  void * operator new(size_t size) { // this size_t is data type define in c++ which cam hold the largest piece of memory that can be allocated
	void *p;
	cout << "overloaded " << size << endl;
	p = malloc(size);
	if (!p)
	  {
	  bad_alloc ba;
	  throw ba;
	  }
	return p;
  }

  void operator delete(void *x) {
	cout << "overloaded delete" << endl;
	free(x);
  }
};

int main() {

  student *yuthika; //

  try
	{
	yuthika = new student("s", 101);

	yuthika->who();
	delete (yuthika);
	}
  catch (bad_alloc &x)
	{

	cout << "omg " << x.what() << endl;

	}
/* here the overloaded delete and new keyowrds will be in the scope of the class , only when a object of type of that class is created
 * */

cout << "Hello, World!" << endl;
return 0;
}