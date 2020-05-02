//
// Created by yuthika on 2020-04-22.
//

#include "gradebook.h"
#include <cmath>

gradebook::gradebook(string iname) {

 	setname(iname);

}

void gradebook::display() {
  cout << name << endl;


}

void gradebook::setname(string iname) {


  name = iname;

}
string gradebook::getname() {

  return name;

}
void gradebook::determine_avg() {

  int total;
  float grade;
  float avg = 0;
  float avg_sqrd =0;
  total = 0;
	int counter = 0;

	while (counter <= 10 ){

	  cout << "please enter the grade " <<endl; ;

	  cin >> grade;

	  total += grade;
	  counter ++;
	  avg = (float)total/ (float)counter;
	 avg_sqrd  = pow(avg,2);
	}

	cout <<"average is " << std::setprecision(2) <<std::fixed<< std::setw(20)<<avg << endl; // stream modifying manipulators used here
  cout <<"average is " << std::setprecision(2) <<std::fixed<<std::setw(20) <<avg_sqrd << endl; // stream modifying manipulators used here
//set width setw()
//set_precision()  precision
//fixed give 0.10 without giving up 0.1 like this
}
// x++ post increment , use the current value in this line of operation
// ++x pre increment , use the incremented value in this line of operation