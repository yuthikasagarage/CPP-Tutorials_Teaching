#include <iostream>

template <class T> void display(T x, int y );
using namespace std;



int main() {

  display("yuthika",12);
  std::cout << "Hello, World!" << std::endl;
  return 0;
}


template <class T> void display(T x, int y ){// like this we can pass standard data types with templates
for (int counter = 1; counter <= y ; counter++){
  cout << x << endl;
}

}