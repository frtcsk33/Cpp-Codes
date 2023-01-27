#include <iostream>
#include <vector>

using namespace std;

int main(){

    
    vector <int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);

    vector <int>::pointer ptr = &v1[0];

    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    ptr++;
    cout<<*ptr<<endl;
    




    scanf(" ");
    return 0;
}