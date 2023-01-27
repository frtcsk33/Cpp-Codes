#include <iostream>

using namespace std;

class Node{

    public: 
        int data;

        Node *next;
        Node *prev;
        
};

void push(Node **head_ref, int data){ //basa ekleme
    Node* yeni_dugum=new Node();

    yeni_dugum->data=data;
    yeni_dugum->prev=NULL;

    yeni_dugum->next=*head_ref;

    if(*head_ref!=NULL){
        (*head_ref)->prev=yeni_dugum;
    }
    (*head_ref)=yeni_dugum;

}

void sona_ekleme(Node **head_ref, int data){
    
    Node *yeni_dugum=new Node();

    Node *Last=*head_ref;

    yeni_dugum->data=data;
    yeni_dugum->next=NULL;

    if(*head_ref==NULL){
        yeni_dugum->prev=NULL;
        *head_ref=yeni_dugum;
        return;
    }
    while(Last->next!=NULL){
        Last=Last->next;
    }
    Last->next=yeni_dugum;
    yeni_dugum->prev=Last;
}


void araya_ekleme(Node *prev_node, int data){
    if(prev_node==NULL){
        cout<<"verilen onceki dugum null olamaz";
        return;
    }
    Node *new_node=new Node();
    
    new_node->data=data;
    new_node->next=prev_node->next;

    prev_node->next=new_node;

    new_node->prev=prev_node;

    if(new_node->next!=NULL){
        new_node->next->prev=new_node;
    }

}

void print(Node *r){

    if(r==NULL){
        cout<<"listede eleman yok";

    }
    while(r!=NULL){
        cout<<" \t"<<r->data;
        r=r->next;

    }
}

void deleteNode(Node **head_ref, Node *sil){
    if(*head_ref==NULL || sil==NULL){
        return ;

    }
    if(*head_ref==sil){
        *head_ref=sil->next;
    }
    if(sil->next!=NULL){
        sil->next->prev=sil->prev;
    }
    if(sil->prev!=NULL){
        sil->prev->next=sil->next;
    }
    delete sil;
}


int main(){

    Node *head=NULL;
    

    push(&head,10);
    push(&head,20);
    push(&head,30);
    

    sona_ekleme(&head,40);
    sona_ekleme(&head,50);

    araya_ekleme(head->next,8);
    print(head);

    deleteNode(&head,head);
    deleteNode(&head,head->next);




    scanf(" ");
    return 0;
}