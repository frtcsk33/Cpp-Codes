#include <iostream>
using namespace std;

int main(){
    
    string sys_username= "mustafa_murat";
    string sys_password= "123456";


    string username;
    string password;
    
    cout<<"kullanici adiniz: ";

    cin>>username;

    cout<<"parola: ";

    cin>>password;


    if (sys_username == username && sys_password == password){
        cout<<"Hosgeldiniz"<<endl;

    }
    else if(sys_username!=username && sys_password == password){
        cout<<"kullanici adi hatali" << endl;
    }
    else if(sys_username==username && sys_password != password){
        cout<<"parola hatali" << endl;
    }
    else{
        cout<<"kullanici adi ve parola hatali";
    }


    scanf(" ");
    return 0;
}