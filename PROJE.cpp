#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

class Dugum{
    public:
        string Aylar;
        Dugum *sonraki;
        int veri;
        int sira;
};

void ekle2(Dugum** kok, string &ay, int veri, int sira){   
    Dugum* new_node=new Dugum(); // 1 kere çalışır 
    new_node->veri=veri; // 1 kere çalışır 
    new_node->Aylar=ay; // 1 kere çalışır 
    new_node->sonraki=*kok; // 1 kere çalışır 
    *kok=new_node; // 1 kere çalışır 

    new_node->sira=sira; // 1 kere çalışır 
    new_node->sira++; // 1 kere çalışır 
    new_node->sonraki; // 1 kere çalışır 

}//Running time T(n) => O(1)

void ekle(Dugum** kok, string &ay, int veri,int sira){
    Dugum* new_node2=new Dugum(); //1 kere çalışır
    new_node2->veri=veri; // 1 kere çalışır 
    new_node2->Aylar=ay;    // 1 kere çalışır 
    new_node2->sonraki=*kok; // 1 kere çalışır 
    *kok=new_node2;  //1 kere çalışır 
    
    new_node2->sira=sira;//1 kere çalışır
    new_node2->sira++; //1 kere çalışır
    new_node2->sonraki; //1 kere çalışır
    
}//Running time T(n) => O(1)



void karsilastir(Dugum* r3, int sayi, int a){ //running time hesaplama
    int tut=1285; //1 kere çalışır
        for(int i=0;i<8;i++){//i=0 ->1 kez , i<n --> n+1 kez çalışır , k++ --> n kere çalışır 

        if(sayi+1==r3->sira){ // n-1 kere çalışır. 

            if(r3->veri > tut){ //n-2 kere çalışır 
                cout<<sayi<<". aydaki etherium fiyati Ekim ayindaki Etherium fiyatindan fazladir.";
            }

            else if(r3->veri ==tut){//n-3 kere çalışır 
                cout<<sayi<<". aydaki etherium fiyati Ekim ayindaki Etherium fiyatina esittir.";
            }

            else{ //n-4 kere çalışır.
                cout<<sayi<<". aydaki etherium fiyati Ekim ayindaki Etherium fiyatindan azdir.";
            }
        }
    r3=r3->sonraki; //n-1 kere çalışır

    } //toplam Running time T(N)=1+(2n+2)+n-1+n-2+n-3+n-4+1+n-1
    if(sayi>8 || sayi<1){ //1 kere çalışır. 
        cout<<"Gecerli bir ay sayisi giriniz. "<<endl;
        }
}                //Running time T(n)=7n-7 => O(n)

void karsilastir2(Dugum* r3, int sayi, int a){ //run time hesaplama
    int tut=19206; //1 kere çalışır 
        for(int i=0;i<8;i++){ //1+(2n+2) kere çalışır
        if(sayi+1==r3->sira){//n-1 kere çalışır 
            if(r3->veri > tut){//n-2 kere çalışır 
                cout<<sayi<<". aydaki Bitcoin fiyati Ekim ayindaki Bitcoin fiyatindan fazladir.";
            }
            else if(r3->veri ==tut){//n-3 kere çalışır 
                cout<<sayi<<". aydaki Bitcoin fiyatı Ekim ayindaki Bitcoin fiyatina esittir.";
            }
            else{//n-4 kere çalışır 
                cout<<sayi<<". aydaki Bitcoin fiyati Ekim ayindaki Bitcoin fiyatindan azdir.";
            }
        }
        

    r3=r3->sonraki;//n-1 kere çalışır 

    } 
    if(sayi>8 || sayi<1)//1 kere çalışır 
    {
        cout<<"Gecerli bir ay sayisi giriniz. "<<endl;
    }
}               //Running time T(n)=7n-7 => O(n)

int main(){

    int sayi, i=1, a=0;
    Dugum* root=NULL; 
    Dugum* root2=NULL; 
    string Dizi[20];

    string Ekim="Ekim       1285";
    string Eylul="Eylul     1554";
    string Agustos="Agustos 1879";
    string Temmuz="Temmuz   1725";
    string Haziran="Haziran 1237";
    string Mayis="Mayis     1950";
    string Nisan="Nisan     3041";
    string Mart="Mart       2976";

    cout<<"        Etherium   Bitcoin"<<endl;
    Dizi[0]="1- Ekim       1285    19206";
    Dizi[1]="2- Eylul      1554    20177";
    Dizi[2]="3- Agustos    1879    24320";
    Dizi[3]="4- Temmuz     1725    20323";
    Dizi[4]="5- Haziran    1237    22097";
    Dizi[5]="6- Mayis      1950    30033";
    Dizi[6]="7- Nisan      3041    41147";
    Dizi[7]="8- Mart       2976    38729";
    
    for(int i=0; i<8; i++){ 
                   cout<<Dizi[i]<<endl;
    } 
    while (1)
    {
    cout<<"Etherium karsilastirmak icin 1'i Bitcoini karsilastirmak icin 2'e basiniz: ";
    cin>>a; 
    
    if(a==1 || a==2 ){
        break;
        }
    else
    {
        cout<<"Lutfen gecerli bir sayi giriniz "<<endl;
    }
    }
    while (1)
    {
    cout<<"kacinci ayi Ekim ayi ile karsilastirmak istersiniz: ";
    cin>>sayi;
    if(sayi<=0 || sayi>8){
        cout<<"Lutfen gecerli bir sayi giriniz: "<<endl;
        }
     else{
        break;
     }
    }

     ekle(&root,Ekim,1285,1);
     ekle(&root,Eylul,1554,2);
     ekle(&root,Agustos,1879,3);
     ekle(&root,Temmuz,1725,4);
     ekle(&root,Haziran,1237,5);
     ekle(&root,Mayis,1950,6);
     ekle(&root,Nisan,3041,7);
     ekle(&root,Mart,2976,8);
    
    


     ekle2(&root2,Ekim,19206,1);
     ekle2(&root2,Eylul,20177,2);
     ekle2(&root2,Agustos,24320,3);
     ekle2(&root2,Temmuz,20323,4);
     ekle2(&root2,Haziran,22097,5);
     ekle2(&root2,Mayis,30033,6);
     ekle2(&root2,Nisan,41147,7);
     ekle2(&root2,Mart,38729,8);

    if(a==1){
        karsilastir(root,sayi,a);
    }
    else if(a==2){
        karsilastir2(root2,sayi,a);
    }

    scanf(" ");
    return 0;
}