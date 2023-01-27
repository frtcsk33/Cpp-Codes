//kurucu fonksiyon
#include <iostream>
using namespace std;
class cizgi{
	private:
		int uzunluk;
	public:
		void set_uzunluk(int u){uzunluk=u;	}
		void get_uzunluk(){cout<<"uzunluk="<<uzunluk<<endl;	}
		cizgi(); //kurucu fonksyion
		~cizgi(); //yokedici fonksiyon
};

cizgi::cizgi(){cout<<"olu�turuldu"<<endl;}
cizgi::~cizgi(){cout<<"yok edildi"<<endl;}

int main()
{
	cizgi c1, c2;
	c1.set_uzunluk(5);
	c1.get_uzunluk();
	c2.set_uzunluk(15);
	c2.get_uzunluk();
	
	scanf(" ");
	return 0;
}
