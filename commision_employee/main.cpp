// Fig. 11.6: fig11_06.cpp
// CommissionEmployee class test program.
#include <iostream>
#include <iomanip>
#include "CommissionEmployee.h" // CommissionEmployee class definition
#include "BaseplusCommission_employee.h"
using namespace std;

int main() {
  // instantiate a CommissionEmployee object
  CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, .06); // give names in the declaration

  BaseplusCommission_employee yuthika("yuthika", "sagarage", "123156546", 15000,0.5,5000);
//
//  cout <<"Base plus commission earnings " <<yuthika.earnings() << endl;
//  yuthika.print() ;
//

  // using pointers with classes



  BaseplusCommission_employee * derived_ptr = nullptr;

  derived_ptr = &yuthika;
 cout<< derived_ptr->print() << endl;


  CommissionEmployee *base_ptr1 = nullptr;
  base_ptr1 = &employee; // only can assign a derived class, so it should be in the right hand side

  cout << base_ptr1->print() << endl; // this will go to the base class print function

	// through base class pointer you can only go in base class members like this without using virtual


	CommissionEmployee * base_2 = nullptr;

	// we take a base class pointer and point to a derived class object
	base_2 = &yuthika;
	cout<< "poly" << endl;
	cout << base_2->print() << endl;








  // get commission employee data
//  cout << fixed << setprecision(2); // set floating-point formatting
//  cout << "Employee information obtained by get functions: \n"
//	   << "\nFirst name is " << employee.getFirstName()
//	   << "\nLast name is " << employee.getLastName()
//	   << "\nSocial security number is "
//	   << employee.getSocialSecurityNumber()
//	   << "\nGross sales is " << employee.getGrossSales()
//	   << "\nCommission rate is " << employee.getCommissionRate() << endl;
//
//  employee.setGrossSales(8000); // set gross sales
//  employee.setCommissionRate(.1); // set commission rate
//  cout << "\nUpdated employee information from function toString: \n\n"
//	   << employee.print();

  // display the employee's earnings
 // cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
}


