#include <iostream>
#include <bits/stdc++.h>

using namespace std;
//bağlı liste ile yığın oluşturma
class Node{
    public:
        int veri;
        Node* sonraki;

};
Node* yeni_dugum(int veri){
    Node* yigin=new Node();
    yigin->veri=veri;
    yigin->sonraki=NULL;
    return  yigin;
}
int Bosmu(Node* kok){
    return !kok;
}
int sil(Node** kok){
    if(Bosmu(*kok))
    return INT_MIN;
    Node* gecici_degisken=*kok;
    *kok=(*kok)->sonraki;
    int silindi=gecici_degisken->veri;
    return silindi;
}
void ekle(Node** kok, int veri){
    Node* yigin=yeni_dugum(veri);
    yigin->sonraki=*kok;
    *kok=yigin;
    cout<<veri<<"verisi yigina eklendi.\n";


}

int gozat(Node* kok){
     if(Bosmu(kok)){
        return INT_MIN;
        
     }
    return kok->veri;
}

int main(){
    Node *kok=NULL;
    ekle(&kok,7);
    ekle(&kok,32);
    cout<<"en ustteki eleman: "<<gozat(kok)<<endl;
    ekle(&kok,34);
    ekle(&kok,48);
    cout<<"en ustteki eleman: "<<gozat(kok)<<endl;

    while(!Bosmu(kok)){
        cout<<gozat(kok)<<" "<<endl; 
        sil(&kok);
    }
    scanf(" ");
    return 0;







    return 0;
}