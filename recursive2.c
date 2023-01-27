#include <stdio.h>

int faktoriyel(int sayi){
    if(sayi==0 || sayi==1){
        return 1;
    }
    else{
        return sayi * faktoriyel(sayi-1);
        //6*5*4*3*2*1
    }
}



int main(){

    printf("Sonuc: %d",faktoriyel(6));



    scanf(" ");
    return 0;
}
