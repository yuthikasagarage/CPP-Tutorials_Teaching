//
// Created by yuthika on 2020-04-26.
//

#include "date.h"
#include <iostream>
using namespace std;

date::date(int dy, int mn, int yr) {

  if (mn > 0 && mn < 13)
	{
	month = mn;
	}
  else
	{

	month = 1;
	cout << "invalid month entered  as" << endl;
	}

  year = yr;

  day = check_day(dy);

}
date::~date() {

  cout << "destrutor called" << endl;

}
void date::print() const {

  cout << month << "/" << day << "/" << year << endl;

}

int date::check_day(int testday) const {

  static const int dayspermonth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  if (testday > 0 && testday <= dayspermonth[month])
	return testday;

  if (month == 2 && testday == 29 && (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
	return testday;

  cout << "invalid date entered" << endl;

  return 1;
}
