//
// Created by yuthika on 2020-04-30.
//


#include "Employee.h"

class disEmployee : public Employee {

 public:

  disEmployee(const string &first, const string &last, const string &ssn, double salary);

  void setWeeklySalary(double salary);

  double getWeeklySalary() const;



  virtual void print() const ;

  virtual double earnings() const; // overridden function


 private:
  double salary;

};


