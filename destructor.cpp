#include <iostream>

using namespace std;


class Employee{

   
public:
    string *s;
    int *i;


    Employee(string str, int ivalue){
       s = new string;

       i = new int;
       
       *s = str;
       *i = ivalue;

    }
    void show(){
        cout<<"String degeR: "<<*s<<" "<<"int deger: "<<*i<<endl;

       
    }

    ~Employee(){
        delete s;
        delete i;
        

        cout<<"Destructor cagrildi"<<endl;
    }
};


int main(){

    Employee *emp = new Employee("mustafa Murat",25);

    emp->show();
    delete emp;

    scanf(" ");
    return 0;
}