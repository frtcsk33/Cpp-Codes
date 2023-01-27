#include <iostream>

using namespace std;

class base{

    protected:
        int genislik, yukseklik;

    public:
        void set_value(int g, int y){
            genislik=g;
            yukseklik=y;
        }
};

class dortgen: public base{
    public:
        int alan(){return genislik*yukseklik;}

};

class ucgen: public base{
    public:
        int alan(){return genislik*yukseklik/2;}
};



int main(){

    ucgen u1;
    dortgen d1;

    base *b1 = &d1;
    base *b2 = &u1;
    
    b1->set_value(3,5);
    cout<<"dortgenin alan= "<<d1.alan()<<endl;

    b2->set_value(4,6);
    cout<<"ucgenin alan= "<<u1.alan()<<endl;

    u1.set_value(2,4);
    cout<<"ucgenin alan= "<<u1.alan()<<endl;

    d1.set_value(7,8);
    cout<<"dortgenin alan= "<<d1.alan()<<endl;

    scanf(" ");
    return 0;
}

