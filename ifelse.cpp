#include <iostream>
using namespace std;

int main(){

    string password = "Yazilimbilimi";

    string input;
    cout<<"parolayi giiriniz:";

    cin>>input;
    
    if(password == input){
        cout<<"parola dogru..";
    }
    else{
        cout<<"parola yanlis..";
    }

    scanf(" ");
    return 0;
}