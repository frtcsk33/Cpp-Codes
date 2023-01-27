#include <stdio.h>
#include <stdlib.h>

struct node{

    int data;
    struct node *next;

};

struct node * temp=NULL;
struct node * top=NULL;

void push(int veri) //eleman ekleme işlemi
{
    struct node * eleman=(struct node *)malloc(sizeof(struct node));
    
    eleman->data=veri; 


    if(top==NULL){
        top=eleman;
        top->next=NULL;
    }
    else{
        eleman->next=top;
        top=eleman;
    }
}

void pop(){ //eleman cikarildi
    if(top==NULL){
        printf("yigin bos, cikartilacak eleman yok\n");
        
    }
    else{
        printf("%d elemani stackten cikarildi\n", top->data);
        temp=top->next;
        free(top);
        top=temp;
    }

}

void print(){ //elemanlari yazdirma
    system("cls");
    if(top==NULL){
        printf("stack bos, eleman yok");
    }
    else{
        temp=top;
        while(temp->next!=NULL){
            printf("%d\n",temp->data);
            temp=temp->next;

        }
         printf("%d\n",temp->data);
    }
}

void peek(){
    if(top==NULL){
        printf("Eleman yok, NULL gosteriyor");
          }
    else{
  
        printf("Yigindaki en ust eleman : %d\n", top->data);
    }
}



int main(){


    int secim, sayi;

    while(1){
        printf("\nSTACK (YIGIN)\n");
        printf("1-- Push islemi\n");
        printf("2-- Pop islemi\n");
        printf("3-- print islemi\n");
        printf("4-- Peek(en ust deger) islemi\n");
        printf("5-- Cikis islemi \n");
        scanf("%d",&secim);
  
    switch(secim){
        case 1: printf("Stack'e eklenecek sayi : "); 
        scanf("%d",&sayi); 
        push(sayi);
        break;
        case 2:
        pop();
        break;
        case 3: print(); break;
        case 4: peek(); break;
        case 5: return 0;

    }
    }



    return 0;
    scanf(" ");
    
}