#include <iostream>
#include <vector>


using namespace std;

int main(){
    vector <double> v6;
    vector <int> v1;
    vector <int> v2(5);
    vector <char> v3(10, 'x');
    vector <int> v4(v1);
    vector <int> v5(10);

    vector <int>::iterator itr;
    int i;

    cout<<"v4 in uzunlugu: "<<v4.size()<<endl;
    
    for(i = 0; i<10; i++){
        v1.push_back(i*i);
    }
    for(itr = v2.begin(); itr != v2.end(); itr++){
        cout<<*itr<<"\t";
    }
    cout<<endl;
    for(i=0;i<v3.size();i++)
		cout<<v3[i]<<"\t";
	
    for(i=0;i<v4.size();i++)
		cout<<v4[i]<<"\t";
        cout<<endl;

    fill(v5.begin(), v5.end(), 9);

    for(i=0;i<v5.size();i++)
		cout<<v5[i]<<"\t";	

    cout<<"----------------"<<endl;
    cout<<"v1 in uzunlugu=  "<<v1.size()<<endl;
    cout<<"v2 in uzunlugu=  "<<v2.size()<<endl;
    cout<<"v3 in uzunlugu=  "<<v3.size()<<endl;
    cout<<"v4 in uzunlugu=  "<<v4.size()<<endl;
    cout<<"v5 in uzunlugu=  "<<v5.size()<<endl;
    cout<<"v6 in uzunlugu=  "<<v6.size()<<endl;

    scanf(" ");
    return 0;
}