#include <iostream>

using namespace std;




int main(){

    int *ptr=nullptr; //pointer herhangi yeri göstermiyor

    ptr = new int; //bir tane int saklayan bir tane ptr tanımlandı

    *ptr = 10;

    delete ptr; 

    *ptr=10; //dangling reference yani gösterdiği yerde geçerli bir
             //obje olmayan referans anlamına gelir.

    cout<<*ptr<<endl;

    scanf(" ");
    return 0;
}