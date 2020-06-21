#include <iostream>
#include <exception>

using namespace std;

class person {
  string name;
  int age;

 public:

  person() {
	name = "noname";
	age = 0;

  }
/*
 * when we want to use cout cin with our objects of custom class, our classes we overload them in friend functions
 * so that we can use it without a object specified
 */
  friend ostream &operator<<(ostream &x, person &p); // here we need to pass two arguments because friend function is defined outside the class

  friend istream &operator>>(istream &x, person &p);

};

ostream &operator<<(ostream &x, person &p) { // definition gets ostream object and the person object and returns a ostream object
  x << " what the  heck " << endl;
  x << p.name << p.age <<endl;
  return x;
}

istream &operator>>(istream &x, person &p) { // since we're meddling with the variable address while overloading ahas to pass by reference
  x >> p.name >> p.age;
  return x;

}

int main() {

  person p;
  cin >> p;
  cout << p << endl;

  std::cout << "Hello, World!" << std::endl;
  return 0;
}