

// Fig. 10.21: Employee.h
// Employee class definition.
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee {

 public:


  Employee(const char *const first, const char *const last); // constructor

  ~Employee(); // destructor

  const char *getFirstName() const; // return first name
  const char *getLastName() const; // return last name

  // static member function
  static int getCount(); // return number of objects instantiated

 private:
  char *firstName;
  char *lastName;

  // static data
  static int count; // number of objects instantiated
}; // end class Employee

#endif
