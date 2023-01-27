#include <iostream>

using namespace std;

class number{
    int x;
    public:
        number(int a){x = a;}
        int yazdir(){return x;}
        ~number(){}

};

int kare(number sayi){

    sayi=number(sayi.yazdir()+1);
    return sayi.yazdir()*sayi.yazdir();

}

int kare2(number &sayi){

    sayi = number(sayi.yazdir()+1);
    return sayi.yazdir()*sayi.yazdir();
}



int main(){

    
    number a(5), b(7);

    cout<<"Kare'nin degeri: "<<kare(a)<<"--"<<kare(b)<<endl;
    cout<<"Kare2'nin degeri: "<<kare2(a)<<"--"<<kare(b)<<endl;
   




    scanf(" ");
    return 0;
}

