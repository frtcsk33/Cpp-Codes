#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int dizi[]={33,22,44,33,55,75,85,11};
	int aranan=33;
	
	//find(baþlangýç, bitiþ, aranan) => aranan deðeri bulur
	int *ptr=find(dizi, dizi+8, aranan);
	cout<<"ptr="<< ptr<<"\t"<<"dizi="<<dizi<<endl;		
	cout<<"aranan deger= "<< ptr-dizi <<". indiste"<<endl;
	
	//cout<<"\n"<<&dizi<<"-"<<&dizi[1];
	
	//count(baþlangýç, bitiþ, aranan) => kaç adet olduðunu gösterir
	int boyut=sizeof(dizi)/sizeof(dizi[0]);
	int i=count(dizi, dizi+boyut, aranan);
	cout<<aranan<<" degerden "<<i <<" adet vardýr"<<endl;
	
	/*
	int i, sayac=0;
	for(i=0;i<(sizeof(dizi)/sizeof(dizi[0]));i++)
		if(aranan==dizi[i])
			//cout<<"buldu";
			sayac++;
	cout<<aranan<<" "<<sayac<<" kez bulundu";		*/
	return 0;
}
