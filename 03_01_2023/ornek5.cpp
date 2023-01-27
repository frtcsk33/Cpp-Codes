#include <iostream>
using namespace std;

template<typename T>
void artir(T x)
{
	T i=10;
	i+=x;
	cout<<i<<endl;	
}

int main()
{
	artir('a');
	artir(5);
	artir(1.8);
	return 0;	
}

