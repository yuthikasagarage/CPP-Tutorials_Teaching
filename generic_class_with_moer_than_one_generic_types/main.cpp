#include <iostream>

using namespace std;

template<class T1, class T2>
class myclass {

 private:

  T1 p1;
  T2 p2;
  int counter;

 public:

  myclass(T1 x, T2 y) {

	this->p1 = x;
	this->p2 = y;
	counter = 0;

  }

  void display() {

	cout << p1 << endl;
	cout << p2 << endl;
	cout << counter << endl;

  }

};

template<class T1 = string, class T2 = int>
class myclass1 {

 private:

  T1 p1;
  T2 p2;
  int counter;

 public:

  myclass1(T1 x, T2 y) {

	this->p1 = x;
	this->p2 = y;
	counter = 0;
	cout << "from generic class" << endl;

  }

  void display() {

	cout << p1 << endl;
	cout << p2 << endl;
	cout << counter << endl;

  }

};

template<>
class myclass<int, int> { // explicit specialization of myclass1 , class overloading

 private:

  int p1;
  int p2;
  int counter;

 public:

  myclass(int  x,  int y  ){

	this->p1 = x;
	this->p2 = y;
	counter = 0;
	cout << "from specific explicit class" << endl;

  }

  void display() {

	cout << p1 << endl;
	cout << p2 << endl;
	cout << counter << endl;

  }

};

int main() {

  myclass<string, int> yuthika("yuthhia", 25); // in constructor we have to decide the template
  yuthika.display();

  myclass<int, int> hasara(62, 25); // in constructor we have to decide the template

  hasara.display();

  myclass1<> miyuru("sasa", 665); // in here when we leave it blank it will get the default data type+
  miyuru.display();

  myclass<int, int> miyuru1(54654, 665); // we can overload the template default types
  miyuru1.display();



  std::cout << "Hello, World!" << std::endl;
  return 0;
}