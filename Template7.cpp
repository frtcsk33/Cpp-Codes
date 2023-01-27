#include <iostream>

using namespace std;

template <class Tur>

class sayi{
    public:
        Tur a, b;
        sayi(Tur x, Tur y){
            this->a = x;
            (*this).b = y;
        }
        Tur topla();
};

template <class Tur>

Tur sayi<Tur>::topla()
{
    return this->a + this->b;
}


int main(){

    sayi <int> tamsayi(3,5);

    sayi <float> ondalikli(1.1, 2.5);

    cout<<tamsayi.topla()<<endl;
    cout<<tamsayi.topla()<<endl;



    scanf(" ");
    return 0;
}