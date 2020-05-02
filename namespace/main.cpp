

#include "file1x.h"
#include "file2x.h"

namespace three {
 int i = 10;
namespace {// anonymous namespace inside three
void display() {

  cout << "display fom file 3" << endl;
}
}
}


namespace four {

namespace five {

int j = 10;

void display() {

  cout << "display fom file nested namespace" << endl;
}
}
}

/*
 * we can define namespace as many time we want in multiple files
 */

namespace { // anonymous namespaces // if we define this like this in the global scope it will have the global scope

int x;
void display() {

  cout << "display from anonymous namespace  " << x << endl;
}


}


// nested namespace can override inner namespace


namespace { // anonymous namespaces // if we define this like this in the global scope it will have the global scope


int nn;


namespace seven {


void display() {
  int nn =100;
cout << "display from anonymous namespace  " << nn << endl;
}
}

}



/*
 * namespaces can be renamed
 */



namespace  hhhh = seven;




int main() {

 	 hhhh::display();

	three::i = 20;

	cout << three::i << endl;

	two::x = 90;
	cout << two::x << endl;

	one::display();
	two::display();
	three::display(); // this can be done since parent namespace is three, even whether anonymous namespace is there
	four::five::display(); // nested namespace called like this


//  display(); // if we do this it will throw the redefinition error since display function is defined in two files


	/* anonymous namespaces
	 *
	 *
	 */

	x = 64; // in anonymous namespace we don't have to use scope resolution operator
	display();


	nn = 190; // overriding inner namespace
	seven::display();

	cout <<nn <<endl; // here overriding the namespace in global scope


  return 0;
}