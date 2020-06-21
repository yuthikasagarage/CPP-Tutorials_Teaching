//
// Created by yuthika on 2020-04-23.
//


#include "gradebook.h"

gradebook::gradebook(string name, const int gradesArray[][tests]) {

  setCourseName(name);


  // copy from gradesArray which is the array we submit when we instantiate an object in the constructor
  // to the grades array which is private to the class
  for (int i = 0; i < students; i++)
	{
	for (int j = 0; j < tests; j++)
	  {
	  grades[i][j] = gradesArray[i][j]; // here grades[i] will be the student number [j] will the tests
	  }
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
	for (int j = 0; j < tests; j++){

	  if (grades[i][j] > maxs)
		{

		maxs = grades[i][j];
		}
	}
  }
  return maxs;

}

int gradebook::get_min() {
  int mins = 100;
  for (int i = 0; i < students; i++)
	{
	for (int j = 0; j < tests; j++){

	  if (grades[i][j] < mins)
		{

		mins = grades[i][j];
		}
	  }
	}
  return mins;

}


double gradebook::avg() {


  return 0;
}

void gradebook::barchart() {

  const int frequencySize = 11;

  int frequency[frequencySize] = {}; // initialize all elements to 0


  for (int i = 0; i < students; i++)
	{
	for (int test = 0; test < tests; test++)
	  {
	  frequency[grades[i][test] / 10] = frequency[grades[i][test] / 10] + 1;

	//  cout << frequency[grades[i][test] / 10] << endl;
	  }
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

  cout << "        ";
	for(int test = 0 ; test< tests ; test ++){
	  cout <<setw(16) <<"   Tests " << test + 1  ;
	}
cout << setw(10)<< "average";

cout << endl;
  for (int i = 0; i < students; i++)
	{

	cout << "student" << std::setw(2) << i + 1;

	for (int j = 0; j < tests; j++)
	  {

	  cout << setw(12) << grades[i][j] <<"      ";
	    }
	    //double avg = get_avg(grades[students], tests); // grades

	double avg = get_avg(grades[i], 3); // grades[1] < --- 1st row {78,82,99} something like this then we access the 123 of this thing
		cout << setprecision(2) <<fixed << avg << endl;

	}

}

void gradebook::processgrade() {

  output_grades();
 // cout << " class average is " << avg() << endl;
  cout << " max " << get_max() << endl;
  cout << " min " << get_min() << endl;

 barchart();

}
double gradebook::get_avg(const int setofgrades[], const int grades) { // we can use this 1st [] as rows in two dimensional one dimensional case

	int total = 0;

	//
	// cout <<setofgrades[1] << endl;

	for(int i = 0 ; i < grades; i++){

	  total += setofgrades[i];


	}

	return static_cast<double >(total)/grades;

}
