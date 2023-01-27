#include <iostream>

using namespace std;

class saydir{
    private:
        int value;
    public:
        saydir():value(5){}
        ~saydir(){}

        void operator++(){ //prefix
            ++value;
            cout<<"prefix value: "<<value<<endl;
        }
        void operator++(int){ //postfix
            value++;
            cout<<"postfix value :"<<value<<endl;
        }
        // void display(){
        //     cout<<endl<<"sonuc: "<<value;
        // }

};



int main(){

    saydir s1;

    s1++; //postfix
    // s1.display();

    ++s1;
    // s1.display();
   


    scanf(" ");
    return 0;
}

