#include <iostream>

enum renk{sari = 2, kirmizi, mavi, lacivert, mor, beyaz, siyah};

using namespace std;



int main(){


    renk r1, r2;
    r1 = kirmizi;
    r2 = beyaz;

    cout << r2 << endl; 

    if(r1 == kirmizi){
        cout<<"kirmizi";
    }
    else if(r1 == mavi){
        cout<<"Mavi";
    }





    scanf(" ");
    return 0;
}