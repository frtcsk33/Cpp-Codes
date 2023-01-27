//protected inheritance
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

class protected_derived: protected Base{
	public:
		int get_pub(){return pub;	}
		int get_proc(){return proc;	}
		int get_deger_prv(){return get_prv();}
};

int main(){
	protected_derived p1;
	cout<<p1.get_pub()<<endl;
	cout<<p1.get_proc()<<endl;
	cout<<p1.get_deger_prv()<<endl;
	
	Base b1;
	cout<<b1.pub<<endl;
	cout<<b1.get_prv()<<endl;
	
	
//	cout<<p1.
	return 0;
}
