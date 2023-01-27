#include <stdio.h>

int fibonacci(int sayi)
{   
    if(sayi==0)
        return 0;

    else if(sayi==1 || sayi==2)
        return 1;    
    
    return fibonacci(sayi-1)+fibonacci(sayi-2);

}


int main(){
    int n;
    printf("deger giriniz:" );
    scanf("%d",&n);
    printf("terimler: %d", fibonacci(n));
    


    scanf(" ");
    return 0;
}
