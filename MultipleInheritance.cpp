#include<iostream>
using namespace std;

class A{
    
    public:
        A(){cout<<"A'nin constructor'u cagirildi."<<endl;}
};

class B{
    
    public:
        B(){cout<<"B'nin constructor'u cagirildi."<<endl;}
};

class C: public B, public A{
    
    public:
        C(){cout<<"C'nin constructor'u cagirildi."<<endl;}
};



int main()
{
	
    C c1;

    
    scanf(" ");
	return 0;
}
