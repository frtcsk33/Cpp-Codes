#include <iostream>

using namespace std;

struct Student{
    
    int id;
    char letter;

};




int main(){

    int a=10;


    cout<<"integer : "<<sizeof(int)<<endl;
    cout<<"char: "<<sizeof(char)<<endl;
    cout<<"double: "<<sizeof(double)<<endl;
    cout<<"float: "<<sizeof(float)<<endl;
    cout<<endl<<endl;

    cout<<"Student: "<<sizeof(Student)<<endl;

    scanf(" ");
    return 0;
}