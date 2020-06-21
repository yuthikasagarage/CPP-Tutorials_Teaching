//
// Created by yuthika on 2020-04-28.
//

#ifndef OVERLOADED_STREAM_EXTRACTION_INSERTION_ADVANCED__PHONENUMBER_H_
#define OVERLOADED_STREAM_EXTRACTION_INSERTION_ADVANCED__PHONENUMBER_H_

#include <iostream>
#include <string>
using  std::string;




class PhoneNUmber {


 friend std::istream & operator >>(std::istream& input, PhoneNUmber & phone_n_umber);
 // has to be non member functions, we are making them friends to tightly couple to allow them to access private data
 //
 // if you overload a binary operator,

  friend std::ostream & operator <<(std::ostream& output, const  PhoneNUmber & phone_n_umber);


 public:

 private:

 string areaCode;
 string exchange;
 string line;





};

#endif //OVERLOADED_STREAM_EXTRACTION_INSERTION_ADVANCED__PHONENUMBER_H_
