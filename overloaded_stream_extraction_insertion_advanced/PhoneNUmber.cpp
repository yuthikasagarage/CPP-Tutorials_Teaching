//
// Created by yuthika on 2020-04-28.
//

#include <iomanip>
#include "PhoneNUmber.h"
using  namespace  std;
/*
 *
 *
 *
 * ostream is a type definition for cout object
 * istream is a type definition for cin object
 *
 * so output is here a cout object
 * and input is a cin object
 * so we an print like output << "x" << endl;
 *	// input is an alias to a COUT object
 *
 *
 */







ostream &operator<<(std::ostream &output, const PhoneNUmber &phone_n_umber) {

	output << "(" << phone_n_umber.areaCode << ")" << "-" << "-" << phone_n_umber.exchange <<phone_n_umber.line;

  return output;
}



istream &operator>>(std::istream &input, PhoneNUmber &phone_n_umber) {

  cout << " enter are code " << endl;

  input >> setw(3)>>phone_n_umber.areaCode;

  cout << " enter exchange " << endl;

  input >> setw(3)>>phone_n_umber.exchange;

  cout << " enter line " << endl;

  input >> setw(4)>>phone_n_umber.line;

  return input;
}
