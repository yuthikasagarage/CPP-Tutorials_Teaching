#include <iostream>
#include "gradebook.h"


int main() {




  gradebook yuthika("hasara");

//  yuthika.setname("hasara emma");

  yuthika.display();

  yuthika.getname();
  yuthika.determine_avg();



  std::cout << "Hello, World!" << std::endl;
  return 0;
}