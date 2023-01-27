#include <iostream>
using namespace std;

int main(){

    int sayi;

    cout<< "sayiniz: ";
    cin>> sayi;

    int faktoriyel=1;

    for(int i=1; i<=sayi; i++){
        faktoriyel*=i;
        cout<<"faktoriyelimiz: "<<faktoriyel<< endl;
    } 
    cout<<"faktoriyel: "<<faktoriyel<<endl;

 

    scanf(" ");
    return 0;
}