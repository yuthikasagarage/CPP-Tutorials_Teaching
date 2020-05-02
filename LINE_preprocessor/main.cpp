#include <iostream>


using namespace std;





int main() {



  cout << "current line is " << __LINE__ << endl; // these are line pre-processor directives
  cout << "current file is " << __FILE__ << endl;
  cout << "data of translation  line is " << __DATE__ << endl;
  cout << "camile time" << __TIME__ << endl;

  cout << "std" << __STDC__ << endl;


  cout << "std" << __cplusplus << endl;
#line 1000

  cout << "current line is " << __LINE__ << endl; // these are line pre-processor directives


  std::cout << "Hello, World!" << std::endl;
  return 0;
}