#include <iostream>

using namespace std;

struct Address{
    string cityName;
    int No;

};

struct Employee{
    int id;
    string name;
    string department;
    Address* address;

};




int main(){

    Employee employee;
    employee.id=12;
    employee.name="Firat coskun";
    employee.department="Bilisim";
    
    Address address = {"Mersin", 5};

    employee.address=&address;

    Employee* ptr = &employee;

    cout<<ptr->address->cityName<<endl;
    cout<<ptr->address->No<<endl;

    scanf(" ");
    return 0;
}