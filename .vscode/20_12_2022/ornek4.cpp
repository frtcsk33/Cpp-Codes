#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int s1[]={3,5,8,9,10}, s2[]={11,22,33};
	int dest[8],i;
	
	//merge(baþlangýç_1, bitiþ_1, baþla_2, bitis_2, hedef)
	merge(s1, s1+5, s2, s2+3, dest);
	for(i=0;i<8;i++)
		cout<<dest[i]<<"\t";
	return 0;
}
