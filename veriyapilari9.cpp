#include <iostream>
using namespace std;

struct dugum{
    int veri;
    struct dugum *sola, *saga;

};

dugum* yeni_dugum(int veri){
    dugum* gecici = new dugum;
    gecici->veri = veri;
    gecici->sola = gecici->saga = NULL;
    return gecici;

}
void postorder_gez(struct dugum* dugum){
    if(dugum==NULL)
        return ;
    
    
    postorder_gez(dugum->sola);
    postorder_gez(dugum->saga);
    cout<<dugum->veri<<" ";


}


void inorder_gez(struct dugum* dugum){
    if(dugum==NULL)
        return ;
    
    inorder_gez(dugum->sola);
    cout<<dugum->veri<<" ";
    inorder_gez(dugum->saga);



}

void preorder_gez(struct dugum* dugum){
    if(dugum==NULL)
        return ;
    
   
    cout<<dugum->veri<<" ";
    preorder_gez(dugum->sola);
    preorder_gez(dugum->saga);



}


int main(){

    
    struct dugum *agac_koku=yeni_dugum(10);
    agac_koku->sola=yeni_dugum(37);
    agac_koku->saga=yeni_dugum(6);
    agac_koku->saga->sola=yeni_dugum(34);
    agac_koku->saga->saga=yeni_dugum(7);
    agac_koku->sola->sola=yeni_dugum(35);
    agac_koku->sola->saga=yeni_dugum(48);


    cout<<"\n ikili agaci inorder gez\n";

    inorder_gez(agac_koku);

     cout<<"\n ikili agaci preorder gez\n";

    preorder_gez(agac_koku);

      cout<<"\n ikili agaci postorder gez\n";

    postorder_gez(agac_koku);


    scanf(" ");
    return 0;
}