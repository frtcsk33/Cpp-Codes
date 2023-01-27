//multilevel inheritance
#include <iostream>
using namespace std;

class a{
	public:
		int x=1;
		a(){cout<<" aa "<<endl;}
		~a(){}
	protected:
		int y=2;
};


class b: public a{
	public:
		b(){cout<<" bb "<<endl;}
		~b(){}
		int get_z(){return z;}
		
	//protected:
	private:
		int z=3;
};

class c: public b{
	public:
		int get_x(){return x;	}
		int get_y(){return y;	}
//		int hacim(){return x*y*z;}
		int hacim(){return x*y*get_z();}
};

int main(){
	c c1;
	cout<<c1.get_x()<<endl;
	cout<<c1.x<<endl;
	cout<<c1.get_y()<<endl;
	cout<<c1.hacim()<<endl;
//	cout<<c1.y<<endl;
	
	return 0;
}
