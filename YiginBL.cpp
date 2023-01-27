#include <iostream>
//bagli liste ile yigin olusturma
//LIFO son giren ilk çıkar
//pop,push,peek,top
using namespace std;

class Node{
    public: 
        int data;
        Node *next;
};

Node* yeni_dugum(int data){ //kok olusturma
    Node *dugum=new Node();
    dugum->data=data;
    dugum->next=NULL;
    return dugum;
}

void ekle(Node** kok, int data){
    Node *dugum=yeni_dugum(data);
    dugum->next=(*kok);
    *kok=dugum;
    cout<<data<<" yigina eklendi"<<endl;
}

int Bosmu(Node *kok){
    return !kok;
}

int gozat(Node* kok){
    if(Bosmu(kok)){
        return INT_MIN;
    }
    return kok->data;
}

int sil(Node **kok){
    if(Bosmu(*kok))
        return INT_MIN;
        
    Node* gecici=*kok;

    *kok=(*kok)->next;

    int silindi=gecici->data;
    return silindi;        

}


int main(){

    Node *kok=NULL;

    ekle(&kok,7);
    ekle(&kok,9);
    ekle(&kok,10);

    cout<<"en ustteki eleman: "<<gozat(kok)<<endl;        

    ekle(&kok,34);
    ekle(&kok,20);
     cout<<"en ustteki eleman: "<<gozat(kok)<<endl;

    while(!Bosmu(kok)){
        cout<<gozat(kok)<<" "<<endl;
        sil(&kok);
    }





    scanf(" ");
    return 0;
}