#include <iostream>

using namespace std;


class Employee{
private:
    string name;
    int age;
public:
    
    void setAge(int yas){
        if(yas<0){
            cout<<"boyle bir deger verilemez. "<<endl;
        }
        else{
            age=yas;
        }
    }
    int getAge(){
        return age;
    }
    void setName(string isim){
        name=isim;
    }   
    string getName(){
        return name;
    }
};


int main(){

    Employee* employee= new Employee();

    employee->setName("Mustafa murat");
    employee->setAge(25);

    cout<<employee->getName()<<endl;
    cout<<employee->getAge()<<endl;




    scanf(" ");
    return 0;
}