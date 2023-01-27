#include <iostream>
//LIFO push,pop,top,peek
using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

Node *temp=NULL;
Node *top=NULL;

void push(int data){
    
    Node *eleman=new Node();
    eleman->data=data;

    if(top==NULL){
        top=eleman;
        top->next=NULL;
    }
    else
    {
        eleman->next=top;
        top=eleman;
    }
    
        
}

void pop(){

    if(top==NULL){
        cout<<"yiginda eleman yok"<<endl;
    }
    else{
        cout<<top->data<<"  eleman cikarildi"<<endl;
        temp=top->next;
        delete top;
        top=temp;
    }
}




int main(){
    int secim, sayi;

    while(1){
        cout<<("nSTACK (YIGIN)\n");
        cout<<("1-- Push islemi\n");
        cout<<("2-- Pop islemi\n");
        cout<<("3-- print islemi\n");
        cout<<("4-- Peek(en ust deger) islemi\n");
        cout<<("5-- Cikis islemi \n");
        cin>>secim;
    
    switch(secim){
        case 1: cout<<("Stack'e eklenecek sayi : "); 
        cin>>sayi;
        push(sayi);
        break;
        case 2:pop();break;
        case 3: //print(); break;
        case 4: //peek(); break;
        case 5: return 0;

    }
    }



    scanf(" ");
    return 0;
}