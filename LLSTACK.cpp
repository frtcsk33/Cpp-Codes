#include <bits/stdc++.h>
//LL Stack push pop peek LIFO
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
        cout<<"cikarilacak eleman yok"<<endl;
        return ;
    }
    else{
        cout<<"cikarilan eleman : "<<top->data<<endl;

        temp=top->next;
        delete top;
        top=temp;
    }
}

void print(){

   if(top==NULL){
    cout<<"gosterliecek eleman yok"<<endl;
   }
   else
   {
    temp=top;
    while(temp->next!=NULL){
        cout<<" \t"<<temp->data;
        temp=temp->next;
    }
    cout<<" \t "<<temp->data;
    }


}

void peek(){
    if(top==NULL){
        cout<<"eleman yok";
    }
    else{
        cout<<" en ust eleman: "<<top->data<<endl;
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
        case 3: print(); break;
        case 4: peek(); break;
        case 5: return 0;

    }
    }




    scanf(" ");
    return 0;
}