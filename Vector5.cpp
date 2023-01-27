#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> v1;
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    int a=v1.back(); //50
    int b=v1.front(); //10
    
    cout<<"ilk eleman: "<<b<<endl;
    cout<<"son eleman: "<<a<<endl;
    
    const vector <int> v2=v1;

    cout<<"ilk eleman = "<<v2.front()<<endl;
    cout<<"son eleman = "<<v2.back()<<endl;
    //v2.push_back(5);


    scanf(" ");
    return 0;
}