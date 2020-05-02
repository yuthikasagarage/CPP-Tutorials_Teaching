#include <iostream>

using namespace std;

template<class T>
class Myclass { // T can be anytype placeholder, it is a data type that we're going to using in the class

 private:

  T age;
  T id;

 public:

  Myclass(T x, T y) {

	this->age = x;
	this->id = y; // since it is generic floating or integer can be  passed when creating the object

  }

  void display() {
	cout << age << id << endl;
  }

};

int main() {

  Myclass<float> yuthika(25.2, 545.2);

  yuthika.display();

  Myclass<string> hasara("sdsds0", "sasa");
  hasara.display();

  std::cout << "Hello, World!" << std::endl;
  return 0;
}