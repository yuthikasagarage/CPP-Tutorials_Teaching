#include <iostream>



#include <iomanip>
using namespace std;


class xxx{

 public:

  int gethour() const ; // this is a const member function of the class xxx



 private:
  int hour = 0;
};
int xxx::gethour() const { // has to have like this const in the definition as well, inside the const member function, data members cannot be modified
  //which mean that objects data members cannot be modified in this member functions if we try to change something it will give as compilation error
  return hour;
}

void func1(int);
void func2(int);
void func3(int);



int main() {

  xxx const  object_constant; // constant object we






  xxx object; // just an object of type xxx class
  xxx * ob = &object; // objects address in given to the ob pointer. pointer of type xxx
  xxx & refobject = object; // here reference of type xxx, just have to pass the object by the value
  // here refobject and object is the same thing now

  object.gethour();






  int hour = 3;
  cout << std::setfill('5')<< setw(2)<< hour << endl;

// first part
/*
 * when you sww (*) some astrix inside a parenthesis it means some sort of a function pointer is in place
 *  so this is a array of function pointer which returns void and has 3 functions inside it which has arguments passed as (int)
 *  */

	void (*f[3])(int) = {func1, func2,func3};
  //(*f[3]) this part is read like , f is an array  of 3 pointers to functions

// here f is an array which of 3 indexes, which are pointers to functions
// which returns void and takes int argument



  int choice;

	cin >> choice;

	while ((choice>= 0) && (choice <= 3)){


	  (*f[choice])(choice);

	  // in calling the pointer to a function we have to dereference it and call

	  //(*f[choice]) here we are de-referencing the pointer f at the index choice which gives the function itself and
	  // and passing choice as the argument to the function



	  cout << " enter a number between 1 and 3 ";
	  cin >> choice;


	}



  return 0;
}


void func3(int x){

  cout <<std::setfill('0')<< x <<"function 3 called"<< endl;
}


void func2(int x){
  cout << "function 2 called"<< endl;
}


void func1(int x){
  cout << "function 1 called"<< endl;
}
