//nesne pointer�
#include <iostream>
using namespace std;

class dizi{
	int x;
	public:
		dizi(int n){x=n;}
		int yaz(){return x;	}
		void al(int n){x=n;}
		~dizi(){}
};


int main()
{
	dizi d[5]={2,5,6,9,10};
	int i, sayi;
	dizi *p;
	p=d;
	
	for(i=0;i<5;i++)
		{cout<<i+1<<". deger"<<endl;
		  cin>>sayi;
		 d[i].al(sayi);
		}
	for(i=0;i<5;i++)
	{
		cout<<p->yaz()<<endl;
		//cout<<(*p).yaz()<<endl;
		p++;
	}
	
	scanf(" ");
	return 0;
}
