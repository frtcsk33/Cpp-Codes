#include <iostream>
using namespace std;
//Templates
//typename yerine class yazılabilir.
template <class Tur>


Tur topla(Tur a, Tur b){

   return a+b; 
}



int main(){


    int sayi1 = 10, sayi2 = 15;
    cout<<topla(sayi1, sayi2)<<endl;


    float x = 1.1, y = 2.3;

    cout<<topla(x,y);





    scanf(" ");
    return 0;
}