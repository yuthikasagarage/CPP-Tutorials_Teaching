//
// Created by yuthika on 2020-04-20.
//


#include <iostream>
using namespace std;

class person {
 private:

  string name;
  int age;

 public:

  person(string name, int age) {

	this->name = name;
	this->age = age;
  }


  void display(){

    cout << name << age << endl;
  }

};