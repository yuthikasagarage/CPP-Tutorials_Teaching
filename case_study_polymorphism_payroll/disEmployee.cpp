//
// Created by yuthika on 2020-04-30.
//

#include "disEmployee.h"
//
// Created by yuthika on 2020-04-30.
//
#include <iostream>


using namespace std;

disEmployee::disEmployee(const string &first, const string &last, const string &ssn, double salary)
	: Employee(first, last, ssn) { // initialize from the base class

  setWeeklySalary(salary);
}

void disEmployee::setWeeklySalary(double isalary) {
  salary = isalary;
}

double disEmployee::getWeeklySalary() const {
  return salary * 0.75;
}

void disEmployee::print() const {

  cout << "discriminated employee" << endl;
  Employee::print() ;
  cout << " weekly salary  :" << getWeeklySalary() << endl;

}
// override pure virtual function in base class, has to have the same signature
double disEmployee::earnings() const {

  return  getWeeklySalary();

}
