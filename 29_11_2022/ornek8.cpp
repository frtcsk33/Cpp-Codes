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


class D: virtual public B, virtual public C{ // t�retilmi�
	int degerD;
	public:
		int f4(){return degerD=40;}
};

class E: virtual public B, virtual public C{ // t�retilmi�
	int degerE;
	public:
		int f5(){return degerE=50;}
};

class F: public D, public E{ // t�retilmi�
	int degerF;
	public:
		int f6(){return degerF=60;}
};


int main()
{
 	F ff;
	cout<<ff.f6()<<" "<<ff.f5()<<" "<<ff.f4()<<endl;
	cout<<ff.f3()<<" "<<ff.f2()<<" "<<ff.f1()<<endl;
	scanf(" ");
	return 0;
}
