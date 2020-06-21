#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
/*
 *
 *
 * file handling binary forms
 *
 * main difference in binary and text files is how they handle new line
 * in unix sentences end with a carriage return with a line feed
 * in some operating systems it's different
 *
 */


int main() {

  char input[100];
  strcpy(input, "yuthika rocks");

  fstream file("yuthika.bin", ios::binary | ios::in | ios::out | ios::trunc);

  if (!file.is_open())
	{
	cout << "error" << endl;

	}
  else
	{

	int length = strlen(input);

	for (int i = 0; i < length; i++)
	  {

	  file.put(input[i]);

	  }

	file.seekg(0);

	char ch;// need a character type to save the read value form the file

	while (file.good())
	  {

	  file.get(ch);

	  cout << ch;

	  }

	}

  return 0;
}