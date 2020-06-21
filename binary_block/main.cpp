#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;


/*
 *
 * istream &read(char *buf, streamsize num)
 * ostream &write(const char *buf, streamsize num)
 */


class person {

	char name [80];
	int age;

 public:

  person(){

    strcpy(name, "no name");
    age = 0;
  }

  person(char *name, int age){

	strcpy(this ->name, name);
	this->age = age;
  }


  void display(){

    cout << " hi am  " << name << " age  " << age << endl;
  }


};





int main() {

  person yuthika ("yuthika",24);

  fstream file("yuthika.bin", ios::binary | ios:: out | ios :: trunc | ios :: in);

  if(!file.is_open()){
	cout << "error" << endl;



  }else{



	file.write((char *)&yuthika, sizeof(person)); // write and read method's first argument has to be const pointer, this is writing the entire object to the binary file

	file.seekg(0);

	person hasara;

	file.read((char *)&hasara, sizeof(person)); // write and read method's first argument has to be const pointer, this is reading the entire object to the binary file
	yuthika.display();
	hasara.display();

  }



  std::cout << "Hello, World!" << std::endl;
  return 0;
}