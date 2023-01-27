#include <iostream>
using namespace std;

class ornek{
	int i;
	float f;
	public:
		void set_deger(int a, float b){i=a; f=b;}
		void yaz(){cout<<i<<" - "<<f<<endl;	}
};


int main()
{
	ornek o1;
	o1.set_deger(2, 5.5);
	
	o1.yaz();
	return 0;
}
