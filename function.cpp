#include <iostream>

using namespace std;


void factorial(int sayi){
    int faktoriyel=1;
    for(int i=2; i<=sayi; i++){
        faktoriyel*=i;
    }
    cout<<"faktoriyel: "<<faktoriyel<<endl;
}


int main(){
    int sayi;
    cin>>sayi;

    
    factorial(sayi);
   



    scanf(" ");
    return 0;
}

