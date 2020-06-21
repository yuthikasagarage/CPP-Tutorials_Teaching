#include <iostream>



/*
 * FUNCTION OVERLOADING IS NOTHING BUT WRITING THE FUNCTION WITH THE SAME NAME BUT WITH DIFFERENT RETURN TYPE OR
 * DIFFERENT ARGUMENTS , SINCE CONSTRUCTOR IS ALSO A FUNCTION WE CAN OVERLOAD THE CONSTRUCTOR
 *
 */
using namespace std;

class human{

private:
	int age;
	string name;
public:
	human(){

		age = 0;
		name = "no name";

	cout <<"default constructor  "<< name<<endl;
	}

	human(std::string inama){
		name = inama;
		cout<<"overloaded constructor  "<<endl;
	}


	void display(){
		cout<<name<<endl;
		cout<<age<<endl;
	}


};

int main()

{
	human yuthika;// calls the default constructor
	yuthika.display();

	human malith("malith"); // the other constructor is called , need to pass the arguments when the object is called
									// if we make a manual constructor then we ahave to define the default the constructor
	malith.display();



	return 0;
}