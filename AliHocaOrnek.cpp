#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Tarih{
    private:
        int gun;
        int ay;
        int yil;
    public:
        void setGun(int V);
        int getGun(){return gun;}
        
        void setAy(int v);
        void setYil(int v);
        int getYil(){return yil;}

        Tarih();
        Tarih(int v1, int v2, int v3);

        Tarih operator++();
        string ToString();

};

void Tarih::setGun(int v1){
    
    if(v1 > 0 && v1<32){
        gun = v1;
    }
}

void Tarih::setAy(int v1){
    
    if(v1 > 0 && v1 < 13){
        ay = v1;

    }
    else{
        ay = 1;
    }

}

void Tarih::setYil(int v1){

    if(v1 > 1900 && v1 < 2100){
        yil = v1;
    }
    else{
        yil = 2022;
    }
}

Tarih::Tarih(int v1, int v2, int v3){

    setGun(1); gun = 1;
    setAy(1);   ay = 1;
    setYil(2022); yil = 2022;

}

Tarih Tarih::operator++(){
    
    if(gun == 31){
        
        if(ay == 12){
            gun = 1;
            ay = 1;
            yil++;
        }
        else{
            gun = 1;
            ay++;
        }
    }
    else{
        gun++;
    }
    return newTarih(gun, ay, yil);
   
}

string Tarih::ToString(){
    return std::to_string(gun) + "-" + std::to_string(ay) + "-" +std::to_string(yil);
}




int main(){


    Tarih t;

    t.setGun(3);
    t.setAy(1);
    t.setYil(2000);

    




    scanf(" ");
    return 0;
}