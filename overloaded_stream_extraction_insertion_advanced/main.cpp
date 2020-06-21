#include <iostream>





#include "PhoneNUmber.h"





using  namespace  std;





int main() {


  PhoneNUmber phone;

  cin >> phone; // we have to make an operator overloading for the >> operator

  cout << phone << endl; //same here

  std::cout << "Hello, World!" << std::endl;
  return 0;
}
