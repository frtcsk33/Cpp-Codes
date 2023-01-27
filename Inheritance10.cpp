#include <iostream>
//inheritance access --> :    accessing class --> ::
using namespace std;

class kisi{
    char ad[100];
    int no;

    public:
        void set_p();
        void display_p();
};  

void kisi::set_p(){
    cout<<"isminizi giriniz: ";
    cin>>ad;
    cout<<endl<<"no'yu giriniz: ";
    cin>>no;
}

void kisi::display_p(){
    cout<<"ad: "<<ad<<"\t"<<"no: "<<no;

}

class ogrenci: private kisi{

    char kurs[50];
    int fiyat;

    public:
        void set_o();
        void display_o();

};


void ogrenci::set_o(){

    set_p();
    cout<<"kursun ismini giriniz: ";
    cin>>kurs;
    cout<<endl<<"kursun fiyatini giriniz: ";
    cin>>fiyat;
}

void ogrenci::display_o(){
    display_p();
    cout<<"\t"<<kurs<<" \t"<<fiyat;

}




int main(){

    
    ogrenci b;
    b.set_o();
    b.display_o();
    






    scanf(" ");
    return 0;
}