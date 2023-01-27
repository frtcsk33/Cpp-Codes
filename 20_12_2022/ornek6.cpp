// string dizisi tanýmlauarak ekranda gösteriniz.
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
char *isim[]={"zehra", "ali", "fatma", "sükriye", "mehmet"};

bool karsilastir(char *s1, char *s2)
{
	//cout<<"s1= "<<s1<<" s2="<<s2<<endl;
	return ((strcmp(s1,s2)<0)?true: false);
}


int main()
{
	int i;
		
	for(i=0;i<5;i++)
		cout<<isim[i]<<endl;
	
		
	sort(isim, isim+5, karsilastir);
	
	
	for(i=0;i<5;i++)
		cout<<isim[i]<<endl;
	
	return 0;
}
