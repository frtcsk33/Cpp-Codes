#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector <int> v1(10);
    vector <int>::iterator i;

    int deger = 1;
    i = v1.begin();

    while(i != v1.end()){
        *i++ = deger*deger;
        deger++;
    }   

    i = v1.begin();
    while(i!=v1.end()){
        cout<<*i<<"\t";
        *i++;
    }
    
    v1.erase(v1.begin(), v1.begin()+3);
    cout<<endl;

    i = v1.begin();
     while(i!=v1.end()){
        cout<<*i<<"\t";
        *i++;
    }

    v1.clear();
    cout<<"v1 = "<<v1.size()<<endl;



    scanf(" ");
    return 0;
}