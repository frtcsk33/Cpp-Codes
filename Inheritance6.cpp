#include <iostream>

using namespace std;

class A{ //temel sınıf
    public:
        A(){cout<<"A olustu"<<endl;}
        ~A(){cout<<"A yok edildi"<<endl;}
        
};

class B: public A{ //türetilmiş sınıf
    public:
        B(){cout<<"B olustu"<<endl;}
        ~B(){cout<<"B yok edildi"<<endl;}
};

class C: public A, public B{ //türetilmiş sınıf
    public:
        C(){cout<<"C olustu"<<endl;}
        ~C(){cout<<"C yok edildi"<<endl;}
};



int main(){


    C c1;
    



    scanf(" ");
    return 0;
}