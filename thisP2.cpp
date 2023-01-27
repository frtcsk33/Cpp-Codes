#include <iostream>

using namespace std;

class sayi{
    int x= 5, y;    

    public:
        void setx(int a){this->y = a;}
        void getx()
        {
            cout<<x<<endl;
            cout<<this->y<<" - "<<this->x<<endl;

            cout<<(*this).y<<endl;
            cout<<&this->y<<endl;

            cout<<&(*this).y<<endl;
            cout<<&(*this).x<<endl;
        }
};



int main(){

    
   
    sayi b1;
    b1.setx(10);
    b1.getx();





    scanf(" ");
    return 0;
}

