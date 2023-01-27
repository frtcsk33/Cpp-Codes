#include <iostream>
#include <cstring>
using namespace std;

class test{
    int a, b;
    public:
        test(){a=10; b=20;}
        friend int kontrol(test t);//arkadaş fonks.

};      

int kontrol(test t){
    if(t.a == t.b) return 1;
    else   return 0;
}

int main()
{

    test t1;
    if(kontrol(t1))
        cout<<"ayni deger"<<endl;

    else
        cout<<"farkli deger";

	scanf(" ");
	return 0;
}
