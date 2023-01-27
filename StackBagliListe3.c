#include <stdio.h>
#include <stdlib.h>

struct n{

    int data;
    struct n *next;

};

struct n *temp=NULL;
struct n *top=NULL;


void push(int veri){
    struct n *eleman=(struct n *)malloc(sizeof(struct n));
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

void pop(){
    if(top==NULL){
        printf("Yiginda Eleman yok\n");

    }
    else{
        printf("%d elemani stackten cikarildi:\n",top->data);
        temp=top->next;
        free(top);
        top=temp;
    }
}

void print(){
    system("cls");
    if(top==NULL){
        printf("Stackte eleman yok");
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
        printf("Ustte eleman yok");

    }
    else{
        printf("yigindaki en ust eleman: %d", top->data);
    }
}



int main(){

    int islem, sayi;

    while(1){
    printf("\nSTACK (YIGIN)\n");
    printf("1--Push islemi\n");
    printf("2--Pop islemi\n");
    printf("3--Yazdirma islemi\n");
    printf("4--Peek islemi\n");
    printf("5--Cikis\n");

    scanf("%d",&islem);
    switch(islem){
        case 1: printf("Stacke eklenilecek sayi: "); scanf("%d",&sayi); push(sayi); break;
        case 2: pop(); break;
        case 3: print(); break;
        case 4: peek(); break;
        case 5: exit(1); break;

    }
    }
    


    scanf(" ");
    return 0;
}