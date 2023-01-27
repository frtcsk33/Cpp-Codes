#include <iostream>

using namespace std;

struct Address{
    string cityName;
    int No;

};

struct Employee {
    int id;
    string name;
    string department;
    Address address;

};




int main(){

    Employee employee; //{12,"Mustafa Murat", "Bilisim", {"Mersin", 4}};
  
    employee.id=12;
    employee.name="mustafa murat";
    employee.department="bilisim";

    //employee.address = {"Mersin",5};
    employee.address.cityName="Mersin";
    employee.address.No=5;

    cout<<employee.id<<endl;
    cout<<employee.name<<endl;
    cout<<employee.department<<endl;
    cout<<employee.address.cityName<<endl;
    cout<<employee.address.No<<endl;
    


    scanf(" ");
    return 0;
}