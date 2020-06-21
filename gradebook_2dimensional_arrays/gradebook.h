//
// Created by yuthika on 2020-04-23.
//

#ifndef CLASSES_WITH_ARRAYS__GRADEBOOK_H_
#define CLASSES_WITH_ARRAYS__GRADEBOOK_H_
#include <iostream>
using namespace std;
#include <iomanip>
#include <cmath>
class gradebook {

 public:

  const static int students = 10; // there's only one copy of this for all the objects static inside of a class
  const static int tests = 3;



  gradebook(string x, const int[][tests]);


  void setCourseName(string name);

  string getCoursename();

  void processgrade();
  void display();
  int get_max();
  int get_min();
  double avg();
  double get_avg(const int [], int);

  void barchart();
  void output_grades();

 private:
  string coursename;
  int grades[students][tests];


};










#endif //CLASSES_WITH_ARRAYS__GRADEBOOK_H_
