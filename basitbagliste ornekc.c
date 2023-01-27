#include <stdio.h>
#include <stdlib.h>
struct n{
    int veri;
    struct n *next;

};

typedef struct n dugum;

void Ekle(dugum *r, int x){
    while(r->next!=NULL){
        r=r->next;
    }
    r->next=(dugum *)malloc(sizeof(dugum));
    r->next->veri=x;
    r->next->next=NULL;

}

void bastir(dugum *r){
    while(r!=NULL){
        printf("%d\n",r->veri);
        r=r->next;
        

    }
}


int main(){

    int i;
    dugum *root;

    root=(dugum *)malloc(sizeof(dugum));
    root->veri=5;
    root->next=NULL;

    for(i=0;i<5;i++){
        Ekle(root,i*5);
    }
    bastir(root);




    scanf(" ");
    return 0;
}