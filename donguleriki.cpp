#include <iostream>
using namespace std;

int main(){
   
    string parola = "123456";

    string input;

    do{
        cout << "parolanizi giriniz: ";
        cin >> input;
    
        if(input!= parola){
            cout<<"parolayi yanlis girdiniz. "<<endl;
        }

    }while(input!=parola);
    
    cout<<"parolaniz dogru, hosgeldiniz. ";



    scanf(" ");
    return 0;
}