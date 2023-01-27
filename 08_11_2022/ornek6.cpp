#include <iostream>
using namespace std;
class Sayici{
	private:
		int sayac;
	public:
		Sayici(){sayac=0;}
		~Sayici(){}
		int dondur(){return sayac;}
		void artir(){sayac++;}
};

int main()
{
	Sayici s1,s2,s3;
	cout<<"s1="<<s1.dondur()<<"s2="<<s2.dondur()<<"s3="<<s3.dondur()<<endl;
	s1.artir();
	cout<<"s1="<<s1.dondur()<<"s2="<<s2.dondur()<<"s3="<<s3.dondur()<<endl;
	s1.artir();
	cout<<"s1="<<s1.dondur()<<"s2="<<s2.dondur()<<"s3="<<s3.dondur()<<endl;
	s2.artir();s3.artir();
	cout<<"s1="<<s1.dondur()<<"s2="<<s2.dondur()<<"s3="<<s3.dondur()<<endl;
	
	scanf(" ");
	return 0;
}

