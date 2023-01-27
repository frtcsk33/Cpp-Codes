#include <iostream>
using namespace std;
class test {
	public:
		int x,y;
		test(){x=0;y=0;	}
		test(int, int);
		bool operator>(test t3);
		bool operator<(test t3);
};

test::test(int a, int b){x=a; y=b;}
bool test::operator>(test t3)
{
	/*cout<<this->x<<"-"<<this->y<<endl;
	cout<<t3.x<<"-"<<t3.y<<endl;*/
	return ((x>t3.x) && (y>t3.y));
} //0>3 && 0>5

bool test::operator<(test t3)
{
	return ((x<t3.x) && (y<t3.y));
}
int main()
{
	test t1(8,1), t2(3,5);
	if(t1>t2)
		cout<<"t1 in degerleri t2 den büyüktür"<<endl;
	else
		cout<<"t1 in degerlerinden biri t2 den kucuktür"<<endl;
	
	
	if (t1<t2)
		cout<<"t1 in degerleri t2 den kucuktür"<<endl;
	else
		cout<<"t1 in degerlerinden biri t2 den buyuktür"<<endl;
	
	return 0;
}
