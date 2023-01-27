#include <iostream>
#include <stdio.h>
using namespace std;
#define sonsuz_atamasi 999
#define maks_dugum_sayisi 5
void dijkstra_uygulamasi(int Graf[maks_dugum_sayisi][maks_dugum_sayisi],int n,int baslayacagimiz_dugum);
void dijkstra_uygulamasi(int Graf[maks_dugum_sayisi][maks_dugum_sayisi],int Baslangic_dugumu,int baslayacagimiz_dugum)
{
    int maliyet[maks_dugum_sayisi][maks_dugum_sayisi],mesafe[maks_dugum_sayisi],pred[maks_dugum_sayisi];
    int gezilmis[maks_dugum_sayisi],say,minimum_mesafe,sonraki_dugum,i,j;
    for(i=0;Baslangic_dugumu;i++)
       for(j=0;Baslangic_dugumu;j++)
            if(Graf[i][j]==0)
                maliyet[i][j]=sonsuz_atamasi;
            else
                maliyet[i][j]=Graf[i][j];
    for(i=0;i<Baslangic_dugumu;i++)
    {
        mesafe[i]=maliyet[baslayacagimiz_dugum][i];
        pred[i]=baslayacagimiz_dugum;
        gezilmis[i]=0;
    }
    mesafe[baslayacagimiz_dugum]=0;
    gezilmis[baslayacagimiz_dugum]=1;
    say=1;
    while(say<Baslangic_dugumu-1)
    {
            minimum_mesafe=sonsuz_atamasi;
        for(i=0;i<Baslangic_dugumu;i++)
           if(mesafe[i]<minimum_mesafe&& !gezilmis[i]){
                minimum_mesafe=mesafe[i];
                sonraki_dugum= i;
           }
           gezilmis[sonraki_dugum]=1;
           for(i=0;i<Baslangic_dugumu;i++)
           if (!gezilmis[i])
                if(minimum_mesafe+maliyet[sonraki_dugum][i]<mesafe[i]){
                    mesafe[i]=minimum_mesafe+maliyet[sonraki_dugum][i];
                    pred[i]=sonraki_dugum;
           }
           say++;
       }
       for(i=0;i<Baslangic_dugumu;i++)
            if(i!=baslayacagimiz_dugum){
                cout<<"\nDugumun Mesafesi "<<i<<"="<<mesafe[i];
                cout<<"\nYol="<<i;
                j=i;
        do{
            j=pred[j];
            cout<<"<-"<<j;
        }while(j!=baslayacagimiz_dugum);
    }
}
int main(){
    int Graf[maks_dugum_sayisi][maks_dugum_sayisi]={{0,1,0,3,10},{1,0,5,0,0},{0,5,0,2,1},{3,0,2,0,6},{10,0,1,6,0}};
    int dugum_sayisi=5;
    int Baslangic_dugumu=0;
    dijkstra_uygulamasi(Graf,dugum_sayisi,Baslangic_dugumu);
    return 0;
    }