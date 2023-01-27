#include <iostream>
#include <string.h>
//genel ornek
using namespace std;

class Kisi{
    
    char isim[100];
    int yas;

    public:
        void set_k(char[], int);
        void display_k();

};

void Kisi::set_k(char n[], int y){
    strcpy(isim, n);
    this->yas = y;

}

void Kisi::display_k(){
    cout<<"isim: "<<isim<<"  yas: "<<yas<<endl;
}

class Ogrenci: private Kisi{
    private:
        char okul[100];
        char bolum[100];
        int no;

    public:
        void set_o(char[], char[], char[], int, int);
        void display_o();
};

void Ogrenci::set_o(char l[], char a[], char k[], int no, int yas){
    set_k(l, yas);
    strcpy(okul, a);
    strcpy(bolum, k);
    this->no = no;
    
}

void Ogrenci::display_o(){
    display_k();
    cout<<"okul: "<<okul<<"  bolum: "<<bolum<<" no: "<<no<<endl;

}




int main(){

    Ogrenci o1;
    o1.set_o("Firat","KMU", "Bilg.Muh", 201312054, 22);
    o1.display_o();
    
   



    scanf(" ");
    return 0;
}