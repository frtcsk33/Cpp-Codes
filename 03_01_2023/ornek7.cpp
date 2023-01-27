#include <iostream>
using namespace std;
template <class Tur1, class Tur2>
Tur1 topla(Tur1 x, Tur2 y)
{ return x+y;
}

int main()
{
	int a=5;
	double b=6.5;
	cout<<topla(a, b)<<endl;
	cout<<topla(b, a)<<endl;
	return 0;	
}

