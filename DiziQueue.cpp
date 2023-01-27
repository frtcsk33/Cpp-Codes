#include <iostream>

using namespace std;
//dizi queue
int kuyruk[50], eleman_sayisi=50, kuyruk_onu=-1,kuyruk_arkasi=-1;


void Ekleme_islemi(){
    int eleman;

    if(kuyruk_arkasi == eleman_sayisi-1){
        cout<<"kuyruk tasmasi!! Tanimlanan Eleman sayisi asildi"<<endl;
    }
    else{
        if(kuyruk_onu == -1)
            kuyruk_onu=0;

        cout<<"Girilecek olan eleman: ";
        cin>>eleman;
        kuyruk_arkasi++; //dahil
        kuyruk[kuyruk_arkasi]=eleman; //Tekrar dönüp bak!!
           
    }
}

void Silme_islemi(){
    if(kuyruk_onu==-1 || kuyruk_onu>kuyruk_arkasi){
        cout<<"Kuyrukta eleman yoktur! "<<endl;
    }
    else{
        cout<<"Silienecek olan eleman: "<<kuyruk[kuyruk_onu]<<endl;
        kuyruk_onu++;
    }
}

void Eleman_gosterme(){

    for(int i=kuyruk_onu; i<=kuyruk_arkasi; i++){
        cout<<"Elemanlar: "<<kuyruk[i]<<endl;
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
            case 1: Ekleme_islemi(); break;

            case 2: Silme_islemi(); break;

            case 3: Eleman_gosterme(); break;

            case 4: cout<<"Cikis"<<endl; break;

            default: cout<<"araliktan islem secmediniz!"<<endl;
                    }



    }while(secim!=4);






    scanf(" ");
    return 0;
}