//
// Created by yuthika on 2020-04-26.
//

#include "employee.h"
#include <cstring>
#include <iostream>

using  namespace  std;
using std::strlen;
using std::strncpy;

employee::employee(const char *const first, const char *const last, const date &birthdates, const date &hiredates, date &x)
	: dateofhire(hiredates), dateofbirth(birthdates) { // initializer list since const members
  // which makes use of the copy constructor

  // let's say we have a non const object of another class
// when using copy constructor it's good to use reference since we want the object to point to the copying object


	non_const_date_object_inside_another_class_ = x;

	// this is using the copy constructor we are copying the x object of type data to the object we have inside the class,
	// for const ones the copy constructor should be in the initializer list



// since the dateofbirth and dateofhire are const members of the class it has to be initialized in the constructor by the arguments we provide or by any constant
// values / it is more like saying dateofhire = hiredate

// what we're saying here is -----> make a copy of the bithdates and initialize dateofbirth member in the employee class with thos contents

  int length = strlen(first);
  length = (length < 25 ? length : 24);
  strncpy(firstname, first, length);
  firstname[length] = '\0';

  length = strlen(last);
  length = (length < 25 ? length : 24);
  strncpy(lastname, last, length);
  lastname[length] = '\0';

  cout << " employee object constructor  " << firstname << "  " << lastname << endl;
	cout << endl;
}

void employee::print() const {


	cout << lastname << ","  << firstname << endl;
	cout <<"hired "  ;
	dateofhire.print();
	cout << "Birthday ";
	dateofbirth.print();
	cout << endl;



}

employee::~employee() {

  cout <<" destructor called for employee object  " <<firstname<< " " << lastname<< endl;

}
