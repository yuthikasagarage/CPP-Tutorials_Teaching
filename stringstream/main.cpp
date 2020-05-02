#include <iostream>
#include <sstream>

using namespace std;

int main() {




  cout << "enter an integer value " << endl;

//  int x;
//
//  cin >> x ;
//
//
//  stringstream sso;
//
//  sso << x; // input to this sso object
//
//  string strinput;
//
//  sso >> strinput; // output to the stringput variable, now this strinput contains a string value
//
//  cout << " integer number " << x << endl;
//	cout << " string form " << strinput << endl;




string number = "44";

stringstream sso ; // string to any type conversion by stringstream

sso << number; // stream input operator

int x;

sso >> x; // stream extraction operator

cout << x << endl;


















  std::cout << "Hello, World!" << std::endl;
  return 0;
}