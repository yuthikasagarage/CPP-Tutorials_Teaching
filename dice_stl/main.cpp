#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rollDice();

int main() {



  //enum values

  enum status { //  enum keyword is followed by the word which will be the type of enum
	//enum acn be interpreted as a data type also, which is an enum data type
	// used to create named constants in c++
	// by default 1st constant gets the value 0 , here continue is 0 and
	// won gets 1, lost gets 2 1+ the first constant
	// enum is a named constant type


	CONTINUE, WON, LOST

  };

  enum status1 { // we can initialize like this too

	CONTINUE1 = 1, WON1 = 2, LOST1 = 7

  };

  int point = 0;
  status gamestatus; // type of status variable like a ros message

  srand(time(0));

  int sumofdice = rollDice();

  switch  (sumofdice)
	{

	case 7:
	case 11:
	  gamestatus = WON;
	  break;

	case 2:
	case 3:
	case 12: gamestatus = LOST;
	  break;
	default: gamestatus = CONTINUE;
	  point = sumofdice;
	  cout << point << endl;

	  break;
	}

	while (gamestatus == CONTINUE)
	  {
	  sumofdice = rollDice();

	  if (sumofdice == point)
		{
		gamestatus = WON;
		}
	  else if (sumofdice == 7)
		{
		gamestatus = LOST;
		}
	  }
	  if(gamestatus == WON)
		{
		cout <<"won" << endl;
		}
	  else
		{
		cout << "lost " << endl;
		}


  return 0;
}

int rollDice() {

  int die1 = 1 + rand() % 6; // getting up until 5 and add 1 since when you divide something by 6 remainder can be only upto 5
  int die2 = 1+ rand() % 6; // 1 is added to make it start from 1

  int sum = die1 + die2;

  cout << "rolled" << die1 << " + " << die2 << "=" << sum << endl;
  return sum;

}