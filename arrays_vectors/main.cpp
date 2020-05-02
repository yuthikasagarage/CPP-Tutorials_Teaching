#include <iostream>
#include <iomanip>
using namespace std;



int main() {


  int n[10];

  int x[10] = {}; // initializer list

  int y[] = {}; // when we put initializer list, then we can just leave the square bracket so compiler gets the number from the initializer list


  char string1 [20]; // character arrays

  char string2 [] = "yuthika is god"; // reserves 14 char, 15 character /0 escape sequence is there


	cout << "enter the string " ;
//	cin >> string2;
  char delimiter = '\n';
  cin.getline(string2,15,'\n'); // get the whole line  to the string

  	cout << string2 << endl; // reads only enter

	for (int i = 0; string2[i] != '\0'; i ++){

	  cout << string2[i];
	}

string xx;

cout << endl;



  cout << " ELEMENT" << std::setw(13) << "VALUE" << endl;

	for(int i = 0 ; i < 10 ; i ++){


	  n[i] = i ;

	  cout<< std::setw(7) <<i << std::setw(13) << n[i] << endl;

	}










  std::cout << "Hello, World!" << std::endl;
  return 0;
}