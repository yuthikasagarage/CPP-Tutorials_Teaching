#include <iostream>
#include <exception>
double divide(int x ,int y);
void trying_outer(int number1 , int number2);
using namespace std;

int main() {


	int number1;
    int number2;

    cout <<" enter  2 integers" << endl;

    try
	  {
	  trying_outer(number1, number2);
	  }
	catch (std::runtime_error &x)
	  {

		cout <<"thrown to the outer try catch  :" << x.what() << endl;
	  }


  return 0;
}



void trying_outer(int number1 , int number2){
double xx;

  while (cin >> number1 >> number2) {

	try{

	  xx = divide(number1, number2);
	  cout << "result :" << xx <<endl;

	  }
	catch (std::runtime_error &x)
	  {
	  cout << "exception caught :  " << x.what() <<endl;
	  throw x; // throws to the next outer try block
	  }
	}
}


double divide(int x ,int y){

	double result;

  if(y == 0){
	throw std::runtime_error("standard divided by zero");
  }
  else
	{
	result = static_cast<double >(x) / y;
	}

	return result;
}