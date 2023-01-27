#include <iostream> 

using namespace std;

class test
{
    int x, y;
    public:
        test(int a, int b){x=a; y=b; }
        test &setx(int a)
        {
            x=a;
            return *this;
        }
        test &sety(int b)
        {
            y=b;
            return *this;
        }
        void yaz(){cout<<"x= "<<x<<" y= "<<y<<endl; }
        ~test(){}
};


int main(){
    
    test t1(5,10);
    
    t1.yaz();

    t1.setx(6);
    t1.sety(15);

    t1.yaz();

    t1.setx(8).sety(22);
    t1.yaz();
    
    test t2(3,5);
    t2.yaz();






    scanf(" ");
    return 0;
}