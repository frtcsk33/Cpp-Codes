#include <iostream>
#include <string>
#define SIZE 5


using namespace std;



class Node{

    public:
        int key;
        string value;
    Node * next;
    
    Node(){
        key = 0;
        value = "";
        next = NULL;
    }

};


class HashTable{

    public:
        Node *dizi[SIZE];

        HashTable()
        {   
            for(int i=0; i<SIZE; i++){

                dizi[i] = new Node();
            }
            cout<<"tablo yapisi hazir"<<endl;
        }

        int indexUret(int key){

            return key %SIZE;
        }

        bool keyKontrol(int numara)
        {

            int index = indexUret(numara);

            bool sonuc = true;


            Node *temp = dizi[index];



            while(temp->next != NULL){
                temp = temp->next;


                if(numara == temp->key){

                    sonuc = false;
                    break;

                }
            }
            return sonuc;



        }


        void ekle(){
            cout<<"\nekleme islemi"<<endl;

            Node *eleman = new Node();
            cout<<"key: "; cin>>eleman->key;

            bool sonuc =keyKontrol(eleman->key);

            if(sonuc == false)
                cout<<eleman->key<< " bu numaradan kayitli kisi var lutfen farkli bir numara giriniz :"<<endl;

            else{
                cout<<"value: "; cin>>eleman->key;
                
            }    


            int index = indexUret(eleman->key);

            Node *temp = dizi[index];

            while(temp->next != NULL){
                temp=temp->next;
            } 
            temp->next = eleman;
            cout<<"eleman eklendi.."<<endl;

        }

        void yazdir()
        {
            cout<<"yazdirma islemi.."<<endl;

            for(int i=0; i<SIZE; i++)
            {      
                Node * temp = dizi[i];
                cout<<"\nDizi [ " <<i<< " ] --> ";

                while(temp->next != NULL)
                {
                    temp=temp->next;
                    cout<<temp->key<< " : "<<temp->value<<" -->";
                }
                
            }
        }
        void sil(){
            cout<<"\n silme islemi"<<endl;

            int numara;
            cout<<"key :"; cin>>numara;

            int index = indexUret(numara);

            bool sonuc = false;

            Node *temp2, *temp = dizi[index];


            while(temp->next != NULL){
                temp2 = temp;
                temp=temp->next;

                if(numara == temp->key){
                    temp2->next = temp->next;
                    delete temp;
                    sonuc = true;
                    break;
                }
            }
            if (sonuc)
                cout<<numara<<" numarali eleman silindi. "<<endl;
            else
            cout<<numara<< " numarali eleman bulunamadi."  << endl;    
            
        }

        void ara();

};

void HashTable::ara(){

    int numara;
    cout<<"arama islemi"<<endl;
    
    cout<<"key: "; cin>>numara;

    int index = indexUret(numara);

    bool sonuc = false;

    Node * temp = dizi[index];

    while(temp->next != NULL){

        temp= temp->next;

        if(numara == temp->key){

            sonuc = true;
            break;
        }


    }

    if(sonuc){
        cout<<numara<<"  numarali elemanin bilgileri : key: "<<temp->key<<" value: "<<temp->value<<endl;


    }

    else{
        cout<<numara<< " numarali eleman bulunamadi."  << endl;    
    }


}






int main(){

    HashTable ht;

    ht.ekle();
    ht.ekle();
    ht.ekle();
    ht.ekle();

    ht.yazdir();

    ht.ara();


    ht.sil();
    ht.sil();

    ht.yazdir();

    scanf(" ");
    return 0;
}