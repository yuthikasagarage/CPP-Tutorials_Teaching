#include <iostream>

#include "gradebook.h"


int main() {

//passing on 2 arrays

  int gradesArray [gradebook::students] [gradebook::tests]= {{87,78,88},
	  {12,45,88},{89,63,45},{65,68,12},{65,68,12},{65,68,12},{65,68,12},{65,68,12},{65,68,12},{65,68,12}};

  gradebook mygrades("CS101", gradesArray);

  mygrades.display();
  mygrades.processgrade();



  return 0;
}
