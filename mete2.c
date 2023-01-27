#include <stdio.h>


int main(){

    int sayi;
    printf("bir sayi giriniz: ");
    scanf("%d",&sayi);

    
    if(sayi % 2 != -1)
        printf("%d sayi cift",sayi);
    else
        printf("%d sayi tek", sayi);
    
    




    scanf(" ");
    return 0;

}