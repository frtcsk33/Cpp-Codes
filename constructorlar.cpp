#include <iostream>

using namespace std;


class Employee{
private:
    string name;
    int salary;
    int id;

public:

    Employee(string isim, int maas, int kimlik){ //constructor
        name = isim;
        salary = maas;
        id=kimlik;
    }
    void showInfos(){
        cout<<"isim: "<<name<<endl;
        cout<<"maas: "<<salary<<endl;
        cout<<"id: "<<id<<endl;
    }
};


int main(){

    Employee employee("Mustafa murat",3000,12); //constructor'a erişme
    

    employee.showInfos();
    
    scanf(" ");
    return 0;
}