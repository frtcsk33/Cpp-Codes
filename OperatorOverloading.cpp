#include <iostream>

using namespace std;

class koordinat{
    private:
        int x, y;
    public:
        koordinat():x(0), y(0){}
        ~koordinat(){}
        void input_deger(){
            cout<<"x - y degerlerini giriniz: "<<endl;
            cin>>x; cin>>y;
        }
        koordinat operator+(koordinat &gecici){
            koordinat temp;
            //cout<<"x: "<<x<<" y= "<<y<<" \ngecici.x = "<<gecici.x<<" gecici.y = "<<gecici.y<<endl;
            temp.x = x + gecici.x;
            temp.y = y + gecici.y;
            return temp;
        }
        void goster(){cout<<"( "<<x<<", "<<y<<")"<<endl;}
};



/*
Sınıf operator sembol (parametre)
{
...
return ________;
}
*/



int main(){

  
    koordinat k1, k2, sonuc;
    k1.input_deger();
    k1.goster();

    k2.input_deger(); 
    k2.goster();

    sonuc = k1 + k2;
    sonuc.goster();




    scanf(" ");
    return 0;
}

