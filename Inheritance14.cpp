#include <iostream>
//public inheritancec
using namespace std;

class Shape{

    protected:
        int yukseklik, genislik;
    public:
        void set_yukseklik(int y){yukseklik=y;}
        void set_genislik(int g){genislik=g;}
        
};

class Dikdortgen: public Shape{

    public:
         int alan(){return yukseklik*genislik;}
};


int main(){

    Dikdortgen d1;
    d1.set_genislik(5);
    d1.set_yukseklik(6);
    cout<<d1.alan()<<endl;


    Shape s1;
    s1.set_genislik(10);
    s1.set_yukseklik(2);
    cout<<d1.alan()<<endl;







    scanf(" ");
    return 0;
}