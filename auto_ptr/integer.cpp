//
// Created by yuthika on 2020-05-01.
//
#include <iostream>
using namespace std;
#include "integer.h"
integer::integer(int i) : value(i) {
cout << "constructor called" << endl;
}
integer::~integer() {
  cout << "destructor called" << endl;

}

void integer::setInteger(int i) {
  value = i;
}
int integer::getInteger() const {
  return value;
}
