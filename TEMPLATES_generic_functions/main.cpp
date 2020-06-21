#include <iostream>
using namespace std;





int max (int x, int y){

  return (x>y) ? x : y;
}


float max (float x, float y){

  return (x>y) ? x : y;
}



/*
 *
 * if we're able to make a function that the type of data will be pass in as a parameter, this is called a generic function
 *
 *
 *
 *
 * template <class or typename identifier>  return_type func_name{parameters){
 * }
 *
 */

template <typename myType> void display (myType x){

  cout<<x<<endl;
} // now we can pass any type of data











int main() {


  cout << max(2,5) << endl;
  std::cout << "Hello, World!" << std::endl;

  display(20.2);
  display("hahah");
  return 0;
}