#include <iostream>
template <class mytype> void display(mytype x, mytype y);
template <class T> T maxi(T, T);
using namespace std;




int main() {





  display(465,465); // these two parameters are same type;
  cout << maxi(20,30) << endl;

  std::cout << "Hello, World!" << std::endl;
  return 0;
}

template <class mytype> void display(mytype x, mytype y){ // here these two parameters are same type;
  cout << x << "--------"<< y << endl;
}

template <class T> T maxi(T x, T y){
  return ((x>y) ? x : y);
}