#include <iostream>
#include <list> 
using namespace std;

int main(){

    list<int> l1;
    l1.push_back(10);
    l1.push_back(20);
    
    l1.push_front(15);
    l1.push_front(11);

    int i, boyut = l1.size();

    for(i=0; i<boyut; i++){
        cout<<l1.front()<<endl;
        l1.pop_front();
    }
    cout<<endl<<"l1 = "<<l1.size()<<endl;






    scanf(" ");
    return 0;
}