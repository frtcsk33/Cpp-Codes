#include <stdio.h>
#include <stdlib.h>
//linked list ile queue (FIFO)

struct n{

    int data;
    struct n *next;
};
typedef struct n node;
node* root=NULL;
node* son=NULL;
void enqueue(int x)
{
    if(root==NULL){
        root=(node *)malloc(sizeof(node));
        root->data = x;
        root->next = NULL;
        son=root;
    }

    else{
        son->next=(node*)malloc(sizeof(node));
        son->next->data = x;
        son=son->next;
        son->next=NULL;
    }
    

}
int dequeue(){
    if(root==NULL){
        printf("Link list bos");
        return -1;
    }
    int rvalue=root->data;
    node *temp=root;
    root=root->next;
    free(temp);
    return rvalue;

}

int main(){


    for(int i=0; i<10; i++){
        enqueue(i*10);
    }
    for(int i=0; i<7;i++){
        printf("%d  ",dequeue());
    }
    for(int i=0; i<10; i++){
        enqueue(i*10);
    }
     
    for(int i=0; i<15;i++){
        printf("%d  ",dequeue());
    }  
      








    scanf(" ");
    return 0;
}