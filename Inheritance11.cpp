#include<iostream>
using namespace std;

class A{
    int degerA;
        public:
            int f1(){return degerA = 10;}

};

class B{
    int degerB;
    A a1;
    public:
        int f1(){return degerB = 20;}
        void getir(){cout<<a1.f1()<<endl;}
};


int main()
{
	B b1;
    cout<<b1.f1()<<endl;
    b1.getir();
    

    scanf(" ");
	return 0;
}
