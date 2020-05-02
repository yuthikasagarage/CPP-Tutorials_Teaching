//
// Created by yuthika on 2020-04-29.
//
#include <iostream>
using namespace std;
#include "BaseplusCommission_employee.h"


BaseplusCommission_employee::BaseplusCommission_employee(const std::string &First, const std::string &Last,
			const std::string &ssn, double sales, double rate, double salary) : CommissionEmployee(First, Last, ssn, sales,rate)
			{
	cout << "constructor derived class " << endl;
	setBaseSalary(salary);

}
void BaseplusCommission_employee::setBaseSalary(double isalary) {

	  salary = isalary;

}
double BaseplusCommission_employee::getBaseSalary() const {

  return salary;
}

double BaseplusCommission_employee::earnings() const {


// we do not have a direct access to private members of the base class
// or we can use protected

  return (salary + CommissionEmployee::earnings() + bonus); // this is why set and get methods are done
}
string BaseplusCommission_employee::print() const {

 	cout << CommissionEmployee::print() << endl;
 	cout << endl;
	cout << "derived class function"<<endl;
	cout <<getBaseSalary() << endl;

}
BaseplusCommission_employee::~BaseplusCommission_employee() {

  cout << "derived class destructor" << endl;
}
