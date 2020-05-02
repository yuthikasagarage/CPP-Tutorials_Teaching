//
// Created by yuthika on 2020-04-29.
//

#ifndef COMMISION_EMPLOYEE__BASEPLUSCOMMISSION_EMPLOYEE_H_
#define COMMISION_EMPLOYEE__BASEPLUSCOMMISSION_EMPLOYEE_H_


#include "CommissionEmployee.h"


class BaseplusCommission_employee : public CommissionEmployee {

 public:

  BaseplusCommission_employee (const std::string& First, const std::string& Last,
							   const std::string& ssn, double sales= 0.0, double rate= 0.0, double salary = 0.0);

  ~BaseplusCommission_employee();

  void setBaseSalary(double salary);

  double getBaseSalary() const;

  virtual double earnings() const;

 virtual std::string print() const;

 private:
  double salary;

};

#endif //COMMISION_EMPLOYEE__BASEPLUSCOMMISSION_EMPLOYEE_H_
