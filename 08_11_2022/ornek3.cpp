#include <iostream>
using namespace std;
class kutu{
	private:
		int en,boy;
	public:
		void set_deger(int e, int b);
		void yaz();
		int alan();
		bool kontrol();
};

void kutu::set_deger(int e, int b){en=e; boy=b;}
void kutu::yaz(){cout<<"en="<<en<<" boy="<<boy<<endl;}
int kutu::alan(){return en*boy;}
bool kutu::kontrol(){ return en>boy;
	/*if (en>boy) return true;
	else return false;*/
}
int main()
{
	kutu k1;
	k1.set_deger(5,6);
	k1.yaz();
	cout<<"alan="<<k1.alan()<<endl;
	cout<<"kontrol="<<k1.kontrol()<<endl;
	return 0;
}
