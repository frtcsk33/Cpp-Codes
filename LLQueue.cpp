#include <iostream>
//FIFO
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        void enque(int);
        int deque();
};

Node *root=NULL;
Node *son=NULL;

void Node::enque(int data){
    if(root==NULL){
        root=new Node();
        root->data=data;
        root->next=NULL;
        son=root;
    }
    else
    {
        son->next=new Node();
        son->next->data=data;
        son=son->next;
        son->next=NULL;
    }
}

int Node::deque(){
    if(root==NULL){
        cout<<"sirada eleman yok"<<endl;
        return -1;
    }
        int value=root->data;
        Node *temp=root;
        root=root->next;
        delete temp;
        return value;

    
}


int main(){

    int sayi, secim;
    Node s;
    while(1){
        cout<<"\tMENU"<<endl;
        cout<<"1--Ekle"<<endl;
        cout<<"2--Cikar"<<endl;
        cout<<"Seciminiz: "<<endl;
        cin>>secim;
        switch(secim){
            case 1: cout<<"Siraya eklemek istediginiz sayi: "<<endl; cin>>sayi; s.enque(sayi); break;
            case 2: cout<<" "<<s.deque(); break;

        }
        
    }






    scanf(" ");
    return 0;
}