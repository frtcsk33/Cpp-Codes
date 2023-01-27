#include <iostream>
#include <string>
#define SIZE 5
using namespace std;

class Node{

    public:
        int key;
        string value;
        Node * next;

        Node()
        {
            key = 0;
            value ="";
            next = NULL;

        }

};




class HashTable{

    public:
    Node * dizi[SIZE];

    HashTable()
    {
        for(int i=0; i<SIZE; i++){
        dizi[i] = new Node();
        }
        cout<<"Tablo yapisi hazirlandi\n";
    }

    int indexUret(int key){
        return key %SIZE;
    }

    bool keyKontrol(int numara){



        int index = indexUret(numara);

        bool sonuc = true;


        Node *temp = dizi[index];
        

        while(temp->next != NULL){

            
            temp=temp->next;

            if( numara == temp->key )
            {
                
                sonuc = false;
                break;
            }   
        }

        return sonuc;

    }


    void ekle()
    {

        system("cls");
        cout<<"\nekleme islemi.."<<endl;

        Node *eleman = new Node();
        cout<<"key: "; cin>>eleman->key;

        bool sonuc = keyKontrol(eleman->key);
        if(sonuc == false)
            cout<<eleman->key<< " bu numaradan kayitli kisi var lutfen farkli numara giriniz "<<endl;

        else{
             cout<<"value : "; cin>>eleman->value;

        int index = indexUret(eleman->key);

        Node *temp = dizi[index];

        while(temp->next != NULL)
            temp=temp->next;
        
        temp->next = eleman;
        cout<<"eleman eklendi "<<endl;
        }


        
    }   
    void sil()
    {
        system("cls");
        cout<<"silme islemi.."<<endl;

        int numara;
        cout<<"key: "; cin>>numara;



        int index = indexUret(numara);

        bool sonuc = false;


        Node *temp2, *temp = dizi[index];
        

        while(temp->next != NULL){

            temp2 = temp;
            temp=temp->next;

            if( numara == temp->key )
            {
                temp2->next = temp->next;
                delete (temp);
                sonuc = true;
                break;
            }   
        }

        if(sonuc)
            cout<<numara<< " numarali eleman silindi. "<< endl;
        else
            cout<<numara<< " numarali eleman bulunamadi."  << endl;    
        
       



    } 
    void yazdir()
    {
        system("cls");
        cout<<"yazdirma islemi.."<<endl;

        for(int i = 0; i<SIZE; i++)
        {
            Node *temp = dizi[i];
            cout<<"\nDizi [ "<<i<< " ] --> ";
            while( temp->next != NULL)
            {
                temp=temp->next;
                cout<<temp->key<< " :" <<temp->value<< " --> ";
            }
        }
    
    }
    void ara();    

};

void HashTable::ara()
{
        system("cls");
        cout<<"arama islemi.."<<endl;

        int numara;
        cout<<"key: "; cin>>numara;



        int index = indexUret(numara);

        bool sonuc = false;


        Node *temp = dizi[index];
        

        while(temp->next != NULL){

            
            temp=temp->next;

            if( numara == temp->key )
            {
                
                sonuc = true;
                break;
            }   
        }

        if(sonuc)
            cout<<numara<< " numarali eleman bilgileri: key: "<<temp->key<<" value: "<<temp->value<<endl;
        else
            cout<<numara<< " numarali eleman bulunamadi."  << endl;    
}


int menu(){

    int secim;
    cout<<"\nHASH TABLE ( OZET TABLO ) YAPISI\n"<<endl;
    cout<<"1--ekle"<<endl;
    cout<<"2--sil"<<endl;
    cout<<"3--yazdir"<<endl;
    cout<<"4--arama"<<endl;
    cout<<"0--cikis"<<endl;
    cout<<"seciminiz"<<endl; cin>>secim;

    system("cls");
    return secim;
}



int main(){


    HashTable ht;
    
    int secim = menu();

    while(secim != 0)
    {
        switch(secim)
        {
            case 1: ht.ekle(); break;
            case 2: ht.sil(); break;
            case 3: ht.yazdir(); break;
            case 4: ht.ara(); break;
            case 0: break;
            default: cout<<"hatali secim yaptiniz..";

        }
        secim=menu();
    }



    scanf(" ");
    return 0;   
}