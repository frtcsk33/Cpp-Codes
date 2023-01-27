#include <iostream>
//protected inheritance
using namespace std;


class Base{
    public:
        int pub = 3;
        int get_prv(){return prv;}
    protected:
        int proc = 2;
        
    private:
        int prv = 1;
        
};

class Derived: protected Base{
    public:
        int get_pub(){return pub;}
        int get_proc(){return proc;}
        int get_deger_prv(){return get_prv();}
};


int main(){

    Derived d1;

    cout<<d1.get_pub()<<endl;
    cout<<d1.get_proc()<<endl;
    cout<<d1.get_deger_prv()<<endl;
    

    Base b1;

    cout<<b1.get_prv()<<endl;
    cout<<b1.pub<<endl;    




    scanf(" ");
    return 0;
}