#include <stdio.h>
#include <stdlib.h>


struct n{
  float x;
  struct n* sonraki;
};

typedef struct n dugum;


void basaEkleme(dugum** head, float x){
    dugum* new_node;
    new_node=(dugum *)malloc(sizeof(dugum));
    new_node->x=x;
    new_node->sonraki=*head;
    *head=new_node;
 }

void bastir(dugum* root ){
    while(root!=NULL){
        printf("%.4f" ,root->x);
        root=root->sonraki;
     }
 }


float karekok(int n){
  
    float x;
    int i;
    x=n;
    for(i=0; i<10; i++)
    {
      x = (x+n/x)/2;
    }
    return x;
}




int main(){

   dugum* root=NULL;
   float result;
   int sayi;
    
   printf("karekokunu almak istediginiz bir sayiyi giriniz: ");
   scanf("%d",&sayi);

   result=karekok(sayi);
   basaEkleme(&root, result);
   bastir(root);


    scanf(" ");
    return 0;
}