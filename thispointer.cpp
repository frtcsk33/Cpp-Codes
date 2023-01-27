#include <iostream>

using namespace std;


class Employee{
private:
    string name;
    int salary;
    int id;

public:
    Employee(){
        this->name = "Bilgi yok";
        this->salary=0;
        this->id=0;
    }
    /*Employee(string name, int salary){
        this->name = name;
        this->salary=salary;
        this->id=0;
     }

    Employee(string name, int salary, int id){ //constructor
        this->name = name;
        this->salary = salary;
        this->id=id;
    
    }*/
    void setSalary(int salary){
        this->salary=salary;
    }
    void setName(string name){
        this->name=name;
    }
    string getName(){
        return name;
    }

    void showInfos(){
        cout<<"isim: "<<this->name<<endl;
        cout<<"maas: "<<this->salary<<endl;
        cout<<"id: "<<this->id<<endl;
    }
};


int main(){

    //Employee employee1("Mustafa murat",3000,12); //constructor'a erişme
    //Employee employee2("Firat Coskun",4000);
    Employee employee3;

    //employee1.showInfos();
    //employee2.showInfos();
    employee3.showInfos();
    scanf(" ");
    return 0;
}