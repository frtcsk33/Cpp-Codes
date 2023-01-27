#include <stdio.h>

int f(int n){
    
    if(n>1)
        f(n-1);
    printf("%d\n",n);


}




int main(){

    f(3);




    scanf(" ");
    return 0;
}
