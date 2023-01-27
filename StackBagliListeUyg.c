#include <stdio.h>
#include <stdlib.h>

struct n{
    int data;
    struct n *next;

};

typedef struct n node;

int pop(node* r){
    if(r==NULL){
        printf("Stack bos");
        return -1;
    }
    if(r->next==NULL){
        int rvalue=r->data;
        free(r);
        return rvalue;
    }
    node *iter=r;
    while(iter->next->next!=NULL){
        iter=iter->next;
    }
    node * temp=iter->next;
    int rvalue=temp->data;
    iter->next=NULL;
    free(temp);
    
   
    return rvalue;
}

node* push(node* r, int a){
    if(r==NULL){
        r=(node *)malloc(sizeof(node));
        r->data=a;
        r->next=NULL;
        return r;
    }
    node *iter=r;
    while(iter->next!=NULL){
        iter=iter->next;
    }
    node *temp=(node *)malloc(sizeof(node));
    temp->data=a;
    temp->next=NULL;
    iter->next=temp;
    return r;

}

void bastir(node *r){
    while(r!=NULL){
        printf("%d  ", r->data);
        r=r->next;
    }
}

int main(){


    node *s1=NULL;

    s1=push(s1,10);
    s1=push(s1,20);
    

    // bastir(s1);
    printf("\n");

    printf("%d-->  ",pop(s1));
    s1=push(s1,30);
    printf("%d-->  ",pop(s1));
    printf("%d  ",pop(s1));







    scanf(" ");
    return 0;
}