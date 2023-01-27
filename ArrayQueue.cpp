#include <iostream>
//FIFO dizi queue ekleme çıkarma ve gezinme işlemi
using namespace std;

int kuyruk[100], eleman_sayisi=100, kuyruk_onu=-1, kuyruk_arkasi=-1;  

void ekleme(){
    int eleman;
    if(kuyruk_arkasi== eleman_sayisi-1){
        cout<<"kuyruk tasmasi!!";
    }
    else{
        if(kuyruk_onu==-1)
            kuyruk_onu=0;

        cout<<"girileecek olan elemani giriniz: ";
        cin>>eleman;
        kuyruk_arkasi++;
        kuyruk[kuyruk_arkasi]=eleman;

    }
}

void silme(){
    if(kuyruk_onu==-1 || kuyruk_onu>kuyruk_arkasi)
        cout<<"kuyrukta eleman yok"<<endl;

    else{
        cout<<"silinecek olan eleman"<<kuyruk[kuyruk_onu]<<endl;
        kuyruk_onu++;
    }
}



void gosterme(){

    for(int i=kuyruk_onu; i<=kuyruk_arkasi; i++){
        cout<<"elemanlar: "<<kuyruk[i]<<endl;
    }

}





int main(){

    int secim;

    cout<<"\tMENU\t"<<endl;
    cout<<"1--Kuyruga Eleman ekleme"<<endl;
    cout<<"2--Kuyruktan Eleman silme"<<endl;
    cout<<"3--Kuyruktaki elemanlari gosterme"<<endl;
    cout<<"4--Cikis"<<endl;

    do{
        cout<<"\nLutfen Menuden bir islem seciniz: ";
        cout<<endl;
        cin>>secim;

        switch(secim){
            case 1: ekleme(); break;

            case 2: silme(); break;

            case 3: gosterme(); break;

            case 4: cout<<"Cikis"<<endl; break;

            default: cout<<"araliktan islem secmediniz!"<<endl;
        }



    }while(secim!=4);






    scanf(" ");
    return 0;
}