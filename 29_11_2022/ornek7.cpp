//�oklu kal�t�mda belirsizlik durumu virtual ile ��z�l�r.

#include <iostream>
using namespace std;

class A{ // base
	int degerA;
	public:
		int f1(){return degerA=10;}
};


class B: virtual public A{ //t�retilmi�
	int degerB;
	public:
		int f2(){return degerB=20;}
};


class C: virtual public A{ //t�retilmi� s�n�f
	int degerC;
	public:
		int f3(){return degerC=30;}
};


class D: public B, public C{ // t�retilmi�
	int degerD;
	public:
		int f4(){return degerD=40;}
};


int main()
{
	D d1;
	C c1;
	cout<<d1.f4()<<endl;
	cout<<c1.f1()<<endl;
	cout<<d1.f1()<<endl;
	cout<<d1.f2()<<endl;
	cout<<d1.f3()<<endl;
	
	scanf(" ");
	return 0;
}
