//
// Created by yuthika on 2020-04-28.
//

#ifndef CASE_STUDY_ARRAY_CLASS__ARRAY_H_
#define CASE_STUDY_ARRAY_CLASS__ARRAY_H_
#include <iostream>


using namespace std;


class Array {

  friend ostream &operator<<(ostream&, const Array &);
  friend istream &operator>>(istream&, const Array &);


 public:

  Array(int = 10);

  Array(const Array &); // first custom copy constructor

  ~Array();

  int getsize() const;

  const Array & operator = (Array &); // when we have the overloading in a member function of the class implicitly one of the
  // parameters wil be automatically the object that we are operating on

  bool operator == (Array&) const;

  bool operator!=(Array &Right) const {
	return !(*this == Right);
  }

  int & operator[](int);

  int operator[](int) const;

 private:

  int size{};
  int *ptr;


};


#endif //CASE_STUDY_ARRAY_CLASS__ARRAY_H_
