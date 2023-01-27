#include <iostream>
#include <bits/stdc++.h>
//LL yığın LIFO
using namespace std;

struct stack{

    int data;
    struct stack *next;
};

struct stack *top=NULL;

typedef struct stack Node;

void push(int data){
    Node *yeni=new Node();
    yeni->data=data;
    yeni->next=top;
    top=yeni;

    cout<<"yigina eleman eklendi\n"<<endl;


}

int pop(){
    if(top==NULL){
        cout<<"yiginda eleman yok"<<endl;
        return -1;
    }
    else
    {
        cout<<"cikarilan eleman: "<<top->data<<endl;
        top=top->next;
    }

}

void peek(){
   if(top==NULL){
        cout<<"yiginda eleman yok"<<endl;
        return ;
    }
    else{
        cout<<"top deger: "<<top->data<<endl;
    }
}
void display(){
    Node *temp;

    if(top==NULL){
        cout<<"yiginda eleman yok";
    }
    else{
        temp=top;
        cout<<"elemanlar: ";
        while(temp!=NULL){
            cout<<"  "<<temp->data;
            temp=temp->next;
        }
        cout<<endl;
    }
}


int main(){

    int secim, deger;

    cout<<"\tMENU\t"<<endl;
    cout<<"1--Push(Eleman ekleme)"<<endl;
    cout<<"2--Pop(Eleman silme)"<<endl;
    cout<<"3--Display(elemanlari goster)"<<endl;
    cout<<"4-- Top degeri"<<endl;
    cout<<"5--Cikis"<<endl;
    
    do{
        cout<<"bir secim giriniz: ";
        cin>>secim;
        switch(secim)
        {
        case 1: cout<<"sayi giriniz: "; cin>>deger; push(deger); break;

        case 2: pop(); break;

        case 3: display(); break;

        case 4: peek(); break;
        }
    }while(secim!=4);
        
    




    scanf(" ");
    return 0;
}