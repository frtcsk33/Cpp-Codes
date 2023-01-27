#include <iostream>

using namespace std;

class kamyon;
class araba{

    private:
        int hiz;
    public:
        araba(int h){hiz=h;}
        araba(){}

        void set_hiz(int h){hiz=h;}
        int get_hiz(){return hiz;}

        ~araba(){}
        friend int fark(araba a, kamyon k);
        
};

class kamyon{
    int hiz;
    public:
        kamyon(int h){hiz=h;}
        ~kamyon(){}
        friend int fark(araba a, kamyon k);
};

int fark(araba a, kamyon k){return a.hiz - k.hiz;}



int main(){


    araba a1(50);
    kamyon k1(60);
    cout<<fark(a1, k1)<<endl;

    araba a2;
    a2.set_hiz(40);
    cout<<a2.get_hiz()<<endl;;

    cout<<fark(a2,k1);






    scanf(" ");
    return 0;
}