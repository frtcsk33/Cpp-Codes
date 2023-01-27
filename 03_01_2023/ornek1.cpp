#include <iostream>
using namespace std;

int topla(int a, int b)
{	return a+b;
}

float topla(float a, float b)
{	return a+b;
}
int main()
{
	int sayi1=11, sayi2=15;
	cout<<topla(sayi1,sayi2)<<endl;
	
	float x=1.1, y=2.3;
	cout<<topla(x,y)<<endl;

	scanf(" ");
	return 0;	
}

