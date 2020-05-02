#include <iostream>

using namespace std;

class person {

 public:
  string *name;

  int age;

  person(string name, int age) {

	this->name = new string(name); // dynamic memory allocation for variables
	this->age = age;

  }
  /*
   * copy constructor is nothing but a overloaded constructor it is invoked whenever we copy the object
   */

  person(const person &p){ // this copy constructor will be called whenever we copy an object of this class

	name = new string(*p.name); //when you use pointers as class members , different memory should be allocated p.name is a memory address so dereference to get the value
	age = p.age;
  }

  void changeNandA(string name, int age) {
	*(this->name) = name;
	this->age = age;

  }
  void introduce() {

	cout << age << *name << endl;
  }

};

int main() {
  person yuthika("yuthika", 25);
  yuthika.introduce();

  person duplicate_yuthika = yuthika;

  duplicate_yuthika.introduce();
  yuthika.changeNandA("sagarage", 28);
  yuthika.introduce(); //
  duplicate_yuthika.introduce(); // the duplicates name member is changed, when we use pointers as class members and use dynamic memory allocation it fucks this up
									//now the copy constructor works

  std::cout << "Hello, World!" << std::endl;
  return 0;
}