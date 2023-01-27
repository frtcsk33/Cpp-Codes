#include<stdio.h>

int factorial(int n){

if (n==0||n==1)
return 1;


else{
    n*factorial(n-1);
}

return 0;
}

int main(){
    int i,n;

printf("enter the number");

scanf("%d",&n);

printf("%d", factorial (n));

scanf(" ");
return 0;

}



