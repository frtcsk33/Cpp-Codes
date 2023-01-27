#include <stdio.h>
#include <stdlib.h>

struct s{
    int boyut;
    int tepe;
    int *dizi;

};

typedef struct *s;

int pop(struct *s){ //sondaki elemanı siler LIFO
    if(s->dizi==NULL){
        printf("dizi bos");
        return -1;
    }
    if(s->tepe<=s->boyut/4){
        int *dizi2=(int*)malloc(sizeof(int)*boyut/2);
        for(int i=0; i<s->tepe; i++)
            dizi2[i]=dizi[i];
        
        free(dizi);
        dizi=dizi2;
        boyut /= 2;
    }
    return dizi[--s->tepe];

}

void push(int a, void *dizi){
    if(dizi==NULL){
        dizi=(int *)malloc(sizeof(int)*2);
    }
    if(s->tepe>=boyut){
        int *dizi2=(int*)malloc(sizeof(int)*boyut*2);
        for(int i=0;i<boyut;i++)
            dizi2[i]=dizi[i];
        
        free(dizi);
        dizi=dizi2;
        boyut *= 2;


    }
  
    dizi[s->tepe++]=a;
}

void bastir(){
    printf("boyut: %d ",boyut);
    for(int i=0; i<s->tepe; i++){
        printf("%d ", dizi[i]);
    }
}