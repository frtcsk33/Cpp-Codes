#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int dizi[]={33,22,44,33,55,75,85,11};
	int aranan=33;
	
	//find(ba�lang��, biti�, aranan) => aranan de�eri bulur
	int *ptr=find(dizi, dizi+8, aranan);
	cout<<"ptr="<< ptr<<"\t"<<"dizi="<<dizi<<endl;		
	cout<<"aranan deger= "<< ptr-dizi <<". indiste"<<endl;
	
	//cout<<"\n"<<&dizi<<"-"<<&dizi[1];
	
	//count(ba�lang��, biti�, aranan) => ka� adet oldu�unu g�sterir
	int boyut=sizeof(dizi)/sizeof(dizi[0]);
	int i=count(dizi, dizi+boyut, aranan);
	cout<<aranan<<" degerden "<<i <<" adet vard�r"<<endl;
	
	/*
	int i, sayac=0;
	for(i=0;i<(sizeof(dizi)/sizeof(dizi[0]));i++)
		if(aranan==dizi[i])
			//cout<<"buldu";
			sayac++;
	cout<<aranan<<" "<<sayac<<" kez bulundu";		*/
	return 0;
}
