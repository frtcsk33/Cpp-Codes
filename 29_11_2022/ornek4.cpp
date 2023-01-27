#include <iostream>
using namespace std;

class test{
	int x,y;
	public:
		test(int a=0,int b=0){x=a; y=b;	}
		test &setx(int a )
		{x=a; 
		return *this;
		}
		test &sety(int b)
		{y=b;
		 return *this;
		}
		void yaz(){cout<<"x="<<x<<" y="<<y<<endl;	}
		~test(){}
};

int main()
{
	test t1;
	t1.yaz();
	t1.setx(5);	t1.yaz();
	t1.sety(6); t1.yaz();
	t1.setx(8).sety(9).yaz(); 
	test t2(88,99);
	t2.yaz();
	test t3(77);
	t3.yaz();//77 0
	return 0;
}
