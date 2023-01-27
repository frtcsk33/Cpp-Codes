#include <iostream>

using namespace std;



int faktoriyel(int N){

    if(N<=1)
        return 1;

    else{
        printf("sayimiz: %d : \n",N);
    }
    return N*faktoriyel(N-1);
    
}

int main(){


    int N, sonuc;
    cout<<"Faktoriyeli alinacak sayiyi giriniz: ";
    cin>>N;
    
    sonuc=faktoriyel(N);
    cout<<"Sonuc: "<<sonuc;


    scanf(" ");
    return 0;
}