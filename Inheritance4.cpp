#include <iostream>

using namespace std;

class A{ //temel sınıf

    int degerA;
    public:
        int f1(){return degerA = 10;}

};


class B: public A{ //türetilmiş sınıf

    int degerB;
    public:
        int f1(){return degerB = 20;}

};


int main(){

    B b1;
    cout<<b1.f1()<<endl;
    cout<<b1.A::f1()<<endl;
    cout<<b1.B::f1()<<endl;




    scanf(" ");
    return 0;
}