#include <iostream>
using namespace  std;
int main() {


 int arr[5] = {};


 int *x = arr; // reading pointer of type int

 int const *arrr; // these two are same   // const int type of pointer  same to same
 const int* arra ; //these two are same		// int const type of pointer same to same

 const int *const arrrr = x; // this also need to initializing
 							// const pointer to the type of const int



 int *const arraaa = arr; // need to initialize the constant pointers
							// reading as constant pointer of type int



  cout << sizeof(arr) << endl; // this however gives the size of the array
  cout << sizeof(x) << endl; // this gives four which is the base address size















  std::cout << "Hello, World!" << std::endl;
  return 0;
}
