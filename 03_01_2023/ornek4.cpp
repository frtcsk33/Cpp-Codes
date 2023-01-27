#include <iostream>
using namespace std;
template<class T>
T ortalama(T* dizi, int boyut)
{
	T sonuc=0;
	for(int i=0;i<boyut;i++)
		sonuc+=dizi[i];
	sonuc/=boyut;
	return sonuc;
}



int main()
{
	int dizi1[]={10,20,30,40,50};
	cout<<ortalama(dizi1, 5)<<endl;
	
	float dizi2[]={10.5,2.0,5.30,6.40,8.50};
	cout<<ortalama(dizi2, 5)<<endl;
	
	return 0;	
}

