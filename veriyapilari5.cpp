#include <iostream>
using namespace std;
//dizi ile Queue oluşturma
int kuyruk[100],eleman_sayisi=100,kuyruk_onu=-1,kuyruk_arkasi=-1;
void Ekleme_islemi(){
    
    int islenen_eleman;
    if(kuyruk_arkasi==eleman_sayisi-1){
        cout<<"Kuyruk tasmasi-tanımlanan eleman sayisi asildi"<<endl;
    }
    else{
        if(kuyruk_onu==-1)
            kuyruk_onu=0;

            cout<<"kuyruga eklenen elemanı: "<<endl;
            cin>>islenen_eleman;
            kuyruk_arkasi++;
            kuyruk[kuyruk_arkasi]=islenen_eleman;
            
    }
}

void Silme_islemi(){
    if(kuyruk_onu==-1||kuyruk_onu>kuyruk_arkasi){
        cout<<"kuyrukta eleman yok";
        return ;
    }
    else{
        cout<<"kuyruktan silinen eleman: "<<kuyruk[kuyruk_onu]<<endl;
        kuyruk_onu++;

    }
}

void Eleman_gosterme_islemi(){
    if(kuyruk_onu==-1){
        cout<<"kuyruk bos"<<endl;

    }
    else{
        cout<<"kuyruk elemanlari: ";
        for(int i=kuyruk_onu; i<=kuyruk_arkasi;i++){
            cout<<kuyruk[i]<<" ";
            cout<<endl;   
        }
    }
}


int main(){

    int menu_secim;
    cout<<"1) kuyruga eleman ekleme"<<endl;
    cout<<"2) kuyruga eleman silme"<<endl;
    cout<<"3) kuyruga elemanlari gosterme"<<endl;
    cout<<"4) cikis"<<endl;

    do{
        cout<<"secimini giriniz: "<<endl;
        cin>>menu_secim;
        switch(menu_secim){
            case 1: Ekleme_islemi();
            break;
            case 2: Silme_islemi();
            break;
            case 3: Eleman_gosterme_islemi();
            break;
            case 4: cout<<"Cikis"<<endl;
            break;
            default: cout<<"boyle bir islem yok!!"<<endl;

        }





    }while(menu_secim!=4);



    return 0;
    scanf(" ");
}