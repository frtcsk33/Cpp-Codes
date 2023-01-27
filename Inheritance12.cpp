#include<iostream>
using namespace std;

class A{
    int deger;
        public:
            int d1(){return deger = 10;}
};

class B: public A{
    int x;
        public:
            int d2(){return x= 20;}
            int d3(){x = d1(); return x;}
};



int main()
{
    A a1;
    B b1;

    cout<<a1.d1()<<endl;
    cout<<b1.d1()<<endl;
    cout<<b1.d2()<<endl;
    cout<<b1.d3()<<endl;
   
       

    scanf(" ");
	return 0;
}
