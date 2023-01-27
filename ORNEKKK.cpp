#include <iostream>
#include <list>
#include <vector>

using namespace std;







int main(){

   
    vector <int> d;
    vector <int> a(5, 12);

    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_back(40);
    d.push_back(50);

    while(!d.empty()){
        cout<<d.back()<<endl;
        d.pop_back();
        
    }

    d.swap(a);
     

   d.insert(d.begin()+1, 225);
   cout<<endl<<endl;
    while(!d.empty()){
        cout<<d.back()<<endl;
        d.pop_back();
        
    }
  









    scanf(" ");
    return 0;
}