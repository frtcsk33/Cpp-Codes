#include <bits/stdc++.h>

using namespace std;

//binary tree

struct  ikili_agac
{
        int agac_verisi;
        struct ikili_agac *sola, *saga;
};

ikili_agac* yeni_agac(int agac_verisi){
    ikili_agac* gecici_dugum=new ikili_agac;
    gecici_dugum->agac_verisi=agac_verisi;
    gecici_dugum->sola=gecici_dugum->saga=NULL;
    return gecici_dugum;
}

void agaci_gez(struct ikili_agac* agac_dugum){
    if(agac_dugum==NULL){
        return; 
    }
    agaci_gez(agac_dugum->sola);
    cout<< agac_dugum->agac_verisi<<" ";
    agaci_gez(agac_dugum->saga);
   
    
}

int main(){

    struct ikili_agac* agac_kok=yeni_agac(1);
    cout<<"\n Agac verileri sunlardir:  \n";
    agaci_gez(agac_kok);   
    agac_kok->sola=yeni_agac(2);
    agac_kok->saga=yeni_agac(3);

      cout<<"\n Agac verileri sunlardir:  \n";   
     agaci_gez(agac_kok);   
     agac_kok->sola->sola=yeni_agac(4);
     agac_kok->sola->saga=yeni_agac(5);
     cout<<"\n Agac verileri sunlardir:  \n";
     agaci_gez(agac_kok);

    scanf(" ");
    return 0;
}