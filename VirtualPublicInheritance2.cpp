#include<iostream>
using namespace std;


class A{
    int degerA;
        public:
            int f1(){return degerA = 10;}
};

class B: virtual public A{
    int degerB;
        public:
            int f2(){return degerB = 20;}
};

class C: virtual public A{
    int degerC;
        public:
        int f3(){return degerC = 30;}

};

class D: virtual public B, virtual public C{
    int degerD;
        public:
            int f4(){return degerD = 40;}
};

class E: virtual public B, virtual public C{
    int degerE;
        public:
            int f5(){return degerE = 50;}
};

class F: public D, public E{
    int degerF;
        public:
            int f6(){return degerF = 60;}
};



int main()
{
	
    F ff;

    cout<<ff.f1()<<"\t"<<ff.f5()<<"\t"<<ff.f4()<<"\t"<<ff.f3()<<"\t"
    <<ff.f2()<<"\t"<<ff.f6()<<"\t"<<endl;
    cout<<"---------------------------"<<endl;
    cout<<ff.A::f1()<<"\t"<<ff.B::f2()<<"\t"<<ff.C::f3()<<"\t"<<ff.D::f4()<<"\t"<<ff.E::f5()<<"\t"<<ff.F::f6()<<endl;
       

    scanf(" ");
	return 0;
}
