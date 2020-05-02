#include <iostream>


using namespace std;
int main() {
  string data;
//  cin >> data ;
//
//// we can't read the whole line only gives one word at a time
//cout << data << endl;


getline(cin, data);// first we need to read from the cin object and we want to store it in data
  cout << data << endl;



  std::cout << "Hello, World!" << std::endl;
  return 0;
}