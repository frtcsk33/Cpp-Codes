#include <iostream>
#include <algorithm>

using namespace std;

int main()
{   
    int dizi[] = {33,22,44,33,55,75,85,11};
    int aranan = 33;

    //find(baslangic, bitiş, aranan) => aranan degeri bulur
    
    int *ptr = find(dizi, dizi+8, aranan);
    cout<<"ptr= "<<ptr<<"\t "<<"dizi: "<<dizi<<endl;
    cout<<"aranan deger ="<<ptr-dizi <<". indiste"<<endl;

    //count(baslangic, bitiş, aranan) => kac adet oldugunu gosterir

    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    cout<<"boyut: "<<boyut<<endl;

    // int i = count(dizi, dizi+boyut, aranan);
    // cout<<aranan<<"  degerden "<<i<< " adet vardir."<<endl;

    int j, sayac = 0;

    for(j = 0; j<sizeof(dizi)/sizeof(dizi[0]); j++){
        if(aranan == dizi[j])
            //cout<<"buldu";
            sayac++;
    }   
    cout<<aranan<<" "<<sayac<<" kez bulundu";

    scanf(" ");
	return 0;
}
