#include <iostream>
using namespace std;

template <typename T>

void artir(T x){

    T i = 10;

    i += x;
    cout<<i<<endl;
}

int main(){

    artir(5);
    artir('a');
    artir(1.8);




    scanf(" ");
    return 0;
}