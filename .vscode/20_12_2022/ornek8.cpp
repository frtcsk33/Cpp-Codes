#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int s1[]={3,5,6,1,100};
	int s2[]={5,6,1};
	
	//search(baþlangýç1, bitiþ1, baþla2, bitis2)
	
	int *ptr=search(s1,s1+5,s2,s2+3);
	cout<<"s1= "<<s1<<endl;
	cout<<"ptr= "<<ptr<<endl;
	if(ptr==s1+5)
		cout<<"bulunamadý";
	else
		cout<<"bulundu";
	return 0;
}
