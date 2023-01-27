#include<iostream>
using namespace std;
struct Address {
    string cityname;
    int no;
};
struct Employee{
    int id;
    string name;
    string deparment;
    Address adress;
};

int main(){

Employee employee ={10,"mustafa murat ","bilişim",{"ankara",5}};
cout << "employyee.id" << endl;
cout << "employyee.name" << endl;
cout << "employyee.deparment" << endl;
cout << "employyee.address.cityname" << endl;
cout << "employyee.address.no" << endl;

scanf(" ");
return 0;
}