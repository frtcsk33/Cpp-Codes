#include <iostream>

using namespace std;



int main(){

    string array[] = {"Mustafa","Murat","Coskun"};
   
    
    string *ptr=array;
    cout<<ptr+1<<endl;
    cout<<*(ptr+1)<<endl;

    cout<<ptr[1]<<endl;

    cout<<array[2]<<endl;

    scanf(" ");
    return 0;
}