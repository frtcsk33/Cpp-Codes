// public inheritance
#include <iostream>
using namespace std;

class Shape{
	protected:
		int yukseklik, genislik;
	public:
		void set_yukseklik(int y) {yukseklik=y;	}
		void set_genislik(int g) {genislik=g;	}
};

class Dikdortgen: public Shape{
	public: 
		int alan(){return genislik*yukseklik;	}
};

int main(){
	Dikdortgen d1;
	d1.set_yukseklik(5);
	d1.set_genislik(6);
	
	Shape s1;
	s1.set_genislik(10);
	s1.set_yukseklik(2);	
	cout<<d1.alan()<<endl;
	
	
	
	
	//cout<<d1.
	
	
	scanf(" ");
	return 0;
}
