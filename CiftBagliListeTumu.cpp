#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node{

public:
    int data;   //verimiz

    Node* prev; //oncekini gösteren pointer

    Node* next; //sonrakini gösteren pointer

};

void push(Node** head_ref, int new_data){
    Node* new_node= new Node(); //yer tahsis etmek

    new_node->data=new_data;  //ilk değeri koymak

    new_node->prev=NULL; 
    new_node->next=(*head_ref);

    if((*head_ref)!=NULL){ 
        (*head_ref)->prev=new_node;
    }
    (*head_ref)=new_node; 
      
}

void instertAfter(Node *prev_node, int new_data){

    if(prev_node==NULL){
        cout<<"the given prev_node cannot be Null"<<endl;
        return; 
    }

    Node* new_node=new Node();

    new_node->data=new_data;

    new_node->next=prev_node->next; //8->6

    prev_node->next=new_node;  //8 new node


    prev_node->prev=prev_node;  //new_node dene sol kısımda
    
    if(new_node!=NULL)
    new_node->next->prev=new_node;

}

void append(Node** head_ref, int new_data){

    Node* new_node=new Node();

    Node* Last=*head_ref;

    new_node->data=new_data;

    new_node->next=NULL;

    if(*head_ref==NULL){
        new_node->prev=NULL;
        *head_ref=new_node;
        return;

    }
    while(Last->next!=NULL){
        Last=Last->next;
    }
    Last->next=new_node;

    new_node->prev=Last;

    return;
}

void printList(Node* node){

    Node *Last;
    cout<<"\n traversal in forward direction \n";
    while(node!=NULL){
        cout<<" "<<node->data<<" ";
        Last=node;
        node=node->next;
    }

    cout<<"\nTraversal in reverse direction\n";
    while(Last!=NULL){
        cout<<" "<<Last->data<<" ";
         Last=Last->prev;

    }


}



int main(){


    Node *head =NULL;
    
    append(&head,6); //6->NULL
    

    push(&head, 7); //7->6->NULL
    instertAfter(head,8);
    push(&head, 1);//1->7->6->NULL

    append(&head, 4);//1->7->6->4->NULL
   
    cout<<"\n\nCreated DLL is: ";
    printList(head);

    scanf(" ");
    return 0;
}