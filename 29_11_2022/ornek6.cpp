#include <iostream>
using namespace std;
class A{ //temel s�n�f
	public:
		A(){cout<<"A olu�tu"<<endl;}
		~A(){cout<<"A yok edildi"<<endl;}
};
class B: public A{ //t�retilmi� s�n�f
	public:
		B(){cout<<"B olu�tu"<<endl;}
		~B(){cout<<"B yok edildi"<<endl;}
};

class C: public A, public B{ //t�retilmi� s�n�f
	public:
		C(){cout<<"C olu�tu"<<endl;}
		~C(){cout<<"C yok edildi"<<endl;}
};

int main()
{
	C c1;
	scanf(" ");
	return 0;

}
