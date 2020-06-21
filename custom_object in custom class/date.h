//
// Created by yuthika on 2020-04-26.
//

#ifndef CUSTOM_OBJECT_IN_CUSTOM_CLASS__DATE_H_
#define CUSTOM_OBJECT_IN_CUSTOM_CLASS__DATE_H_

class date {

 public:

  date(int day = 1, int month = 1, int year = 1990);

  void print() const;
  ~date();

 private:
  int month;
  int day;
  int year;

  int check_day(int) const;

};

#endif //CUSTOM_OBJECT_IN_CUSTOM_CLASS__DATE_H_
