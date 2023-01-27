#include <iostream>

using namespace std;

void degerDegistir(int *ptr){
    *ptr = 20;
    cout<< "fonksiyon icindeki deger"<<*ptr<<endl;

}


int main(){
    int a=10;
    cout<<"a nin degeri: "<<a<<endl;
    degerDegistir(&a);
    cout<<"a nin yeni degeri: "<<a<<endl;

    scanf(" ");
    return 0;

}