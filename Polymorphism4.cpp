#include <iostream>

using namespace std;

class dortgen{
    private:
        int genislik, yukseklik;

    public:
        dortgen(int g, int y){genislik = g; yukseklik = y;}
        int alan(){return yukseklik*genislik;}
        ~dortgen(){}
        dortgen(dortgen &gecici){
            genislik = gecici.genislik;
            yukseklik = gecici.yukseklik;
        }
            
};

int main(){

    dortgen d1(3,5);
    dortgen d2=d1;
    
    cout<<"d1: "<<d1.alan()<<endl;
    cout<<"d2: "<<d2.alan()<<endl;

    scanf(" ");
    return 0;
}

