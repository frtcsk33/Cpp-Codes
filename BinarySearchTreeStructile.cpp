#include <iostream>
using namespace std;

//binary search tree

struct dugum{
    int veri;
    struct dugum *sola, *saga;

};

dugum * yeni_dugum(int veri){
    dugum * gecici = new dugum;
    gecici->veri = veri;
    gecici->sola = gecici->saga = NULL;
    return gecici;
}
 
void preOrder(struct dugum *root){ 

//once kok sonra sol alt cocuklar(alt agac) ve en sonunda da sag alt agacları geziyor

    
    if(root == NULL){
        return ;
    }

    cout<<root->veri<<" ";
    preOrder(root->sola);
    preOrder(root->saga);
}

void inOrder(struct dugum *root){

    //once sol çocuklar sonra kök sonra sağ çocuklar
    if(root == NULL){
        return ;
    }

    inOrder(root->sola);
    cout<<root->veri<<" ";
    inOrder(root->saga);    
}

void postOrder(struct dugum* root ){
    //once sol sonra sag cocuk en son kök gezilir

    if(root == NULL){
        return ;

    }
    
    postOrder(root->sola);
    postOrder(root->saga);
    cout<<root->veri<<" ";
    

}
    

int main(){



    struct dugum *kok = yeni_dugum(10);
    kok->sola = yeni_dugum(27);
    kok->saga =yeni_dugum(6);
    kok->saga->sola = yeni_dugum(34);
    kok->saga->saga = yeni_dugum(7);
    kok->sola->sola =yeni_dugum(35);
    kok->sola->saga = yeni_dugum(48);

    cout<<"\nagaci preorder gez\n";

    preOrder(kok);

       cout<<"\nagaci inorder gez\n";

    inOrder(kok);

       cout<<"\nagaci postorder gez\n";

    postOrder(kok);








    scanf(" ");
    return 0;
}