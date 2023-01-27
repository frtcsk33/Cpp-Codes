#include <iostream>
#include <cstring>
using namespace std;

class metin{
	enum{size=80};
	char ad[size];
	public:
		metin(){ad[0]='\0';} //kurucu fonksiyon
		metin(char a[]){ strcpy(ad,a);} //kurucu fonksiyon
		void yaz(){cout<<ad<<endl;	}
		void birlestir(metin m4)
		{
			if(strlen(ad)+strlen(m4.ad)<size)
				strcat(ad, m4.ad);
			else
				cout<<"metin boyutu uzun";
		}
		~metin(){}
};
int main()
{
	metin m1;
	m1.yaz();
	metin m2("bilgisayar");
	m2.yaz();
	
	char d[80];
	cout<<"metni giriniz:"<<endl;
	cin>>d;
	metin m3(d);
	m3.yaz();
	
	m2.birlestir(m3);
	m2.yaz();
	scanf(" ");
	return 0;
}
