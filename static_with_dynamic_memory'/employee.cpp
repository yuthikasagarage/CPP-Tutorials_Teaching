// Fig. 10.22: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using std::cout;
using std::endl;

#include <cstring> // strlen and strcpy prototypes
using std::strlen;
using std::strcpy;

#include "employee.h" // Employee class definition
// define and initialize static data member at file scope


int Employee::count = 0; // cannot include keyword static



// define static member function that returns number of
// Employee objects instantiated (declared static in Employee.h)

int Employee::getCount() {
  return count;
} // end static function getCount


// constructor dynamically allocates space for first and last name and
// uses strcpy to copy first and last names into the object
Employee::Employee(const char *const first, const char last[]) // same thing const char x [] and const char * x
// thing is we can't define const to the array when we use [] operator
{
  firstName = new char[strlen(first) + 1]; // create space dynamically

  //NEW OPERATOR ALWAYS RETURNS A POINTER OF TYPE THAT IS MENTIONED

  strcpy(firstName, first); // copy first into object

  lastName = new char[strlen(last) + 1]; // create space dynamically
  strcpy(lastName, last); // copy last into object

  count++; // increment static count of employees
  cout << "Employee constructor for " << firstName
	   << ' ' << lastName << " called." << endl;
} // end Employee constructor

// destructor deallocates dynamically allocated memory

Employee::~Employee() {
  cout << "~Employee() called for " << firstName
	   << ' ' << lastName << endl;

  delete[] firstName; // release memory // always delete the memory if created with new keyword
  delete[] lastName; // release memory

  count--; // decrement static count of employees

} // end ~Employee destructor

// return first name of employee
const char *Employee::getFirstName() const {
  // const before return type prevents client from modifying
  // private data; client should copy returned string before
  // destructor deletes storage to prevent undefined pointer
  return firstName;
} // end function getFirstName

// return last name of employee
const char *Employee::getLastName() const {
  // const before return type prevents client from modifying
  // private data; client should copy returned string before
  // destructor deletes storage to prevent undefined pointer
  return lastName;
} // end function getLastName
