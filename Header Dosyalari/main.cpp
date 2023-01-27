#include <iostream>

using namespace std;


class Employee{
    private:
        string name;
        int id;
        int salary;
public:
    void setName(string isim){
        name=isim;
    }   
    string getName(){
        return name;
    }
};


int main(){

    Employee employee;

    employee.setName("Mustafa murat");

    cout<<employee.getName()<<endl;
    
    scanf(" ");
    return 0;
}