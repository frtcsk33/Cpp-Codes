#include <iostream>
#include <bits/stdc++.h>
//linked list ile yığın LIFO
using namespace std;

struct Stack{
    int data;
    struct Stack * next;
};

struct Stack *top=NULL;

typedef struct Stack Node;

void Push(int veri){
    Node *yeni=new Node();
    yeni->data=veri;
    yeni->next=top;
    top=yeni;

    cout<<"Yigina eleman eklendi.\n"<<endl;
}

int Pop(){  
    if(top==NULL){
        cout<<"Yiginda eleman yoktur"<<endl;
        return -1;
    }
    else
    {
        cout<<"Cikarilan eleman:  "<<top->data<<endl;
        top=top->next;
    }
}



void display(){
    Node *temp;
    if(top==NULL){
        cout<<"Yiginda gosterilecek eleman yok"<<endl;

    }
    else{
        temp=top;
        cout<<"Yigindaki elemanlar:  ";
        while(temp!=NULL){
            cout<<"  "<<temp->data;
            temp=temp->next;
            
        }
        cout<<endl;
    }
}

void peek(){
    if(top==NULL){
        cout<<"Yiginda eleman yoktur top degeri bos"<<endl;
    }
    else{
        cout<<"Top deger: "<<top->data<<endl;
    }

}


int main(){

    int secim, deger;

    cout<<"\tMENU\t"<<endl;
    cout<<"1--Push(Eleman ekleme)"<<endl;
    cout<<"2--Pop(Eleman silme)"<<endl;
    cout<<"3--Display(elemanlari goster)"<<endl;
    cout<<"4--Cikis"<<endl;
    cout<<"5-- Top degeri"<<endl;
    
    do
    {   cout<<"Bir secim giriniz: "<<endl;
        cin>>secim;
        switch(secim){
            
            case 1:  cout<<"Yigina bir eleman giriniz: "; cin>>deger;
            Push(deger); break;
           

            case 2:Pop(); break;

            case 3: display(); break;
            
            case 5: peek(); break;
        }
        
    } while (secim!=4);
    

    




    scanf(" ");
    return 0;

}