#include<iostream>
using namespace std;

class base{
	protected:
		int genislik,yukseklik;
	public:
		void set_values(int g, int y){
			genislik=g; yukseklik=y;
		}
};

class dortgen:public base{
	public:
		int alan() {return genislik*yukseklik;}
};

class ucgen:public base{
	public:
		int alan(){return genislik*yukseklik/2;}
};
int main()
{
	ucgen u1;
	dortgen d1;
	base *b1=&d1;
	base* b2=&u1;
	
	b1->set_values(3,5);
	cout<<"dortgen alan="<<d1.alan()<<endl;
	
	b2->set_values(8,9);
	cout<<"ucgen alan="<<u1.alan()<<endl;
		/*u1.set_values(3,5);
	cout<<"ucgen alan="<<u1.alan()<<endl;
	d1.set_values(8,9);
	cout<<"dortgen alan="<<d1.alan()<<endl;*/
	
	return 0;
}
