#include <iostream>
#include "Stack.h"



using namespace std;


int main() {


  Stack<double> doubleStack (5);


  double dv = 1.1;

  while (doubleStack.push(dv)){

	cout << dv << ' ';
	dv+=1.1;
  }

  	cout << dv << endl;


  while (doubleStack.pop(dv)){

	cout << dv << ' ';

	}
	cout << endl;

	doubleStack.teststack(doubleStack,5,1.2,"testing");






  return 0;
}
