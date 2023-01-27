#include <stdio.h>
#include <stdlib.h>
#include "StackBagliListe.h"
void bastir(node * root){
    while(root!=NULL){
        printf("%d-->",root->data);
        root=root->next;
    }
}
int pop(node *root){
    if(root==NULL){
        printf("Stack bos");
        return -1;
    }
    node* iter=root;
    if(root->next == NULL){
        int rvalue=root->data;
        free(root);
        return rvalue;
    }
    while(iter->next->next!=NULL){
        iter=iter->next;
    }
   
    node* temp=iter->next;
    int rvalue=temp->data;
    iter->next=NULL;
    free(temp); 
    return rvalue;

}
node * push(node *root, int a){
    if(root==NULL){
        root=(node *)malloc(sizeof(node));
        root->data=a;
        root->next=NULL;
        return root;
    }
    node *iter=root;
    while(iter->next!=NULL){
        iter=iter->next;
    }
    node * temp = (node *)malloc(sizeof(node));
    temp->data=a;
    temp->next=NULL;
    iter->next=temp;
    return root;
}



int main(){

    node * s=NULL;
    s=push(s,10);
    s=push(s, 20);
    
    printf("%d --> ",pop(s));
    s=push(s,30);
    printf("%d --> ",pop(s));
    printf("%d --> ",pop(s));






    scanf(" ");
    return 0;
}