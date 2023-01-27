#include <iostream>
#include <stdio.h>

using namespace std;

#define sonsuz_atamasi 9999
#define max 5

void dijkstra(int Graf[max][max], int bas_dugum, int baslangic){

    int maliyet[max][max], mesafe[max], pred[max];

    int gezilmis[max], say, minimum_mesafe, sonraki_dugum, i, j;

    for(i = 0; i<bas_dugum; i++){

        for(j = 0; j < bas_dugum; j++){

            if(Graf[i][j] == 0)
            {
                maliyet[i][j] = sonsuz_atamasi;
            }
            else
            {
                maliyet[i][j] = Graf[i][j];
            }
        }
    }

    for(i=0; i<bas_dugum; i++){

        mesafe[i] = maliyet[baslangic][i];
        pred[i] = baslangic;
        gezilmis[i] = 0;
    }

    mesafe[baslangic] = 0;
    gezilmis[baslangic] = 1;

    say = 1;

    while(say < bas_dugum-1)
    {
        minimum_mesafe = sonsuz_atamasi;

        for(i=0; i<bas_dugum; i++)
        {

            if(mesafe[i] < minimum_mesafe && !gezilmis[i])
            {
                minimum_mesafe = mesafe[i];
                sonraki_dugum = i;
            }
        }
        gezilmis[sonraki_dugum] = 1;

        for(i=0; i<bas_dugum; i++){

            if(!gezilmis[i]){
                if(minimum_mesafe+maliyet[sonraki_dugum][i] < mesafe[i])
                {
                    mesafe[i] = minimum_mesafe+maliyet[sonraki_dugum][i];
                    pred[i] = sonraki_dugum;
                }
            }
        }
    }

    say++;

    for(i=0; i<bas_dugum; i++){

        if(i != baslangic)
        {
            cout<<"\n dugumun mesafesi "<<i<<"="<<mesafe[i];
            cout<<"\n Yol"<<i;

            j=i;
        }
        do{
            j=pred[j];
            cout<<"<--"<<j;

        }while(j!=baslangic);
    }

}



int main(){


    int Graf[max][max] = {{0,1,0,3,10},{1,0,5,0,0},{0,5,0,2,1},{3,0,2,0,6},{10,0,1,6,0}};
    int dugum_sayisi = 5;
    int bas_dugum = 0;

    dijkstra(Graf, dugum_sayisi, bas_dugum);



    scanf(" ");
    return 0;
}