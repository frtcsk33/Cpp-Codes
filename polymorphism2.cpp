#include <iostream>

using namespace std;

void mesaj(char m[]){
    cout<<"mesaj: "<<m<<endl;
}

void mesaj(char m[]="gecici");

void mesaj(int a=0, float b=0.0, char kr='a'){
    cout<<" a="<<a<<" b= "<<b<<"kr= "<<kr<<endl;
}


int main(){

    mesaj("deneme");
    

    mesaj(5,5.1,'a');
    mesaj(5,1.5);
    mesaj(5);



    scanf(" ");
    return 0;
}

