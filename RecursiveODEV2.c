#include <stdio.h>

void karekok(float x){
    float i;
    for(i=0.01; i*i<x; i=i+0.01);
         printf("\n%2.f",i);
       // if((i*i)==x){}
    
}


int main(){
     
    int sayi;

    printf("sayi giriniz: ");
    scanf("%f",&sayi);
    karekok(sayi);

    scanf(" ");
    return 0;
}