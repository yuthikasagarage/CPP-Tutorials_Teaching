#include <exception>
#include <iostream>

using namespace std;

class overspeed : public exception {

 private:
  int speed = 0;

 public:
  const char *what() { // overloading the what function in the exception class
	return "check the car speed \n  you are in the car obvio \n";
  }
  void getspeed() { cout << "check the car speed " << speed << endl; }
  void setspeed(int x) {
	this->speed = x; // it's good to access private memebers like this you don't
	// get mixed up
  }
};

class car {
  int speed;

 public:
  car() {
	speed = 0;
	cout << " speeed id zero " << endl;
  }
  void accellerate() {
	for (;;)
	  {
	  speed += 10;

	  cout << " speed is " << speed << endl;
	  if (speed > 20)
		{

		overspeed over; // making a overspeed object here
		over.setspeed(speed);
		throw over; // we're throwing a overspeed type exception asdasdasdas

		}
	  }
  }
};

int main() {
  car yuthika_car;

  try
	{
	yuthika_car.accellerate();
	}
  catch (overspeed s)
	{
	cout << s.what() << endl; // since this is returning a const char *
	s.getspeed();
	}

  std::cout << "Hello, World!" << std::endl;
  return 0;
}