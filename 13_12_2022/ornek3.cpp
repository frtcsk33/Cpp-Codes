#include <iostream>
using namespace std;
class A{
	float degerA;
	public:
		A(int sayi){degerA=sayi;}
		A(float x, float y) {degerA= x*y;}
		A(float x, float y, int z){degerA=x*y+z;}
		
		~A(){}
		float oku(){return degerA;}
};
int main()
{
	A s1(5);
	A s2(5.5,3.8);
	A s3(5.5, 1.5, 10);
	cout<<"s1="<<s1.oku()<<"\n s2="<<s2.oku()<<" \ns3="<<s3.oku()<<endl;
	return 0;
}
