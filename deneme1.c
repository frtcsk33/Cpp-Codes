#include <stdlib.h>
#include <stdio.h>

struct n{
    float x;
    struct n *sonraki;
};

typedef struct n node;

void basaEkleme(node** head, float x){
    node* new_node;
    new_node=(node *)malloc(sizeof(node));
    new_node->x=x;
    new_node->sonraki=*head;
    *head=new_node;
}

void bastir(node* r ){
    while(r!=NULL){
        printf("%.4f" ,r->x);
        r=r->sonraki;
    }
}

float findSQRT(int number)
{
    int start = 0, end = number;
    int mid;
    float ans;
    while (start <= end) {
        mid = (start + end) / 2;
        if (mid * mid == number) {
            ans = mid;
            break;
        }
        if (mid * mid < number) {
            ans=start;
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    float increment = 0.1;
    for (int i = 0; i < 5; i++) {
        while (ans * ans <= number) {
            ans += increment;
        }
        ans = ans - increment;
        increment = increment / 10;
    }
    return ans;
}
int main()
{
    node *root=NULL;
    int N ;
    float sonuc;
    printf("Sayiyi giriniz : ");
    scanf("%d",&N);

    sonuc=findSQRT(N);
    basaEkleme(&root,sonuc);
    bastir(root);

    scanf(" ");
    return 0;
}