#include<iostream>
using namespace std;
class A{
	private:
		int m=10;
	protected:
		int n=15;
	public: 
		int x,y;
		A();
		~A(){cout<<"a yok edildi"<<endl;}
		int f1(){return x*y;}
};
A::A(){x=15; y=25;}
class B: public A{
	public:
		int z,y;
		B(){z=2; y=3;}
		~B(){cout<<"b yok edildi"<<endl;}
		void yaz() { cout<<"n="<<n;
		}
	};


int main()
{
	A a1;
	B b1;
	cout<<a1.y<<endl;
	cout<<b1.y<<endl;
	cout<<b1.x<<endl;
	
	cout<<&(a1.y)<<endl;
	cout<<&(b1.y)<<endl;
	b1.yaz();
	scanf(" ");
	return 0;
}
