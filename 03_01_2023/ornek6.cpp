#include <iostream>
using namespace std;

template <class Tur>

class sinif{
	public:
		sinif(){cout<<"verituru char degil"<<endl;}
};
template<>
class sinif<char>
{
	public:
		sinif(){cout<<"char"<<endl;}
};

int main()
{
	sinif<int> a;
	sinif<float>b;
	sinif<char>c;	

	scanf(" ");
	return 0;	
}

