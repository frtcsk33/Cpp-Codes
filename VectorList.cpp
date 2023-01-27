#include <iostream>
#include <list>
#include <vector>

using namespace std;







int main(){

    //vektörlerde eleman sona eklenir sadece.

    int dizi[] = {10,20,30,40,50};

    vector <int> k(dizi, dizi+5);

    for(int i = 0; i < k.size(); i++){
        cout<<k[i]<<endl;
    }


    vector <int> d;

    int a, b;

    vector <int> s(10, 5);
     d.push_back(10);
     d.push_back(20);
     d.push_back(30);
     d.push_back(40);
     d.push_back(50);

    a = d.front(); //10
    b = d.back(); //50

    cout<<"ilk eleman="<<a<<endl;
	cout<<"son eleman="<<b<<endl;

     d[1] = 1111;

    vector <int>::iterator v1;

    vector <int>::pointer itr = &d[0];

    for(v1 = s.begin(); v1 != s.end(); v1++){
        cout<<*v1<<endl;
    }

    for(int i=0; i< d.size(); i++){
        cout<<*itr<<endl;
        itr++;
    }


   

  









    scanf(" ");
    return 0;
}