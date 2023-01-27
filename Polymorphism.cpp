#include <iostream>

using namespace std;

int mutlakdeger(int);
double mutlakdeger(double);


int main(){

    cout<<"tam sayi= "<<mutlakdeger(-5)<<endl;
    cout<<"ondalikli sayilar = "<<mutlakdeger(-5.5)<<endl;


    scanf(" ");
    return 0;
}

int mutlakdeger(int a){
    // if(a<0)
    //     return (a*-1);
    // else  
    //     return a;
    
    return (a<0)?(a*-1):a;
    //şart ? islem1 : islem2
}

double mutlakdeger(double a){
    return (a<0)?(a*-1):a;
}