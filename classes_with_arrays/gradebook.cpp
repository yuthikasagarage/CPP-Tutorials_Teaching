//
// Created by yuthika on 2020-04-23.
//


#include "gradebook.h"

gradebook::gradebook(string name, const int gradesArray[]) {

  setCourseName(name);

  for (int i = 0; i < students; i++)
	{
	grades[i] = gradesArray[i];
	}

}

void gradebook::setCourseName(string name) {

  coursename = name;

}

string gradebook::getCoursename() {

  return coursename;
}

void gradebook::display() {

  cout << "welcome to the gradebook for \n" << getCoursename() << endl;

}

int gradebook::get_max() {
  int maxs = 0;
  for (int i = 0; i < students; i++)
	{

	if (grades[i] > maxs)
	  {

	  maxs = grades[i];
	  }
	}
  return maxs;

}

int gradebook::get_min() {
  int mins = 100;
  for (int i = 0; i < students; i++)
	{

	if (grades[i] < mins)
	  {

	  mins = grades[i];
	  }
	}

  return mins;
}

double gradebook::avg() {

  int total = 0;

  for (int i = 0; i < students; i++)
	{

	total += grades[i];

	}
  return static_cast<double> (total) / students;
}

void gradebook::barchart() {

  const int frequencySize = 11;

  int frequency[frequencySize] = {}; // initialize all elements to 0


  for (int i = 0; i < students; i++)
	{


	frequency[grades[i] / 10] = 	frequency[grades[i] / 10]  +1;

	cout <<	frequency[grades[i] / 10] << endl;
	}

  for (int count = 0; count < frequencySize; count++)
	{

	if (count == 0)
	  cout << "0-9: ";
	else if (count == 10)
	  cout << "100: ";
	else
	  cout << count * 10 << "-" << (count * 10) + 9 << ": ";

	for (int stars = 0; stars < frequency[count]; stars++)
	  {

	  cout << "* ";


	  }
	  cout << endl;

	}

}

void gradebook::output_grades() {
  for (int i = 0; i < students; i++)
	{

	cout << "student" << std::setw(2) << i + 1 << " :" << std::setw(3) << grades[i] << endl;
	}

}

void gradebook::processgrade() {

  output_grades();
  cout << " class average is " << avg() << endl;
  cout << " max " << get_max() << endl;
  cout << "min " << get_min() << endl;

  barchart();

}
