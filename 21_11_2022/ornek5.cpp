#include <iostream>
using namespace std;

class kamyon;
class araba{
	private:
		int hiz;	
	public:
		araba(int h){hiz=h;	}
		~araba(){}
		friend int fark(araba a, kamyon k);
};

class kamyon{
	int hiz;
	public:
		kamyon(int h) {hiz=h;	}
		~kamyon(){	}
		friend int fark(araba a, kamyon k);
};

int fark(araba a, kamyon k){ return a.hiz-k.hiz;}

int main()
{
	
	araba a1(50);
	kamyon k1(60);
	cout<<fark(a1,k1);
	return 0;
}
