//private inheritance
#include <iostream>
using namespace std;
class Base{
	public:
		int pub=3;
		int get_prv(){return prv;	}
	protected:
		int proc=2;
	private:
		int prv=1;	
};

class private_derived: private Base{
	public:
		int get_pub(){return pub;}
		int get_proc(){return proc;}
		int get_priv(){return get_prv();}
};
int main(){
	private_derived p1;
	
	cout<<p1.get_pub()<<endl;
	cout<<p1.get_proc()<<endl;
	cout<<p1.get_priv()<<endl;
	//cout<<p1.get_prv()<<endl;
//	cout<<p1.pub<<endl;
	scanf(" ");
	return 0;
}
