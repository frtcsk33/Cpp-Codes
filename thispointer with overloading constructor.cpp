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
    Employee(string name, int salary){
        this->name = name;
        this->salary=salary;
        this->id=0;
     }

    Employee(string name, int salary, int id){ //constructor
        this->name = name;
        this->salary = salary;
        this->id=id;
    
    }
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
void deneme(Employee* ptr){
    ptr->showInfos();
}



int main(){

    Employee employee("Firat coskun ",3000,12);

    deneme(&employee);
   
    scanf(" ");
    return 0;
}