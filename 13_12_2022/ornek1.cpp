//overloading fonksiyon
#include <iostream>
using namespace std;

int mutlakdeger(int);
double mutlakdeger(double);

int main()
{
  
	cout<<" tam say�= "<<mutlakdeger(-5)<<endl;
	cout<<" ondal�kl� say�= "<<mutlakdeger(-5.5)<<endl;
	
	return 0;
}

int mutlakdeger(int a)
{ /*if(a<0) return (a*-1);
  else return a;*/
  return (a<0)?(a*-1):a;
  //�art ? islem1 : islem2
}

double mutlakdeger(double a)
{return (a<0)?(a*-1):a;
}
