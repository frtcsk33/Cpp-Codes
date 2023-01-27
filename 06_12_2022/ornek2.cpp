//public inheritance
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

class public_derived: public Base{
	public:
		int get_pub(){return pub;	}
		int get_proc(){return proc;	}
		//int get_prv(){return prv;	}// yanl�� tan�mlama
};
int main(){
	public_derived p1;
	cout<<" pub= " <<p1.pub<<endl;
	cout<<"get_pub fonk= "<<p1.get_pub()<<endl;
	cout<<"get_proc fonk="<<p1.get_proc()<<endl;
	cout<<"get_prv fonk="<<p1.get_prv()<<endl;
	scanf(" ");
	return 0;
}
