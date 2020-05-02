#include <iostream>

#include <fstream>


// all iostream objects maintain at least one internal position
// it tell where the next read or write operation should perform

using namespace std;


// if we're using a fstream class in contains get and put position
// get position is there to read from
// put is writing position


int main() {

  fstream file("adsa.txt", ios::in | ios::out );
  if (!file.is_open())
	{

	cout << "error";

	}
  else
	{

	cout << file.tellg() << endl; // this is get position is zero in read mode 1

	string line, newline;
	getline(file,line);

	cout << line << endl; //2

	cout << file.tellp() << endl; // write position 3

	file.seekp(0, ios::beg);

	cout << file.tellp() <<" write position " <<  endl; // write position 4

	file.clear();

	file << "yuthika is THE 1111111111111111111111111111 --------";

	file.clear(); // after reading or writing clear the eof bits

	file.seekg(1, ios::beg); // this works but tell g function is

	getline(file,newline);

	file.clear(); // after writing or reading need to  clear

	cout << file.tellg() <<"  read position" <<endl; //5
	cout << file.tellp() << endl;


	cout << newline <<"  <---- read text" <<endl; //6

	}

  std::cout << "Hello, World!" << std::endl;
  return 0;
}