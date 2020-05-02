//
// Created by yuthika on 2020-04-30.
//
#include <iostream>
#include "SalariedEmployee.h"

using namespace std;

SalariedEmployee::SalariedEmployee(const string &first, const string &last, const string &ssn, double salary)
: Employee(first, last, ssn) { // initialize from the base class

  setWeeklySalary(salary);
}

void SalariedEmployee::setWeeklySalary(double isalary) {
salary = isalary;
}

double SalariedEmployee::getWeeklySalary() const {
  return salary;
}

void SalariedEmployee::print() const {

  cout << "salaried employee" << endl;
  Employee::print() ;
  cout << " weekly salary  :" << getWeeklySalary() << endl;

}
// override pure virtual function in base class, has to have the same signature
double SalariedEmployee::earnings() const {

  return  getWeeklySalary();

}
