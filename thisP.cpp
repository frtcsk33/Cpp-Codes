#include <iostream>

using namespace std;

class test{
    int x, y=6;

    public: 
        void setx(int a){this->x=a;}
        void getx(){
            cout<<x<<endl;
            cout<<this->x<<" - "<<this->y<<endl;

            cout<<(*this).x<<endl;
            cout<<&this->x<<endl;

            cout<<&(*this).x<<endl;
            cout<<&(*this).y<<endl;
        }
};


int main(){

    test o1;
    o1.setx(5);
    o1.getx();






    scanf(" ");
    return 0;
}

