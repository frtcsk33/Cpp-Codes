#include <iostream>

using namespace std;


void selamla(){
    cout<<"Merhaba"<<endl;
}

void selamla(string name){
    cout<<"Merhaba " <<name<<endl;
}
void selamla(string name1, string name2){
    cout<<"merhaba  "<<name1<<","<<name2<<endl;
}
int main(){

    selamla();

    selamla("mustafa murat");
    
    selamla("mustafa murat","oguz");


    scanf(" ");
    return 0;
}