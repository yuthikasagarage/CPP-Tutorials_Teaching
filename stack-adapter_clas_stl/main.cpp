#include <iostream>
#include <vector>
#include <list>
#include <stack>

using namespace std;

template<typename T>
void pushE(T &stackref);
template<typename T>
void popE(T &stackref);

int main() {

  stack<int> intDequestack;
  stack<int, vector<int>> vectorStack;
  stack<int, list<int>> listStack;

  pushE(intDequestack);

 popE(intDequestack);

  pushE(vectorStack);
  popE(vectorStack);

  pushE(listStack);
  popE(listStack);



  std::cout << "Hello, World!" << std::endl;
  return 0;
}

template<typename T>
void pushE(T &stackref) {
  for (int i = 0; i < 10; i++)
	{

	stackref.push(i);
	cout << stackref.top() <<" ";

	}
cout << endl;
}
template<typename T>
void popE(T &stackref) {

while(!stackref.empty())
  	{
	cout << stackref.top() << " " ;
	stackref.pop();
	}
  cout << endl;
}
