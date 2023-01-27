#include <iostream>

using namespace std;

class Student{
    public:
        string name;



};


int main(){

    Student student1;
    Student student2;

    student1.name="Firat coskun";
    student2.name="oguz";

    cout<< "Ogrenci 1 ismi: "<<student1.name<<endl;
    cout<< "Ogrenci 2 ismi: "<<student2.name<<endl;


    scanf(" ");
    return 0;
}