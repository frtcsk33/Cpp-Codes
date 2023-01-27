#include <iostream>
//public inheritance 2
using namespace std;

class Base{
    public:
        int pub=3;
        int get_prv(){return prv;}
    protected:
        int proc = 2;
    private:
        int prv=1;    
};

class Derived: public Base{
    public:
        int get_pub(){return pub;}
        int get_proc(){return proc;}
        //int get_prv(){return prv;} yanlış tanımlama

};



int main(){

    Derived d1;
    cout<<"pub: "<<d1.get_pub()<<endl;
    cout<<"proc: "<<d1.get_proc()<<endl;
    cout<<"priv: "<<d1.get_prv()<<endl;

    Base b1;

    cout<<b1.pub<<endl;
    cout<<b1.get_prv()<<endl;
    




    scanf(" ");
    return 0;
}