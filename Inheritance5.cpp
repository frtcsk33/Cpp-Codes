#include <iostream>

using namespace std;

class K{

    int deger;
        public:
            int k1(){return deger=15;}

};

class L: public K{
    int degerL;
        public:
            int l1(){return degerL=20;}
};


int main(){

    L value;
    cout<<value.l1()<<endl;
    cout<<value.K::k1()<<endl;
    cout<<value.k1()<<endl;
    cout<<value.L::l1()<<endl;




    scanf(" ");
    return 0;
}