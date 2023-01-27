#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int s1[]={3,5,6,1,100};
	int s2[]={5,6,1};
	
	//search(ba�lang��1, biti�1, ba�la2, bitis2)
	
	int *ptr=search(s1,s1+5,s2,s2+3);
	cout<<"s1= "<<s1<<endl;
	cout<<"ptr= "<<ptr<<endl;

	for(int i=0; sizeof(ptr)< i; i++){
		cout<<endl<<*ptr[i]<<" \t";
	}

	if(ptr==s1+5)
		cout<<"bulunamad�";
	else
		cout<<"bulundu";
	
	scanf(" ");
	return 0;
}
