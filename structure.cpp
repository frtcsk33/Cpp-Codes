#include <iostream>

using namespace std;


struct Employee {
    int id;
    string name;
    string department;


};

int main(){

    Employee employee1 = {12, "Mustafa Murat", "Bilisim"};
    
    Employee* ptr = &employee1;

    cout<<employee1.name<<endl;

    cout<<ptr->department<<endl;

    scanf(" ");
    return 0;
}