#include <iostream>
#include <string.h>

//genel ornek
using namespace std;

class Person{
    int id;
    char name[100];

    public:
        void set_p(int, char[]);
        void display_p();
        

};

void Person::set_p(int x, char n[]){
    
    this->id=x;
    strcpy(this->name, n);
}

void Person::display_p()
{
    cout<<"id: "<<id<<"  name: "<<name<<endl;
}

class Ogrenci: private Person{

    char ders[100];
    int ucret;

    public:
        void set_o(int, char[], char[], int);
        void display_o();    
};


void Ogrenci::set_o(int a, char n[], char d[], int u){

    set_p(a, n);
    strcpy(ders, d);
    this->ucret = u;

}

void Ogrenci::display_o(){
    display_p();
    cout<<"ders = "<<ders<<"  ucret= "<<ucret;
}




int main(){

    Ogrenci o1;
    o1.set_o(5, "firat", "c++", 50);
    o1.display_o();
    



    scanf(" ");
    return 0;
}