#include <iostream>

using namespace std;

int main(){
    int a=5;

    int *ptr=&a;
    cout<<"degiskenin adres degeri: "<<&a<<endl;
    cout<<"Degiskenin adresi: "<<ptr<<endl;

    cout<<"degiskenin degeri: "<<*ptr<<endl;

    *ptr = 6;
    cout<<"degiskenin degeri: "<<a<<endl;



    scanf(" ");
    return 0;

}