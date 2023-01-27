#include <iostream>

using namespace std;

struct Calisan{
    int id;
    string name;
    string department;

};


void show(Calisan isci){

    isci.id=20;

    cout<<"id: "<<isci.id<<endl;
    cout<<"isim: "<<isci.name<<endl;
    cout<<"departman: "<<isci.department<<endl;

}  

void showEmp(Calisan* isci){
    isci->id=1;

    cout<<"id: "<<isci->id<<endl;
    cout<<"isim: "<<isci->name<<endl;
    cout<<"departman: "<<isci->department<<endl;

} 





int main(){

    Calisan isci1={14,"Firat Coskun","Bilisim"};

    cout<<"call by value"<<endl;
    show(isci1);

    cout<<endl<<endl;

    cout<<"call by reference"<<endl;
    showEmp(&isci1);
    
    cout<<endl;
    cout<<"gercek ";
    cout<<"id: "<<isci1.id<<endl; 

    scanf(" ");
    return 0;
}