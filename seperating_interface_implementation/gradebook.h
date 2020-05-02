//
// Created by yuthika on 2020-04-22.
//

#ifndef SEPERATING_INTERFACE_IMPLEMENTATION__GRADEBOOK_H_
#define SEPERATING_INTERFACE_IMPLEMENTATION__GRADEBOOK_H_
#include <iostream>
#include <iomanip>

using namespace std;

class gradebook {

 public:

  gradebook(string);
  void setname(string);
  string getname();
  void display();
  void determine_avg();

 private:

  string name;


};

#endif //SEPERATING_INTERFACE_IMPLEMENTATION__GRADEBOOK_H_
