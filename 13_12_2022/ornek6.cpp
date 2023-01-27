//operator overloading
#include <iostream>
using namespace std;

class saydir{
	private:
		int value;
	public:
		saydir():value(5){}
		~saydir(){}
		void operator++(){ //prefix
			++value;
		}
		void operator++(int){//postfix
			value++;
		}
		void display()
		{
			cout<<"sonuc= "<<value<<endl;
		}
};

int main()
{
	saydir s1;
	
	s1++;
	s1.display();
	
	++s1;
	s1.display();

	scanf(" ");
	return 0;
	
}
