#include <iostream>

#include "gradebook.h"


int main() {


	int gradesArray [gradebook::students] = {87,78,88,12,45,88,89,63,45,32};

	gradebook mygrades("CS101", gradesArray);

	mygrades.display();
	mygrades.processgrade();



  return 0;
}
