#include <iostream>
#include <list>
#include <vector>

using namespace std;







int main(){

    int arr1[] = {10,20,30,40};
    int arr2[] ={5, 6, 15, 22, 66};
    
    list <int> l1;
    list <int> l2;

    for(int i=0; i<4; i++){

        l1.push_back(arr1[i]);
    }

    for(int i = 0; i< 5; i++){

        l2.push_back(arr2[i]);
    }

    list <int>::iterator itr;
    // list <int>::iterator itr2;
    for(itr = l1.begin(); itr != l1.end(); itr++){

        cout<<*itr<<endl;

    }
    
    l1.reverse();
    l1.merge(l2);
    
    l1.sort();
    l1.unique();

     for(itr = l1.begin(); itr != l1.end(); itr++){

        cout<<*itr<<endl;

    }

    list <int> l3;
    l3.push_back(10);
    l3.push_back(20);

    l3.push_front(5);
    l3.push_front(22);

    int i,  boyut = l3.size();

    for(i = 0; i<boyut; i++ ){
        cout<<l3.front()<<" \t";
        l3.pop_front(); 
    }

    cout<<"l3 size: "<<l3.size();


    scanf(" ");
    return 0;
}