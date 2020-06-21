#include <iostream>

// INHERTING FROM 2 OR MORE CLASSES
using namespace std;



class father{

public:
	int height;
	void askfather(){
		cout <<"ask father ask me what you want" << endl;
	}

};


class mother{

public:
	int hairs;
	void askmother(){
		cout <<"ask mother ask me what you want" << endl;
	}

};

class child : public father, public  mother{ // this is how you do multiple inheritance

public:


	void set_height_hairs(int iheight, int ihairs ){
		height = iheight;
		hairs = ihairs;

	}
	void ask_parents(){

		cout << height << hairs << endl;
	}


};



int main()
{

	child yuthika;
	yuthika.askmother(); // inherited from multiple classes mother and father it's going to obey the same rules we did above
	yuthika.askfather();
	yuthika.set_height_hairs(10, 24);
	yuthika.ask_parents();
	std::cout << "Hello, World!" << std::endl;
	return 0;
}