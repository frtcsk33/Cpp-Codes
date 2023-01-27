#include <iostream>

using namespace std;


struct Employee {
    int id;
    string name;
    string department;


};

void show(Employee* employee12){

    employee12->id=30;


    cout << "Id: "<< employee12->id<<endl;
    cout << "isim: "<< employee12->name<<endl;
    cout << "Departman: "<< employee12->department<<endl;

}


void showEmployee(Employee employee){

    employee.id=30;

    cout << "Id: "<< employee.id<<endl;
    cout << "isim: "<< employee.name<<endl;
    cout << "Departman: "<< employee.department<<endl;
}



int main(){

     
    Employee employee1 = {12, "Mustafa Murat", "Bilisim"};
    
    //call by value... 
    showEmployee(employee1);
    cout<<"Call by value:"<<employee1.id<<endl;
    cout<<endl<<endl;
   

    //call by reference..
    show(&employee1);
    cout<<"Call by reference: "<<employee1.id<<endl;


    scanf(" ");
    return 0;
}