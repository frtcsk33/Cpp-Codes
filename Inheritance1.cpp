#include <iostream>

using namespace std;

class Sekil{

    public:

        void sekilAdiAtamasi(string ad){
            adi = ad;
        }

        void kenarSayisiAdiAtamasi(int kenar){
            kenarSayisi = kenar;
        }
        
        void SeklinAdiniEkranaBas(){
            cout<<"Benim adim : "<<adi<<endl;
        }
        


    private:
        string adi;
        int kenarSayisi;


};

class Kare: public Sekil{
    public:
        Kare(int knr)
        {
            sekilAdiAtamasi("Kare");
            kenarSayisiAdiAtamasi(4);
            kenarDegeriAtama(knr);
        }

        void seklinCevresiniHesapla()
        {
            int cevre = kenar *4;
            cout<<"Karenin cevresi "<<cevre<<endl;
        }

        void kenarDegeriAtama(int knr)
        {
            while(knr <= 0)
            {
                cout<<"Kenarlar 0 veya negatif olamaz "<<endl;
                cout<<"Tekrar deger giriniz: ";
                cin>>knr;
            }
            kenar = knr;
        }

    private:
        int kenar;

};

class Ucgen: public Sekil{
     public:
        Ucgen(int yc, int yb)
        {
            alanDegeriAtama(yc,yb);
            sekilAdiAtamasi("Ucgen");
            kenarSayisiAdiAtamasi(3);
        }
        void alanDegeriAtama(int yc, int yb)
        {
            while(yc <= 0)
            {
                cout<<"Negatif veya 0 deger girdiniz.. Tekrar deger giriniz: ";
                cin>>yc;
            }
            while(yb <= 0){
                cout<<"Negatif veya 0 deger girdiniz.. Tekrar deger giriniz: ";
                cin>>yb;
            }
            yukseklik = yc;
            taban = yb;

        }
        void seklinCevresiniHesapla()
        {
            int cevre = 2+5+10;
            cout<<"Ucgenin cevresi "<<cevre<<endl;
        }
        void alanBulma(){
            cout<<"Ucgenin Alani: "<<(taban*yukseklik)/2;
        }
    private:
        int yukseklik;
        int taban;

};



int main(){


    Kare k1(4);
    k1.SeklinAdiniEkranaBas();
    k1.seklinCevresiniHesapla();
    k1.kenarDegeriAtama(5);


    Ucgen u1(5, 6);
    u1.SeklinAdiniEkranaBas();
    u1.seklinCevresiniHesapla();
    u1.alanDegeriAtama(5, 6);
    u1.alanBulma();



    scanf(" ");
    return 0;
}