//
// Created by yuthika on 2020-04-26.
//

#ifndef CUSTOM_OBJECT_IN_CUSTOM_CLASS__EMPLOYEE_H_
#define CUSTOM_OBJECT_IN_CUSTOM_CLASS__EMPLOYEE_H_
#include "date.h"

class employee {

 public:

  employee(const char *const, const char *const, const date &hiredates, const date &birthdates, date &x);
  // const pointer of type const char                 //reference to a type const date

  void print() const;

  ~employee();

 private:

  char firstname[25];
  char lastname[25];

  const date dateofbirth; // when you put an object of class into a another class definition that is referred to as composition or has relationship
  const date dateofhire; // these are const members
  date non_const_date_object_inside_another_class_;

};

#endif //CUSTOM_OBJECT_IN_CUSTOM_CLASS__EMPLOYEE_H_
