//
// Created by yuthika on 2020-04-30.
//

#ifndef CASE_STUDY_POLYMORPHISM_PAYROLL__SALARIEDEMPLOYEE_H_
#define CASE_STUDY_POLYMORPHISM_PAYROLL__SALARIEDEMPLOYEE_H_

#include "Employee.h"

class SalariedEmployee : public Employee {

 public:

  SalariedEmployee(const string &first, const string &last, const string &ssn, double salary);

  void setWeeklySalary(double salary);

  double getWeeklySalary() const;



  virtual void print() const ;

  virtual double earnings() const; // overridden function


 private:
  double salary;

};

#endif //CASE_STUDY_POLYMORPHISM_PAYROLL__SALARIEDEMPLOYEE_H_
