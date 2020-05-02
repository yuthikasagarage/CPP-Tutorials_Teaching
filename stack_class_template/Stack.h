//
// Created by yuthika on 2020-04-30.
//

#ifndef STACK_CLASS_TEMPLATE__STACK_H_
#define STACK_CLASS_TEMPLATE__STACK_H_
#include <string>
using namespace std;
template<typename T> // more like the function templates
class Stack {

 public:

   explicit Stack(int = 10);

  ~Stack(){
    delete [] stackPtr;
  };

  bool push(const T &);
  bool pop (T &) ;
  void teststack(Stack<T> & thestack, T value, T increment, const string stackNames);

	bool isEmpty() const {

	  return top == -1;
	}


  bool isFull() const {

	return top == size -1;
  }


 private:
  int size;
  int top;
  T *stackPtr;



};

template<typename T>
Stack<T>::Stack(int s) : size(s > 0 ? s : 10), top(-1), stackPtr(new T[size]) {
// this is more like

  //stackPtr = new T[size];
  T *stackPtr1 = new T[size];

}

/*
 *
 *
 *
 *
 *
 *
 * The compiler must be able to see the implementation in order to generate code for all specializations in your code.
 *
 *
 *
 */
template<typename T>
bool Stack<T>::pop(T & popValue) {

  if( ! isEmpty()){

	popValue = stackPtr[top--];
	return true;
	}

  return false;
}



template<typename T>
bool Stack<T>::push(const T &pushValue) {

  if(!isFull()){
	stackPtr[++top] = pushValue;
	return true;
	}

  return false;
}


template<typename T>
void Stack<T>::teststack(Stack<T> &thestack, T value, T increment, const string stackNames) {
  cout << "using " << stackNames << endl;

  while (thestack.push(value)){
	cout << value << ' ';
	value += increment;
	}

	cout << endl;
  while (thestack.pop(value)){

	cout << value << ' ';

	}
}

#endif //STACK_CLASS_TEMPLATE__STACK_H_
