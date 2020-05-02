#include <iostream>

using  namespace std;
int byvalue(int number);

int byref(int &number);
int byref1(int *ptr);


int p = 10; // global variable

int main() {


  int p = 100; // scope to main


  /*
   *
   * signature of a function is
   *
   * int *******myfunc(double x)*****{
  *  inside stars lies the signature of a a function
   *
   *  so if the signature of the function is different functions can be overloaded
   */

  cout << p << endl; // gets the local value
  cout << ::p << endl; // gets the global p  go and find global scope for a variable

  int x = 2;
  int z = 4;
	int y  = 3;

	cout<< x << endl;
cout << byvalue(x) << endl;
cout<< x << endl;


  cout << z << endl;
cout << byref(z) << endl;
cout << z << endl;



  cout<< y << endl;
  cout << byref1(&y) << endl;
  cout<< y << endl;

  std::cout << "Hello, World!" << std::endl;
  return 0;
}


int byvalue(int number){ // a copy is passed


  number = number*number;
  return number;
}


int byref(int &number){ // address is passed

  number = number*number;

  return number;
}


int byref1(int *ptr){

  *ptr = *ptr * (*ptr);

  return *ptr;
}