#include <iostream>
using namespace std;
class kisi{
	private:
		int yas;
		string ad;
		char cinsiyet;
	public:
		void deger_aktar(int y, string a, char c)
		{yas=y; 	ad=a; 		cinsiyet=c;		}
		void ekrana_yaz()
		{cout<<"yas="<<yas<<" isim="<<ad<<" cinsiyet="<<cinsiyet<<endl;		}
};
int main()
{
	kisi k1, k2;
	k1.deger_aktar(15,"ahmet",'e');
	k1.ekrana_yaz();
	k2.deger_aktar(10,"hilal",'k');
	k2.ekrana_yaz();
	k1.ekrana_yaz();
	
	return 0;
}
