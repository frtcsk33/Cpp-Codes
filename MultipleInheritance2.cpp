#include <iostream>

using namespace std;

class a{
    public:
        a(){cout<<"a olusturuldu"<<endl;}
        ~a(){}
};

class b{
    public:
        b(){cout<<"b olusturuldu"<<endl;}
        ~b(){}
};

// class c: public a, public b{

// };
     
class c: public a, private b{

};

int main(){

    c c1;
    
   



    scanf(" ");
    return 0;
}