#include <iostream>
#include "date.h"
#include "employee.h"

using namespace std;

int main() {

  date birth(7, 3, 1990);

  birth.print();

  date hire(21, 2, 1998);
  date x(21, 2, 1998);


  hire.print();

  employee yuthika("yuthika", "sagarage", birth, hire, x);

  yuthika.print();

  cout << endl;

  cout << "testing to invalid values" << endl;

  date lastdate(63, 544, 1998);
  lastdate.print();

}
