#include <iostream>
using namespace std;

int main(){
   
    int a, b;
    string islem;

    cout<<"Hesap makinesi programina hosgeldiniz"<<endl;

    cout<< "1. islem: Toplama islemi"<<endl;    
    cout<< "2. islem: Cikarma islemi"<<endl; 
    cout<< "3. islem: Carpmaa islemi"<<endl;
    cout<< "4. islem: Bolme islemi"<<endl;

    cout<<"islemi giriniz: ";

    cin>> islem;

    if(islem =="1"){
        cout << "a: ";

        cin >> a;

        cout<< "b:";
         
        cin >> b;

        cout<<"toplamlari :"<< a + b<<endl;
    }
    else if(islem == "2")
    {
        cout << "a: ";

        cin >> a;

        cout<< "b:";
         
        cin >> b;

        cout<<"Farklari :"<< a - b<<endl;
    } 
    else if(islem == "3"){
        cout << "a: ";

        cin >> a;

        cout<< "b:";
         
        cin >> b;

        cout<<"Carpimlari :"<< a*b<<endl;

    }
    else if(islem == "4"){
        cout << "a: ";

        cin >> a;

        cout<< "b:";
         
        cin >> b;

        cout<<"bolumleri :"<< a/b<<endl;
    }
    else{
        cout<<"gecersiz islem";
    }




    scanf(" ");
    return 0;
}