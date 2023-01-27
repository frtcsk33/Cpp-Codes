#include <iostream>
//private inheritance
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

class Derived: private Base{
    
    public:
        int get_pub(){return pub;}
        int get_proc(){return proc;}
        
};


int main(){

   
    Derived d1;

    cout<<d1.get_proc()<<endl;
    cout<<d1.get_pub()<<endl;
    



    scanf(" ");
    return 0;
}