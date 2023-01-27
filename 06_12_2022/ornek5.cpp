//geenel örnek
#include <iostream>
using namespace std;
class Person{
	int id;
	char name[100];
	public:
		void set_p(){
			cout<<"id giriniz: ";cin>>id;
			fflush(stdin);
			cout<<"ismi giriniz:"; cin.getline(name,100);
		}
		void display_p(){
			cout<<" id= "<<id<<" isim= "<<name<<endl;
		}
};

class ogrenci: private Person{
	char ders[100];
	int ucret;
	int saat=2;
	public:
		void set_o()
		{
			set_p();
			fflush(stdin);
			cout<<"dersi giriniz:";cin.get(ders,100);
			cout<<"ucret giriniz:"; cin>>ucret;
		}
		void display_o()
		{
			display_p();
			cout<<" ders= "<<ders<<" ucret= "<<ucret<<endl;
		}
		int hesapla()
		{return saat*ucret;
		}
};

int main(){
	ogrenci o1;
	o1.set_o();
	o1.display_o();
	cout<<"haftalik ucret= "<<o1.hesapla()<<endl;
	//o1.set_p();
	/*Person p1;
	p1.set_p();
	p1.display_p();*/
	return 0;
}
