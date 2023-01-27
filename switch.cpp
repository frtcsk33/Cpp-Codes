#include <iostream>
using namespace std;

int main(){
    
    int islem;
    cout<<"islemi giriniz: ";

    cin>>islem;
    
   switch(islem){
    case 1: cout<<"1.islemi sectiniz.. "<<endl;
      
    case 2: cout<<"2.islemi sectiniz.. "<<endl;
        break;

    case 3:
        cout<<"3.islemi sectiniz.. "<<endl;
       break;
    default:
        cout<<"islem secmedniz.. "<<endl;
        break;
   }    
    scanf(" ");
    return 0;
}