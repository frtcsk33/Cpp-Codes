#include <iostream>
using namespace std;

template<typename T>
T maksimum(T x,T y)
{ return (x>y)? x : y;
}/*
int maksimum(int x,int y)...
char maksimum(char x, char y)...
float maksimum..*/
int main()
{
	
	cout<<maksimum(3,7)<<endl;
	cout<<maksimum(5.5,1.7)<<endl;
	cout<<maksimum('a','z')<<endl;
	return 0;	
}

