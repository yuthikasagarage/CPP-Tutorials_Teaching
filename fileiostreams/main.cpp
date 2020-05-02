#include <iostream>
#include <fstream>

using namespace std;

int main() {

  fstream file; // fstream object
  file.open("yuthika.txt"); // file will be open in read and write mode heres
//file.open("yuthika.txt", ios::in | ios::out |ios:: trunc); // we can specify like this , trunc will create txt



  if (!file.is_open())
	{
	cout << "error while opeining the file" << endl;

	}
  else
	{
	file << "hashhahha" << endl; // <--------- writing to the file
	file.close();
	cout << "file opened successfully" << endl;

	}

//
//ifstream file1;
//
//file1.open("yuthika.txt");
//
//if (!file1.is_open()){
//
//  cout << "error while opeining the file"<< endl;
//
//}else{
//
//  string line;
//  cout << "contents are "<< endl;
//
//  while (file1.good()) // read the whole things
//	{
//	getline(file1, line);
//
//	cout << line << endl;
//	}
//
//}

  fstream file2;

  file2.open("yuthika.txt", ios::in | ios::out | ios::app); // when we open the file in append mode the cursor will be in the end of the file
// and it will append the contents that we're writing

  string line;
  if (!file2.is_open())
	{

	cout << "error while opeining the file" << endl;
	}
  else
	{
	cout << "file opened successfully" << endl;
	file2 << "whitening to the file" << endl;

	// when we append to the file the cursor will be in the last position

	file2.seekg(0);

	while (file2.good())
	  {

	  getline(file2, line);

	  cout << line << endl;
	  }

	}

  return 0;
}