//
// Created by yuthika on 2020-04-30.
//

#ifndef STACK_CLASS_TEMPLATE__STACK_H_
#define STACK_CLASS_TEMPLATE__STACK_H_

template<typename T> // more like the function templates
class Stack {

 public:

  explicit Stack(int = 10);

  ~Stack(){
	delete [] stackPtr;
  };

  bool push(const T &);
  bool pop (T &) ;


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

#endif //STACK_CLASS_TEMPLATE__STACK_H_
