#include <bits/stdc++.h>
//bagli liste ile Yigin olusturma
//push, pop, peek, top
using namespace std;

class Node{
    public:
        int veri;
        Node* sonraki;
};

Node* yeni_dugum(int veri){
    Node *yigin=new Node();
    yigin->veri=veri;
    yigin->sonraki=NULL;
    return yigin;   
}

void Ekle(Node** kok, int veri){
    Node* yigin=new yeni_dugum(veri);
    yigin->sonraki= *kok;
    *kok=yigin;
    cout<<veri<<"Veri yigina eklendi\n";

}

int Bosmu(Node* kok){
    return !kok;
}

int sil(Node** kok){
    if(Bosmu(*kok))
        return INT_MIN;
}
int gozat(Node *kok){
    if(Bosmu(kok)){
        return INT_MIN;
    }
    return kok->veri;
}


int main(){

    Node* kok=NULL;

    Ekle(&kok,10);
    Ekle(&kok,20);
    cout<<"En ustteki eleman:"<<gozat(kok)<<endl;
    Ekle(&kok,30);
    Ekle(&kok,40); 
    Ekle(&kok,50);
    cout<<"En ustteki eleman:"<<gozat(kok)<<endl;
    
    while(!Bosmu(kok)){
        cout<<gozat(kok)<<" "<<endl;
        sil(&kok);
    }


    scanf(" ");
    return 0;
}
