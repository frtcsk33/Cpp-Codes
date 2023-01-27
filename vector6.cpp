#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <int> v1;
    vector <int>::iterator v1_iter;

    v1.push_back(10);
    v1.push_back(20);

    for(v1_iter = v1.begin(); v1_iter != v1.end(); v1_iter++){
        cout<<*v1_iter<<endl;
    }
    
    v1_iter = v1.begin();
    *v1_iter = 105;

    for(v1_iter = v1.begin(); v1_iter != v1.end(); v1_iter++){
        cout<<*v1_iter<<endl;
    }

    v1[1] = 11;

    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<endl;
    }




    scanf(" ");
    return 0;
}