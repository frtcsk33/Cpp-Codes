#include <iostream>

using namespace std;

class Node{

    public: 

        int data;
        Node *next;
        Node *prev;

};
typedef Node n;


void push(n** head, int data){ //basa ekleme

    Node * yeni_dugum=new Node();
    
    yeni_dugum->data=data;
    yeni_dugum->prev=NULL;

    yeni_dugum->next=(*head);

    if(*head!=NULL){
        (*head)->prev=yeni_dugum;
    }
    (*head)=yeni_dugum;

}

void sona_ekleme(n** head, int data){
    
    Node* yeni_dugum=new Node();
    
    Node* Last=*head;
    
    yeni_dugum->data=data;

    yeni_dugum->next=NULL;

    if(*head==NULL){
        yeni_dugum->prev=NULL;
        *head=yeni_dugum;
        return;
    }
    while(Last->next!=NULL){
        Last=Last->next;

    }
    Last->next=yeni_dugum;

    yeni_dugum->prev=Last;
}


void araya_ekleme(n *prev_node, int data){
    if(prev_node==NULL){
        cout<<"verilen onceki dugum null olamaz"<<endl;
        return ;

    }

    Node* new_node=new Node();

    new_node->data=data;
    
    new_node->next=prev_node->next;

    prev_node->next=new_node;

    new_node->prev=prev_node;

    if(new_node->next!=NULL){
        new_node->next->prev=new_node;
    }

}

void deleteNode(n** head, n* del){
    if(*head==NULL || del==NULL){
        return ;
    }
    if(*head==del){
        *head=del->next;
    }
    if(del->next!=NULL){
        del->next->prev=del->prev;
    }
    if(del->prev!=NULL){
        del->prev->next=del->next;
    }
    free(del);
    return ;
}




void print(n* r){
    if(r==NULL){
        cout<<"listede eleman yok"<<endl;
    }
    while(r!=NULL){
            cout<<" \t"<<r->data;
            r=r->next;
    }

}





int main(){

    n* root=NULL;

    push(&root,10);
    push(&root,20);
    

    sona_ekleme(&root,30);
    sona_ekleme(&root,40);
    sona_ekleme(&root,50);
    
    araya_ekleme(root->next,8);
    

    print(root);

    cout<<endl<<"Silinen dugumler"<<endl;
    deleteNode(&root,root); //ilk dugumu siler
    deleteNode(&root,root->next);
    deleteNode(&root,root->next);

     print(root);


    scanf(" ");
    return 0;
}