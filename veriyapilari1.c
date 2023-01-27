#include <stdio.h>
#include <stdlib.h>
//çift bağlı liste
struct dugum
{
    int eleman;
    struct dugum* onceki;
    struct dugum* sonraki;

};

void Ekle(struct dugum** bas_referansi, int yeni_eleman)
{
    struct dugum* yeni_dugum=(struct dugum*)malloc(sizeof(struct dugum));
    yeni_dugum->eleman=yeni_eleman;
    yeni_dugum->onceki=NULL;
    yeni_dugum->sonraki=(*bas_referansi);
    
    if((*bas_referansi)!=NULL)
        (*bas_referansi)->onceki=yeni_dugum;
    
    (*bas_referansi)=yeni_dugum;
    

}

void dugum_sil(struct dugum** bas_referansi, struct dugum* silinecek)
{
    if(*bas_referansi==NULL || silinecek==NULL){
        return;
    }
    if(*bas_referansi==silinecek){
        *bas_referansi=silinecek->sonraki;
    }
    if(silinecek->sonraki!=NULL){
        silinecek->sonraki->onceki=silinecek->onceki;

    }
    if(silinecek->onceki!=NULL){
        silinecek->onceki->sonraki=silinecek->sonraki;
    }
    free(silinecek);
    return;
}




void Listeyi_yazdir(struct dugum* dugum)
{
    while(dugum!=NULL){
        printf("%d  ",dugum->eleman);
        dugum=dugum->sonraki;
    }
}


int main(){

    struct dugum* bas=NULL;

    Ekle(&bas,10);
    Ekle(&bas,19);
    Ekle(&bas,12);
    Ekle(&bas,72);
    Ekle(&bas,22);
    Listeyi_yazdir(bas);
    printf("\n\n");
    dugum_sil(&bas, bas);
    Listeyi_yazdir(bas);
    printf("\n\n");
    dugum_sil(&bas, bas);
    Listeyi_yazdir(bas);
    printf("\n\n");
    dugum_sil(&bas, bas->sonraki);
    Listeyi_yazdir(bas);
    printf("\n\n");
    dugum_sil(&bas, bas->sonraki);
    Listeyi_yazdir(bas);

    scanf(" ");
    return 0;
}