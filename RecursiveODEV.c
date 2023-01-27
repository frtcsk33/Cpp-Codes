#include <stdio.h>
#include <stdlib.h>

struct n{
    int x;
    struct n *sonraki;

};

typedef struct n node;



void basaEkleme(node** head, int x){

    node* new_node;
   

    new_node=(node *)malloc(sizeof(node));
    new_node->x=x;
    new_node->sonraki=*head;
    *head=new_node;

}


void bastir(node* r){
    while(r!=NULL){
        printf("%d",r->x);
        r=r->sonraki;
    }
}

void karekok(float x){
    float i;
    for(i=1;i<=x/2;i++){
        if((i*i)==x){
            printf("%f",i);
        }
    }

}

int main(){

    node *root=NULL;
    int n, i;
    float sayi;
    // printf("kac tane sayinin karekokunu almak istiyorsunuz? ");
    // scanf("%d",&n);
    // for(i=0;i<n;i++){
    // printf("karekokunu almak istediginiz sayiyi giriniz: ");
    // scanf("%d",&sayi);
    // Ekleme(root, sayi);
    // }


   // scanf("%d",&sayi);
    // basaEkleme(&root, sayi);
    
    printf("sayi giriniz: ");
    scanf("%f",&sayi);
    karekok(sayi);

    //bastir(root);    




    





    scanf(" ");
    return 0;
}