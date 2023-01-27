#include <iostream>
using namespace std;

class test{

    public:
        int x, y;
    
    test(){x=0; y=0;}
    test(int, int);

    bool operator > (test t3);
    bool operator < (test t3);

};

test::test(int a, int b){x = a; y = b;}

bool test::operator>(test t3){

    cout<<x<<"--"<<this->x<<"--"<<t3.x<<endl;
    cout<<y<<"--"<<this->y<<"--"<<t3.y<<endl;

    return (x > t3.x) && (y > t3.y);
}

bool test::operator<(test t3){

    cout<<x<<"--"<<this->x<<"--"<<t3.x<<endl;
    cout<<y<<"--"<<this->y<<"--"<<t3.y<<endl;

    return (x < t3.x) && (y < t3.y);
}

int main()
{
   

    test t1(3,5), t2(6,2);

    if(t1 > t2){
        cout<<"t1 >> t2"<<endl;
    }
    else{
        cout<<"t1'in degelerinden biri t2'den kucuktur"<<endl;
    }

    if(t1 < t2){
        cout<<"t1 in degerleri t2'den kucuktur"<<endl;
    }
    else{
        cout<<"t1'in degerlerinden biri t2 den buyuktur"<<endl;
    }




    scanf(" ");
	return 0;
}
