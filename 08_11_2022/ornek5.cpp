#include <iostream>
using namespace std;

class sayici{
	private:
		static int sayac;
	public:
		sayici(){sayac++;}
		~sayici(){}
		int dondur(){return sayac;}
};

int sayici::sayac=0;

int main()
{
	
	sayici s1, s2, s3;
	cout<<"s1="<<s1.dondur()<<endl;
	cout<<"s2="<<s2.dondur()<<endl;
	cout<<"s3="<<s3.dondur()<<endl;
	scanf(" ");
	return 0;
}
