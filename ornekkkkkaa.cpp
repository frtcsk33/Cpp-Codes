#include <iostream>

using namespace std;


template <class T> 

class Sinif{

    public:
        T a, b;

        Sinif(T x, T y){
            this->a = x;
            (*this).b = y;
        }

        T Topla();
};

template <class T>

T Sinif<T>::Topla(){
    return this->a + this->b;

}




int main(){

    Sinif <int> sayi(5, 10);

    Sinif <float> ondalik(3.3, 4.4);

    cout<<sayi.Topla()<<endl;
    cout<<ondalik.Topla()<<endl;





    scanf(" ");
    return 0;
}