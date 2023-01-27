#include <iostream>

using namespace std;

class Student{
    public:
        string name;

    void tellName(){
        cout<< "Benim adim "<<name<<endl;

    }

};


int main(){

    Student student1;
    Student student2;

    student1.name="Firat coskun";
    
    student2.name="mehmet";

    student1.tellName();
    student2.tellName();

    scanf(" ");
    return 0;
}