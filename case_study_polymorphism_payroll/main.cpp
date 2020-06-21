#include "disEmployee.h"
#include "Employee.h"
#include "SalariedEmployee.h"
#include "iostream"
#include <vector>

using namespace std;

void VirtualvoidPointer(const Employee *const);
void VirtualvoidAdd(const Employee &);

int main() {

  // these are statically bound objects at compile time

  SalariedEmployee yuthika("yuthika", "sagarage", "111-222-5555", 50000);
  yuthika.print();
  cout << endl;
  disEmployee malith("malith", "kuruppu", "54545-454-45", 50000);
  malith.print();
  cout << endl;

#if 0
  vector <type_name> NameofArray(size of array)
#endif

  vector<Employee *> EmployeeArray(2); // Though we cannot make employee objects we can make pointers fo the type employee
  // the pointer is allowed to point to any of the employee derived objects

  int *x = new int[5] ;


  for (int i = 0 ; i < 5 ; i ++){

	x[i] = i ;
  }



  EmployeeArray[0] = &yuthika;
  // on left we have a address of an employee ---------- on right we have an address of salaried employee
  EmployeeArray[1] = &malith;
  // same here

  //here we pass an Employee *, so it's not statically bound objects, at runtime the compiler decides the class by
  // address currently pointed to the object at runtime

  cout << "use dynamically by pointer" << endl;
  VirtualvoidPointer(EmployeeArray[0]);
  VirtualvoidPointer(EmployeeArray[1]);

  cout << "use dynamically by reference" << endl;
  VirtualvoidAdd(*(EmployeeArray[0]));
  VirtualvoidAdd(*(EmployeeArray[1]));


  //dynamically allocate

  vector<Employee *> Dynamic_Array_Employee(2);

  Dynamic_Array_Employee[0] = new SalariedEmployee("hasara", "yadehige", "1123-153-21", 50000);
  Dynamic_Array_Employee[1] = new disEmployee("hasara", "yadehige", "1123-153-21", 50000);

  cout << "derived class pointer points to base class pointer by dynamic cast" << endl;
  // dynamic cast can be used to point an derived class to a base class, under casting
  SalariedEmployee *derived_employee = dynamic_cast<SalariedEmployee *>(Dynamic_Array_Employee[0]);

  derived_employee->print();

  cout << endl;
  cout << "runtime_type_info" << endl;
  cout << typeid(Dynamic_Array_Employee[0]).name() << endl;

  delete [] x;
  delete derived_employee;

  derived_employee = nullptr;

}

// the fact that we are using virtual functions are the fact that which enables runtime decisions as to which function is going to call

// dynamic binding
void VirtualvoidPointer(const Employee *const baseClassPtr) { // constant pointer to the type of const Employee
  // constant pointer mean when parameter gets initialized it will point to the same address up until function call terminates
  // const Employee is saying that we cannot modify the Employee object inside the function

  // we can only see the data and use const member functions of the object

  baseClassPtr->print();
  cout << endl;
}

void VirtualvoidAdd(const Employee &baseclassreference) {

  baseclassreference.print();
  cout << endl;

}