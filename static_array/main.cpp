#include <iostream>
using namespace std;

void staticArrayInit();
void autoarrayinit();



int main() {




  staticArrayInit();
  autoarrayinit();




  std::cout << "Hello, World!" << std::endl;
  return 0;
}


void staticArrayInit(){

  static int array1[3];

  for (int i = 0; i <3 ; i ++){

 	cout <<array1[i] << endl;  // here when you say static array is initialized with zeros

  } // here when it goes out of scope the static array stays





}
void autoarrayinit() {


int array2[3];

  for (int i = 0; i <3 ; i ++){ // this gives garbage values

	cout <<array2[i] << endl;  // here when you say static array is initialized with zeros

	}

} // now this array2 is erased from stack when goes out of scope
