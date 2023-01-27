#include <iostream>
using namespace std;

class Gamer {
public:
   static int sayac;
    Gamer(){
        sayac++;
        cout<<"yeni oyuncu olustruldu"<<endl;

    }

};
int Gamer::sayac = 0;
int main(){
    Gamer gamer1;
     Gamer gamer2;
    Gamer gamer3;
    Gamer gamer4;
    

    cout<<Gamer::sayac<<endl;

    
    scanf(" ");
    return 0;
}