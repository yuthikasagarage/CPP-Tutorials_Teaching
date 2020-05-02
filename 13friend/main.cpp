#include <iostream>
using namespace std;

class human
{
private:
  string name;
  int age;

public:
  human(string iname, int iage)
  {
	name = iname;
	age = iage;
  }

  void tellme()
  {
	cout << name << endl
		 << age << endl;  // private variables are available to this method because they are in the same class
  }

  // what if we want to access the private variables outside the class, then we make  a friend
  friend void display(human man);  // we need to pass the class type object as an argument function
};
void display(human man)  // definition of the friend member function
{
  cout << man.name << endl << man.age << endl;
}

int main()
{
  human yuthika("yuthika", 22);
  display(yuthika);
  std::cout << "Hello, World!" << std::endl;
  return 0;
}