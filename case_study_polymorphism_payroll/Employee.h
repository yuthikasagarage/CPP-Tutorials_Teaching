//
// Created by yuthika on 2020-04-30.
//

#ifndef CASE_STUDY_POLYMORPHISM_PAYROLL__EMPLOYEE_H_
#define CASE_STUDY_POLYMORPHISM_PAYROLL__EMPLOYEE_H_
#include <string>
using namespace std;

// since this class has a pure virtual function we cannot have a members , this becomes an abstract class

class Employee {

 public:

  Employee(const string & first, const string & last, const string & ssn);

  ~Employee();

  void setFirstName(const string & first);
  string getFirstName() const;

  string getLastName() const; // this is a const member function, we cannot modify instance members
  void setLastName(const string & last);

  void setSSN(const string & ssn);
  string getSSN() const;


  virtual void print() const; // virtual keyword tells the compiler that these function calls are not statically bound the function calls to pointers and references
  // it will be bound at runtime
  // basically it is saying that type  the object that calls this function is going to change at runtime and i want to delay the decision until the
  // execution time, so which version of this print() function will decide on the object that calls it at runtime
  virtual double earnings() const= 0 ; // this is a pure virtual function

 private:

  string firstName;
  string lastName;
  string SSN;


};

#endif //CASE_STUDY_POLYMORPHISM_PAYROLL__EMPLOYEE_H_
