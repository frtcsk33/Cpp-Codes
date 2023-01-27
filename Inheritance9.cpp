#include <iostream>

using namespace std;


class Person{
    int id;
    char isim[100];

    public:
        void set_p(){
            cout<<"Enter the id: ";
            cin>>id;
            fflush(stdin);
            cout<<"Enter the name: ";
            cin.get(isim,100);
        }

    void display_p()
    {
        cout<<endl<<id<<"\t"<<isim<<"\t";
    }
};

class Student: private Person{
    
    char kurs[50];
    int fiyat;

    public:
        void set_s()
        {
            set_p();
            cout<<"enter the course name: ";
            cin>>kurs;
            cout<<"enter the course fee: ";
            cin>>fiyat;


        }
        void display_s(){
            display_p();
            cout<<kurs<<"\t "<<fiyat<<endl;
        }




};



int main(){


    Student s1;

    s1.set_s();
    s1.display_s();
    




    scanf(" ");
    return 0;
}