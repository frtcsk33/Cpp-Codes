#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> d;

    cout<<d.size()<<endl; //eleman yok

    d.push_back(5);//ilk eleman 
    cout<<d.size()<<endl;
    cout<<"ilk eleman: "<<d[0];

    d.push_back(15);
    cout<<"\t"<<d[1]<<endl;

    d[1] = 4; 
    int i;
    for(i=0; i<d.size(); i++){
        cout<<d[i]<<endl;
    }

    vector <int> v1(10);

    v1.push_back(15);
    for(i=0; i<v1.size(); i++){
        cout<<v1[i]<<"\t";
    }

        cout<<endl<<endl;

    vector <int> v2(5, -1);
    v2.push_back(55);
    for(i = 0; i<v2.size(); i++){
        cout<<v2[i]<<"\t";
    }

    cout<<endl<<endl;
    vector <int> v3;
    v3.assign(5, 23);

    for(i=0; i<v3.size(); i++){
        cout<<v3[i]<<"\t";
    }

    scanf(" ");
    return 0;
}