//
// Created by yuthika on 2020-04-30.
//

#include "Employee.h"
#include <iostream>

using namespace std;

Employee::Employee(const string &first, const string &last, const string &ssn)
: firstName(first) , lastName(last), SSN(ssn)
{
  } // we're required to have a constructor


void Employee::setFirstName(const string &first) {
firstName = first;

}
string Employee::getFirstName() const {
  return firstName;
}


string Employee::getLastName() const {
  return lastName;
}
void Employee::setLastName(const string &last) {

  lastName = last;

}
void Employee::setSSN(const string &ssn) {

  SSN = ssn;

}
string Employee::getSSN() const {

  return SSN;
}
void Employee::print() const {

  cout << getFirstName() << " " << getLastName() << " " << getSSN() << endl;

}
Employee::~Employee() {
 cout << "destructor of Employee Class called" << endl;
}

/*
 * const object can only access const member functions
 * non const objects can access any
 *
 */