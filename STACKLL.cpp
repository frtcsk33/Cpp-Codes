#include <iostream>
//LIFO push,pop,peek
using namespace std;

class Node{
    public: 
        int data;
        Node *sonraki;
};
Node *temp=NULL;
Node *top=NULL;

void push(int data){
    Node* eleman=new Node();
    eleman->data=data;

    if(top==NULL){
        top=eleman;
        top->sonraki=NULL;
    }
    else{
        eleman->sonraki=top;
        top=eleman;
    }
}

void pop(){
    if(top==NULL){
        cout<<"yiginda silinebilecek eleman yok";

    }
    else{
        cout<<top->data<<"  eleman cikarildi"<<endl;
        temp=top->sonraki;
        free(top);
        top=temp;
    }
}

void print(){
    system("cls");
    if(top==NULL){
        cout<<"gosterilecek eleman yok yiginda";

    }
    else{
        temp=top;
        while(temp->sonraki!=NULL){
            cout<<" \n"<<temp->data;
            temp=temp->sonraki;
        }
        cout<<" \n"<<temp->data;
    }
}


void peek(){
    if(top==NULL){
        cout<<"eleman yok";
    }
    else{
        cout<<"yiginin en ust elemanı:  "<<top->data<<endl;
    }
}

int main(){

    Node *kok=NULL;



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
        case 3: print(); break;
        case 4: peek(); break;
        case 5: return 0;

    }
    }



    scanf(" ");
    return 0;   
}