#include <iostream>


#include <iomanip>

#include <vector>
#include "T.h"

using namespace  std;

void outVector(const std::vector<int > &x); // pass by reference
void inVector(std::vector<int > &x); // pass by reference


template  <typename  T> int haha(){

}


int main() {


 std::vector< int > integers1(7); // class <type> name(size) vector class constructor
  std::vector< int > integers2(10); // class <type> name(size) vector class constructor

	std::vector<T> x(4);


  cout << integers1.size() << endl;

	outVector(integers1);

	cout << endl;
	outVector(integers2);
 	 cout << endl;

	inVector(integers1);
 	 cout << endl;
  	outVector(integers1);
		cout << endl;
	if(integers1 != integers2){

	  cout << "contents are not equal " << endl;
	}

	vector <int> integer3(integers1); // copy constructor

	cout << integer3.size() << endl << endl;
  outVector(integer3);

	cout << endl;
	if (integer3 == integers1){

	  cout << "contents  equal " << endl;

	}

	integers1[1] = 500;

	integers1.at(15) = 100;// there is no 15th element gives an out of range error !!!



	outVector(integers1);


  return 0;
}

void outVector(const std::vector<int > &x){ // need to pass by reference

  std::size_t i; // size function in class vector returns a type of size_t

  for(i = 0 ; i < x.size() ; i++){

	cout << setw(12) << x[i]; // c++ vector class has overloaded the [] operator to work as an array

	if((i +1)% 4 == 0){
	  cout << endl;
	}

	}

  if (i %4 == 0){
	cout << endl;

  }

}

void inVector(std::vector<int > &x ){

  for(std::size_t i = 0 ; i < x.size() ; i ++){


	cin >> x[i];
  }







}