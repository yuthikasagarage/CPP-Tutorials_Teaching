#include <iostream>
// defining a class iniside a definition of another class

using  namespace std;


class person{

public:
	string name;



	class address{

	public:
		string country;
		string house_number;
		string stname;

	};

	address addr;

	void display(){
		cout << name << endl;
		cout << addr.country << endl;
		cout << addr.stname << endl;
		cout << addr.house_number << endl;


	}

};










int main()
{
	//address add; we can't do this

	person yuthika;
	person::address ad; // we can do this
	ad.house_number = "hsada";
	ad.stname = "asjad";
	ad.country = "iojasd";


	yuthika.name = "yuthika";
	// either we can do this by making a object inside the class or we cna do the above way
//	yuthika.addr.country = "sri lanka";
//	yuthika.addr.stname = "jambugassmulla mawatha";
//	yuthika.addr.house_number = "5A";

	yuthika.addr = ad;
	yuthika.display();

	return 0;
}