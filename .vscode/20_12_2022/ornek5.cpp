#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int s1[]={11,15,33,1,55,6,77,58,99,10};
	int i;
	for(i=0;i<9;i++)
		cout<<s1[i]<<" \t";
	cout<<"\n";
	sort(s1, s1+9);
	for(i=0;i<9;i++)
		cout<<s1[i]<<" \t";
	
	
	//sort(baþlangýç,bitiþ)
	return 0;
}
