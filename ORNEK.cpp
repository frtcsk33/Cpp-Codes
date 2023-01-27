#include <iostream>

using namespace std;

class test{
    int sayi;

    public:
        test(int n){sayi = n;}
        int getir(){return sayi;}
        ~test(){}
};


int kare(test t1)
{
    t1 = test(t1.getir()+1);
    //cout<<t1.getir()<<endl;
    
    return t1.getir()*t1.getir();

}


int kare2(test &t1){

    t1 = test(t1.getir()+1);
    return t1.getir()*t1.getir();
}


int main(){


    test a(6), b(7);

    cout<<"a = "<<a.getir()<<endl;
    cout<<"b = "<<b.getir()<<endl;

    cout<<"kare fonk. "<<kare(a)<<"---"<<kare(b)<<endl;
    cout<<"kare2 fonk."<<kare2(a)<<"--- "<<kare2(b)<<endl;


    scanf(" ");
    return 0;  
}