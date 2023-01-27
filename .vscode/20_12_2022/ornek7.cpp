#include <iostream>
#include <algorithm>
using namespace std;

double metre_to_cm(double a)
{return (a*100);
}

int main()
{
	double metre[]={1.5,2.3,8.5,12.75,9.00};
	double cm[5];
	
	//transform (baþla, bitis, hedef, fonk)
	transform(metre,metre+5, cm, metre_to_cm);
	
	int i;
	for(i=0;i<5;i++)
		cout<<metre[i]<<"\t";
	cout<<"\n";
	for(i=0;i<5;i++)
		cout<<cm[i]<<endl;
	
	return 0;
}
