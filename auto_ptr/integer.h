//
// Created by yuthika on 2020-05-01.
//

#ifndef AUTO_PTR__INTEGER_H_
#define AUTO_PTR__INTEGER_H_

class integer {

 public:
  integer(int i = 0);
  ~integer();
  void setInteger( int i);
  int getInteger() const;

 private:
  int value;


};

#endif //AUTO_PTR__INTEGER_H_
