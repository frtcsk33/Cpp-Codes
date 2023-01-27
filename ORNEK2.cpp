#include <iostream>
using namespace std;

class sekil{
    public:
        int yukseklik, genislik, taban;
        void set_y(int y){yukseklik = y; }
        void set_g(int g){genislik = g; }
        void set_t(int t){taban = t;}
};


class Dikdortgen: public sekil{

    public:
        int alan(){return yukseklik*genislik; }


};

class Ucgen: public sekil{

    public: 
        int alan(){return (taban*yukseklik)/2;}

};




int main()
{
    Dikdortgen d1;
    d1.set_y(5);
    d1.set_g(10);
    cout<<d1.alan();


    Ucgen u;
    u.set_y(4);
    u.set_t(10);
   cout<<endl<<u.alan();

	scanf(" ");
	return 0;
}
